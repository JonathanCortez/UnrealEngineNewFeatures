#include "HoudiniAssetEditorViewportClient.h"
#include "EditorModeManager.h"
#include "EngineGlobals.h"
#include "RawIndexBuffer.h"
#include "Settings/LevelEditorViewportSettings.h"
#include "Engine/StaticMesh.h"
#include "Editor.h"
#include "CanvasItem.h"
#include "CanvasTypes.h"
#include "Engine/Canvas.h"
#include "ThumbnailRendering/SceneThumbnailInfo.h"
#include "Engine/StaticMeshSocket.h"
#include "Utils.h"
#include "IHoudiniAssetEditor.h"
#include "UnrealEngine.h"

#include "StaticMeshResources.h"
#include "DistanceFieldAtlas.h"
#include "SEditorViewport.h"
#include "AdvancedPreviewScene.h"
#include "SHoudiniAssetEditorViewport.h"

#include "Runtime/Analytics/Analytics/Public/Interfaces/IAnalyticsProvider.h"
#include "EngineAnalytics.h"
#include "AI/Navigation/NavCollisionBase.h"
#include "PhysicsEngine/BodySetup.h"

#include "Engine/AssetUserData.h"
#include "Editor/EditorPerProjectUserSettings.h"
#include "AssetViewerSettings.h"
#include "HoudiniAssetActor.h"
#include "HoudiniAssetEditor.h"
#include "HoudiniAssetEditorObject.h"

#define LOCTEXT_NAMESPACE "FHoudiniAssetEditorViewportClient"

namespace {
	static const float LightRotSpeed = 0.22f;
	static const float StaticMeshEditor_RotateSpeed = 0.01f;
	static const float	StaticMeshEditor_TranslateSpeed = 0.25f;
	static const float GridSize = 2048.0f;
	static const int32 CellSize = 16;
	static const float AutoViewportOrbitCameraTranslate = 256.0f;

	static float AmbientCubemapIntensity = 0.4f;
}

FHoudiniAssetEditorViewportClient::FHoudiniAssetEditorViewportClient(TWeakPtr<IHoudiniAssetEditor> InHoudiniAssetEditor,
	const TSharedRef<SHoudiniAssetEditorViewport>& InHoudiniAssetEditorViewport,
	const TSharedRef<FAdvancedPreviewScene>& InPreviewScene, UHoudiniAssetEditorObject* InHoudiniAssetObj, TArray<UStaticMesh*> InPreviewStaticMeshes, TArray<UStaticMeshComponent*> InPreviewStaticMeshComponents)
		: FEditorViewportClient(nullptr, &InPreviewScene.Get(), StaticCastSharedRef<SEditorViewport>(InHoudiniAssetEditorViewport))
		, HoudiniAssetEditorPtr(InHoudiniAssetEditor)
		, HoudiniAssetEditorViewportPtr(InHoudiniAssetEditorViewport)
{
	// Setup defaults for the common draw helper.
	DrawHelper.bDrawPivot = false;
	DrawHelper.bDrawWorldBox = false;
	DrawHelper.bDrawKillZ = false;
	DrawHelper.bDrawGrid = false;
	DrawHelper.GridColorAxis = FColor(160,160,160);
	DrawHelper.GridColorMajor = FColor(144,144,144);
	DrawHelper.GridColorMinor = FColor(128,128,128);
	DrawHelper.PerspectiveGridSize = GridSize;
	DrawHelper.NumCells = DrawHelper.PerspectiveGridSize / (CellSize * 2);

	SetViewMode(VMI_Lit);

	WidgetMode = FWidget::WM_None;

	EngineShowFlags.SetSeparateTranslucency(true);
	EngineShowFlags.SetSnap(0);
	EngineShowFlags.SetCompositeEditorPrimitives(true);
	EngineShowFlags.SetSelectionOutline(GetDefault<ULevelEditorViewportSettings>()->bUseSelectionOutline);
	OverrideNearClipPlane(1.0f);
	bUsingOrbitCamera = true;

	bShowSimpleCollision = false;
	bShowComplexCollision = false;
	// bShowSockets = true;
	bDrawUVs = false;
	bDrawNormals = false;
	bDrawTangents = false;
	bDrawBinormals = false;
	bShowPivot = false;
	bDrawAdditionalData = true;
	bDrawVertices = false;

	bManipulating = false;

	AdvancedPreviewScene = static_cast<FAdvancedPreviewScene*>(PreviewScene);
	HoudiniAssetObj = InHoudiniAssetObj;
	
	SetPreviewMeshes(InPreviewStaticMeshes ,InPreviewStaticMeshComponents);

	// Register delegate to update the show flags when the post processing is turned on or off
	UAssetViewerSettings::Get()->OnAssetViewerSettingsChanged().AddRaw(this, &FHoudiniAssetEditorViewportClient::OnAssetViewerSettingsChanged);
	// Set correct flags according to current profile settings
	SetAdvancedShowFlagsForScene(UAssetViewerSettings::Get()->Profiles[GetMutableDefault<UEditorPerProjectUserSettings>()->AssetViewerProfileIndex].bPostProcessingEnabled);

}

FHoudiniAssetEditorViewportClient::~FHoudiniAssetEditorViewportClient()
{
	UAssetViewerSettings::Get()->OnAssetViewerSettingsChanged().RemoveAll(this);
}

void FHoudiniAssetEditorViewportClient::MouseMove(FViewport* InViewport, int32 x, int32 y)
{
	FEditorViewportClient::MouseMove(InViewport,x,y);
}

bool FHoudiniAssetEditorViewportClient::InputKey(FViewport* InViewport, int32 ControllerId, FKey Key, EInputEvent Event,
	float AmountDepressed, bool bGamepad)
{
	bool bHandled = FEditorViewportClient::InputKey(InViewport, ControllerId, Key, Event, AmountDepressed, false);

	// Handle viewport screenshot.
	bHandled |= InputTakeScreenshot( InViewport, Key, Event );

	bHandled |= AdvancedPreviewScene->HandleInputKey(InViewport, ControllerId, Key, Event, AmountDepressed, bGamepad);

	return bHandled;
}

bool FHoudiniAssetEditorViewportClient::InputAxis(FViewport* InViewport, int32 ControllerId, FKey Key, float Delta,
	float DeltaTime, int32 NumSamples, bool bGamepad)
{
	bool bResult = true;
	
	if (!bDisableInput)
	{
		bResult = AdvancedPreviewScene->HandleViewportInput(InViewport, ControllerId, Key, Delta, DeltaTime, NumSamples, bGamepad);
		if (bResult)
		{
			Invalidate();
		}
		else
		{
			bResult = FEditorViewportClient::InputAxis(InViewport, ControllerId, Key, Delta, DeltaTime, NumSamples, bGamepad);
		}
	}

	return bResult;
}

void FHoudiniAssetEditorViewportClient::ProcessClick(FSceneView& View, HHitProxy* HitProxy, FKey Key, EInputEvent Event,
	uint32 HitX, uint32 HitY)
{
	const bool bCtrlDown = Viewport->KeyState(EKeys::LeftControl) || Viewport->KeyState(EKeys::RightControl);

	bool ClearSelectedSockets = true;
	bool ClearSelectedPrims = true;
	bool ClearSelectedEdges = true;

	// if( HitProxy )
	// {
	// 	if(HitProxy->IsA( HSMESocketProxy::StaticGetType() ) )
	// 	{
	// 		HSMESocketProxy* SocketProxy = (HSMESocketProxy*)HitProxy;
	//
	// 		UStaticMeshSocket* Socket = NULL;
	//
	// 		if(SocketProxy->SocketIndex < HoudiniAsset->Sockets.Num())
	// 		{
	// 			Socket = StaticMesh->Sockets[SocketProxy->SocketIndex];
	// 		}
	//
	// 		if(Socket)
	// 		{
	// 			StaticMeshEditorPtr.Pin()->SetSelectedSocket(Socket);
	// 		}
	//
	// 		ClearSelectedSockets = false;
	// 	}
	// 	else if (HitProxy->IsA(HSMECollisionProxy::StaticGetType()) && StaticMesh->BodySetup)
	// 	{
	// 		HSMECollisionProxy* CollisionProxy = (HSMECollisionProxy*)HitProxy;			
	//
	// 		if (StaticMeshEditorPtr.Pin()->IsSelectedPrim(CollisionProxy->PrimData))
	// 		{
	// 			if (!bCtrlDown)
	// 			{
	// 				StaticMeshEditorPtr.Pin()->AddSelectedPrim(CollisionProxy->PrimData, true);
	// 			}
	// 			else
	// 			{
	// 				StaticMeshEditorPtr.Pin()->RemoveSelectedPrim(CollisionProxy->PrimData);
	// 			}
	// 		}
	// 		else
	// 		{
	// 			StaticMeshEditorPtr.Pin()->AddSelectedPrim(CollisionProxy->PrimData, !bCtrlDown);
	// 		}
	//
	// 		// Force the widget to translate, if not already set
	// 		if (WidgetMode == FWidget::WM_None)
	// 		{
	// 			WidgetMode = FWidget::WM_Translate;
	// 		}
	//
	// 		ClearSelectedPrims = false;
	// 	}
	// 	else if (IsShowSocketsChecked() && HitProxy->IsA(HSMEVertexProxy::StaticGetType()))
	// 	{
	// 		UStaticMeshSocket* Socket = StaticMeshEditorPtr.Pin()->GetSelectedSocket();
	//
	// 		if (Socket)
	// 		{
	// 			HSMEVertexProxy* VertexProxy = (HSMEVertexProxy*)HitProxy;
	// 			TSharedPtr<IStaticMeshEditor> StaticMeshEditor = StaticMeshEditorPtr.Pin();
	// 			if (StaticMeshEditor.IsValid())
	// 			{
	// 				FStaticMeshLODResources& LODModel = StaticMesh->RenderData->LODResources[StaticMeshEditor->GetCurrentLODIndex()];
	// 				FIndexArrayView Indices = LODModel.IndexBuffer.GetArrayView();
	// 				const uint32 Index = Indices[VertexProxy->Index];
	//
	// 				Socket->RelativeLocation = LODModel.VertexBuffers.PositionVertexBuffer.VertexPosition(Index);
	// 				Socket->RelativeRotation = FRotationMatrix::MakeFromYZ(LODModel.VertexBuffers.StaticMeshVertexBuffer.VertexTangentZ(Index), LODModel.VertexBuffers.StaticMeshVertexBuffer.VertexTangentX(Index)).Rotator();
	//
	// 				ClearSelectedSockets = false;
	// 			}
	// 		}
	// 	}
	// }
	// else
	// {
	// 	const bool bShiftDown = Viewport->KeyState(EKeys::LeftShift) || Viewport->KeyState(EKeys::RightShift);
	//
	// 	if(!bCtrlDown && !bShiftDown)
	// 	{
	// 		SelectedEdgeIndices.Empty();
	// 	}
	//
	// 	// Check to see if we clicked on a mesh edge
	// 	if( StaticMeshComponent != NULL && Viewport->GetSizeXY().X > 0 && Viewport->GetSizeXY().Y > 0 )
	// 	{
	// 		FSceneViewFamilyContext ViewFamily( FSceneViewFamily::ConstructionValues( Viewport, GetScene(), EngineShowFlags ));
	// 		FSceneView* View = CalcSceneView(&ViewFamily);
	// 		FViewportClick ViewportClick(View, this, Key, Event, HitX, HitY);
	//
	// 		const FVector ClickLineStart( ViewportClick.GetOrigin() );
	// 		const FVector ClickLineEnd( ViewportClick.GetOrigin() + ViewportClick.GetDirection() * HALF_WORLD_MAX );
	//
	// 		// Don't bother doing a line check as there is only one mesh in the SME and it makes fuzzy selection difficult
	// 		// 	FHitResult CheckResult( 1.0f );
	// 		// 	if( StaticMeshComponent->LineCheck(
	// 		// 			CheckResult,	// In/Out: Result
	// 		// 			ClickLineEnd,	// Target
	// 		// 			ClickLineStart,	// Source
	// 		// 			FVector::ZeroVector,	// Extend
	// 		// 			TRACE_ComplexCollision ) )	// Trace flags
	// 		{
	// 			// @todo: Should be in screen space ideally
	// 			const float WorldSpaceMinClickDistance = 100.0f;
	//
	// 			float ClosestEdgeDistance = FLT_MAX;
	// 			TArray< int32 > ClosestEdgeIndices;
	// 			FVector ClosestEdgeVertices[ 2 ];
	//
	// 			const uint32 LODLevel = FMath::Clamp( StaticMeshComponent->ForcedLodModel - 1, 0, StaticMeshComponent->GetStaticMesh()->GetNumLODs() - 1 );
	// 			if (StaticMeshComponent->GetStaticMesh()->HasValidRenderData(true, LODLevel))
	// 			{
	// 				FStaticMeshLODResources& RenderData = StaticMeshComponent->GetStaticMesh()->RenderData->LODResources[LODLevel];
	//
	// 				int32 NumBackFacingTriangles = 0;
	// 				uint32 IndexBufferIndex = 0;
	// 				for (int32 SectionIndex = 0; SectionIndex < RenderData.Sections.Num(); ++SectionIndex)
	// 				{
	// 					const FStaticMeshSection& Section = RenderData.Sections[SectionIndex];
	// 					const int32 FaceMaterialIndex = Section.MaterialIndex;
	// 					const int32 NumFaces = Section.NumTriangles;
	// 					for (int32 FaceIndex = 0; FaceIndex < NumFaces; ++FaceIndex)
	// 					{
	// 						FVector VertexPosition[3];
	// 						uint32 VertexIndex[3];
	// 						uint32 WedgeIndex[3];
	// 						for (int32 Corner = 0; Corner < 3; ++Corner)
	// 						{
	// 							WedgeIndex[Corner] = IndexBufferIndex;
	// 							VertexIndex[Corner] = RenderData.IndexBuffer.GetIndex(IndexBufferIndex);
	// 							VertexPosition[Corner] = RenderData.VertexBuffers.PositionVertexBuffer.VertexPosition(VertexIndex[Corner]);
	// 							IndexBufferIndex++;
	// 						}
	// 						// We disable edge selection where all adjoining triangles are back face culled and the 
	// 						// material is not two-sided. This prevents edges that are back-face culled from being selected.
	// 						bool bIsBackFacing = false;
	// 						bool bIsTwoSided = false;
	// 						UMaterialInterface* Material = StaticMeshComponent->GetMaterial(FaceMaterialIndex);
	// 						if (Material && Material->GetMaterial())
	// 						{
	// 							bIsTwoSided = Material->IsTwoSided();
	// 						}
	// 						if (!bIsTwoSided)
	// 						{
	// 							// Check whether triangle if back facing 
	// 							const FVector A = VertexPosition[0];
	// 							const FVector B = VertexPosition[1];
	// 							const FVector C = VertexPosition[2];
	//
	// 							// Compute the per-triangle normal
	// 							const FVector BA = A - B;
	// 							const FVector CA = A - C;
	// 							const FVector TriangleNormal = (CA ^ BA).GetSafeNormal();
	//
	// 							// Transform the view position from world to component space
	// 							const FVector ComponentSpaceViewOrigin = StaticMeshComponent->GetComponentTransform().InverseTransformPosition(View->ViewMatrices.GetViewOrigin());
	//
	// 							// Determine which side of the triangle's plane that the view position lies on.
	// 							bIsBackFacing = (FVector::PointPlaneDist(ComponentSpaceViewOrigin, A, TriangleNormal) < 0.0f);
	// 						}
	//
	// 						for (int32 Corner = 0; Corner < 3; ++Corner)
	// 						{
	// 							const int32 Corner2 = (Corner + 1) % 3;
	//
	// 							FVector EdgeVertices[2];
	// 							EdgeVertices[0] = VertexPosition[Corner];
	// 							EdgeVertices[1] = VertexPosition[Corner2];
	//
	// 							// First check to see if this edge is already in our "closest to click" list.
	// 							// Most edges are shared by two faces in our raw triangle data set, so we want
	// 							// to select (or deselect) both of these edges that the user clicks on (what
	// 							// appears to be) a single edge
	// 							if (ClosestEdgeIndices.Num() > 0 &&
	// 								((EdgeVertices[0].Equals(ClosestEdgeVertices[0]) && EdgeVertices[1].Equals(ClosestEdgeVertices[1])) ||
	// 								(EdgeVertices[0].Equals(ClosestEdgeVertices[1]) && EdgeVertices[1].Equals(ClosestEdgeVertices[0]))))
	// 							{
	// 								// Edge overlaps the closest edge we have so far, so just add it to the list
	// 								ClosestEdgeIndices.Add(WedgeIndex[Corner]);
	// 								// Increment the number of back facing triangles if the adjoining triangle 
	// 								// is back facing and isn't two-sided
	// 								if (bIsBackFacing && !bIsTwoSided)
	// 								{
	// 									++NumBackFacingTriangles;
	// 								}
	// 							}
	// 							else
	// 							{
	// 								FVector WorldSpaceEdgeStart(StaticMeshComponent->GetComponentTransform().TransformPosition(EdgeVertices[0]));
	// 								FVector WorldSpaceEdgeEnd(StaticMeshComponent->GetComponentTransform().TransformPosition(EdgeVertices[1]));
	//
	// 								// Determine the mesh edge that's closest to the ray cast through the eye towards the click location
	// 								FVector ClosestPointToEdgeOnClickLine;
	// 								FVector ClosestPointToClickLineOnEdge;
	// 								FMath::SegmentDistToSegment(
	// 									ClickLineStart,
	// 									ClickLineEnd,
	// 									WorldSpaceEdgeStart,
	// 									WorldSpaceEdgeEnd,
	// 									ClosestPointToEdgeOnClickLine,
	// 									ClosestPointToClickLineOnEdge);
	//
	// 								// Compute the minimum distance (squared)
	// 								const float MinDistanceToEdgeSquared = (ClosestPointToClickLineOnEdge - ClosestPointToEdgeOnClickLine).SizeSquared();
	//
	// 								if (MinDistanceToEdgeSquared <= WorldSpaceMinClickDistance)
	// 								{
	// 									if (MinDistanceToEdgeSquared <= ClosestEdgeDistance)
	// 									{
	// 										// This is the closest edge to the click line that we've found so far!
	// 										ClosestEdgeDistance = MinDistanceToEdgeSquared;
	// 										ClosestEdgeVertices[0] = EdgeVertices[0];
	// 										ClosestEdgeVertices[1] = EdgeVertices[1];
	//
	// 										ClosestEdgeIndices.Reset();
	// 										ClosestEdgeIndices.Add(WedgeIndex[Corner]);
	//
	// 										// Reset the number of back facing triangles.
	// 										NumBackFacingTriangles = (bIsBackFacing && !bIsTwoSided) ? 1 : 0;
	// 									}
	// 								}
	// 							}
	// 						}
	// 					}
	// 				}
	//
	//
	// 				// Did the user click on an edge? Edges must also have at least one adjoining triangle 
	// 				// which isn't back face culled (for one-sided materials)
	// 				if (ClosestEdgeIndices.Num() > 0 && ClosestEdgeIndices.Num() > NumBackFacingTriangles)
	// 				{
	// 					for (int32 CurIndex = 0; CurIndex < ClosestEdgeIndices.Num(); ++CurIndex)
	// 					{
	// 						const int32 CurEdgeIndex = ClosestEdgeIndices[CurIndex];
	//
	// 						if (bCtrlDown)
	// 						{
	// 							// Toggle selection
	// 							if (SelectedEdgeIndices.Contains(CurEdgeIndex))
	// 							{
	// 								SelectedEdgeIndices.Remove(CurEdgeIndex);
	// 							}
	// 							else
	// 							{
	// 								SelectedEdgeIndices.Add(CurEdgeIndex);
	// 							}
	// 						}
	// 						else
	// 						{
	// 							// Append to selection
	// 							SelectedEdgeIndices.Add(CurEdgeIndex);
	// 						}
	// 					}
	//
	// 					// Reset cached vertices and uv coordinates.
	// 					SelectedEdgeVertices.Reset();
	// 					for (int32 TexCoordIndex = 0; TexCoordIndex < MAX_STATIC_TEXCOORDS; ++TexCoordIndex)
	// 					{
	// 						SelectedEdgeTexCoords[TexCoordIndex].Reset();
	// 					}
	//
	// 					for (FSelectedEdgeSet::TIterator SelectionIt(SelectedEdgeIndices); SelectionIt; ++SelectionIt)
	// 					{
	// 						const uint32 EdgeIndex = *SelectionIt;
	// 						const uint32 FaceIndex = EdgeIndex / 3;
	//
	// 						const uint32 WedgeIndex = FaceIndex * 3 + (EdgeIndex % 3);
	// 						const uint32 WedgeIndex2 = FaceIndex * 3 + ((EdgeIndex + 1) % 3);
	//
	// 						const uint32 VertexIndex = RenderData.IndexBuffer.GetIndex(WedgeIndex);
	// 						const uint32 VertexIndex2 = RenderData.IndexBuffer.GetIndex(WedgeIndex2);
	// 						// Cache edge vertices in local space.
	// 						FVector EdgeVertices[2];
	// 						EdgeVertices[0] = RenderData.VertexBuffers.PositionVertexBuffer.VertexPosition(VertexIndex);
	// 						EdgeVertices[1] = RenderData.VertexBuffers.PositionVertexBuffer.VertexPosition(VertexIndex2);
	//
	// 						SelectedEdgeVertices.Add(EdgeVertices[0]);
	// 						SelectedEdgeVertices.Add(EdgeVertices[1]);
	//
	// 						// Cache UV
	// 						for (uint32 TexCoordIndex = 0; TexCoordIndex < MAX_STATIC_TEXCOORDS; ++TexCoordIndex)
	// 						{
	// 							if (RenderData.VertexBuffers.StaticMeshVertexBuffer.GetNumTexCoords() > TexCoordIndex)
	// 							{
	// 								FVector2D UVIndex1, UVIndex2;
	// 								UVIndex1 = RenderData.VertexBuffers.StaticMeshVertexBuffer.GetVertexUV(VertexIndex, TexCoordIndex);
	// 								UVIndex2 = RenderData.VertexBuffers.StaticMeshVertexBuffer.GetVertexUV(VertexIndex2, TexCoordIndex);
	// 								SelectedEdgeTexCoords[TexCoordIndex].Add(UVIndex1);
	// 								SelectedEdgeTexCoords[TexCoordIndex].Add(UVIndex2);
	// 							}
	// 						}
	// 					}
	//
	// 					ClearSelectedEdges = false;
	// 				}
	// 			}
	// 		}
	// 	}
	// }

	// if (ClearSelectedSockets && HoudiniAssetEditorPtr.Pin()->GetSelectedSocket())
	// {
	// 	HoudiniAssetEditorPtr.Pin()->SetSelectedSocket(NULL);
	// }
	// if (ClearSelectedPrims)
	// {
	// 	HoudiniAssetEditorPtr.Pin()->ClearSelectedPrims();
	// }
	// if (ClearSelectedEdges)
	// {
	// 	SelectedEdgeIndices.Empty();
	// 	SelectedEdgeVertices.Empty();
	// 	for (int32 TexCoordIndex = 0; TexCoordIndex < MAX_STATIC_TEXCOORDS; ++TexCoordIndex)
	// 	{
	// 		SelectedEdgeTexCoords[TexCoordIndex].Empty();
	// 	}
	// }

	Invalidate();
}

void FHoudiniAssetEditorViewportClient::Tick(float DeltaSeconds)
{
	FEditorViewportClient::Tick(DeltaSeconds);

	// Tick the preview scene world.
	if (!GIntraFrameDebuggingGameThread)
	{
		PreviewScene->GetWorld()->Tick(LEVELTICK_All, DeltaSeconds);
	}
}

// struct HSMECollisionProxy : public HHitProxy
// {
// 	DECLARE_HIT_PROXY();
//
// 	IHoudiniAssetEditor::FPrimData	PrimData;
//
// 	HSMECollisionProxy(const IHoudiniAssetEditor::FPrimData& InPrimData) :
// 		HHitProxy(HPP_UI),
// 		PrimData(InPrimData) {}
//
// 	HSMECollisionProxy(EAggCollisionShape::Type InPrimType, int32 InPrimIndex) :
// 		HHitProxy(HPP_UI),
// 		PrimData(InPrimType, InPrimIndex) {}
// };
// IMPLEMENT_HIT_PROXY(HSMECollisionProxy, HHitProxy);

// /**
// * A hit proxy class for sockets.
// */
// struct HSMESocketProxy : public HHitProxy
// {
// 	DECLARE_HIT_PROXY( );
//
// 	int32							SocketIndex;
//
// 	HSMESocketProxy(int32 InSocketIndex) :
// 		HHitProxy( HPP_UI ), 
// 		SocketIndex( InSocketIndex ) {}
// };
// IMPLEMENT_HIT_PROXY(HSMESocketProxy, HHitProxy);

/**
* A hit proxy class for vertices.
*/
struct HSMEVertexProxy : public HHitProxy
{
	DECLARE_HIT_PROXY();

	uint32		Index;

	HSMEVertexProxy(uint32 InIndex)
		: HHitProxy( HPP_UI )
		, Index( InIndex )
	{}
};
IMPLEMENT_HIT_PROXY(HSMEVertexProxy, HHitProxy);

void DrawCustomComplex(FPrimitiveDrawInterface* PDI, FTriMeshCollisionData Mesh, const FColor Color)
{
	for (int i = 0; i < Mesh.Indices.Num(); ++i)
	{
		PDI->DrawLine(Mesh.Vertices[Mesh.Indices[i].v0], Mesh.Vertices[Mesh.Indices[i].v1], Color, SDPG_World);
		PDI->DrawLine(Mesh.Vertices[Mesh.Indices[i].v1], Mesh.Vertices[Mesh.Indices[i].v2], Color, SDPG_World);
		PDI->DrawLine(Mesh.Vertices[Mesh.Indices[i].v2], Mesh.Vertices[Mesh.Indices[i].v0], Color, SDPG_World);
	}
}

void FHoudiniAssetEditorViewportClient::Draw(const FSceneView* View, FPrimitiveDrawInterface* PDI)
{
	FEditorViewportClient::Draw(View, PDI);

	TSharedPtr<IHoudiniAssetEditor> HoudiniAssetEditor = HoudiniAssetEditorPtr.Pin();

	if(HoudiniAssetEditor)
	{
		for(int32 s = 0 ; s < StaticMeshes.Num(); s++ )
		{
			if(!StaticMeshes[s]->RenderData || !StaticMeshes[s]->RenderData->LODResources.IsValidIndex(HoudiniAssetEditor->GetCurrentLODIndex()))
			{
				// Guard against corrupted meshes
				return;
			}
		
			// Draw simple shapes if we are showing simple, or showing complex but using simple as complex
			// if (StaticMeshes[s]->BodySetup && (bShowSimpleCollision || (bShowComplexCollision && StaticMeshes[s]->BodySetup->CollisionTraceFlag == ECollisionTraceFlag::CTF_UseSimpleAsComplex)))
			// {
			// 	// Ensure physics mesh is created before we try and draw it
			// 	StaticMeshes[s]->BodySetup->CreatePhysicsMeshes();
			//
			// 	const FColor SelectedColor(20, 220, 20);
			// 	const FColor UnselectedColor(0, 125, 0);
			//
			// 	const FVector VectorScaleOne(1.0f);
			//
			// 	// Draw bodies
			// 	FKAggregateGeom* AggGeom = &StaticMeshes[s]->BodySetup->AggGeom;
			//
			// 	for (int32 i = 0; i < AggGeom->SphereElems.Num(); ++i)
			// 	{
			// 		HSMECollisionProxy* HitProxy = new HSMECollisionProxy(EAggCollisionShape::Sphere, i);
			// 		PDI->SetHitProxy(HitProxy);
			//
			// 		const FColor CollisionColor = HoudiniAssetEditor->IsSelectedPrim(HitProxy->PrimData) ? SelectedColor : UnselectedColor;
			// 		const FKSphereElem& SphereElem = AggGeom->SphereElems[i];
			// 		const FTransform ElemTM = SphereElem.GetTransform();
			// 		SphereElem.DrawElemWire(PDI, ElemTM, VectorScaleOne, CollisionColor);
			//
			// 		PDI->SetHitProxy(NULL);
			// 	}
			//
			// 	for (int32 i = 0; i < AggGeom->BoxElems.Num(); ++i)
			// 	{
			// 		HSMECollisionProxy* HitProxy = new HSMECollisionProxy(EAggCollisionShape::Box, i);
			// 		PDI->SetHitProxy(HitProxy);
			//
			// 		const FColor CollisionColor = HoudiniAssetEditor->IsSelectedPrim(HitProxy->PrimData) ? SelectedColor : UnselectedColor;
			// 		const FKBoxElem& BoxElem = AggGeom->BoxElems[i];
			// 		const FTransform ElemTM = BoxElem.GetTransform();
			// 		BoxElem.DrawElemWire(PDI, ElemTM, VectorScaleOne, CollisionColor);
			//
			// 		PDI->SetHitProxy(NULL);
			// 	}
			//
			// 	for (int32 i = 0; i < AggGeom->SphylElems.Num(); ++i)
			// 	{
			// 		HSMECollisionProxy* HitProxy = new HSMECollisionProxy(EAggCollisionShape::Sphyl, i);
			// 		PDI->SetHitProxy(HitProxy);
			//
			// 		const FColor CollisionColor = HoudiniAssetEditor->IsSelectedPrim(HitProxy->PrimData) ? SelectedColor : UnselectedColor;
			// 		const FKSphylElem& SphylElem = AggGeom->SphylElems[i];
			// 		const FTransform ElemTM = SphylElem.GetTransform();
			// 		SphylElem.DrawElemWire(PDI, ElemTM, VectorScaleOne, CollisionColor);
			//
			// 		PDI->SetHitProxy(NULL);
			// 	}
			//
			// 	for (int32 i = 0; i < AggGeom->ConvexElems.Num(); ++i)
			// 	{
			// 		HSMECollisionProxy* HitProxy = new HSMECollisionProxy(EAggCollisionShape::Convex, i);
			// 		PDI->SetHitProxy(HitProxy);
			//
			// 		const FColor CollisionColor = HoudiniAssetEditor->IsSelectedPrim(HitProxy->PrimData) ? SelectedColor : UnselectedColor;
			// 		const FKConvexElem& ConvexElem = AggGeom->ConvexElems[i];
			// 		const FTransform ElemTM = ConvexElem.GetTransform();
			// 		ConvexElem.DrawElemWire(PDI, ElemTM, 1.f, CollisionColor);
			//
			// 		PDI->SetHitProxy(NULL);
			// 	}
			// }
			//
			// if (bShowComplexCollision && StaticMeshes[s]->ComplexCollisionMesh && StaticMeshes[s]->BodySetup->CollisionTraceFlag != ECollisionTraceFlag::CTF_UseSimpleAsComplex)
			// {
			// 	const FColor SelectedColor(20, 20, 220);
			// 	const FColor UnselectedColor(0, 0, 125);
			//
			// 	HSMECollisionProxy* HitProxy = new HSMECollisionProxy(EAggCollisionShape::Convex, 0);
			// 	PDI->SetHitProxy(HitProxy);
			// 	const FColor CollisionColor = HoudiniAssetEditor->IsSelectedPrim(HitProxy->PrimData) ? SelectedColor : UnselectedColor;
			// 	DrawCustomComplex(PDI, CollisionMeshData, CollisionColor);
			// 	PDI->SetHitProxy(nullptr);
			// }

			// if( bShowSockets )
			// {
			// 	const FColor SocketColor = FColor(255, 128, 128);
			//
			// 	for(int32 i=0; i < StaticMesh->Sockets.Num(); i++)
			// 	{
			// 		UStaticMeshSocket* Socket = StaticMesh->Sockets[i];
			// 		if(Socket)
			// 		{
			// 			FMatrix SocketTM;
			// 			Socket->GetSocketMatrix(SocketTM, StaticMeshComponent);
			// 			PDI->SetHitProxy( new HSMESocketProxy(i) );
			// 			DrawWireDiamond(PDI, SocketTM, 5.f, SocketColor, SDPG_Foreground);
			// 			PDI->SetHitProxy( NULL );
			// 		}
			// 	}
			// }

			// Draw any edges that are currently selected by the user
			// if( SelectedEdgeIndices.Num() > 0 )
			// {
			// 	for(int32 VertexIndex = 0; VertexIndex < SelectedEdgeVertices.Num(); VertexIndex += 2)
			// 	{
			// 		FVector EdgeVertices[ 2 ];
			// 		EdgeVertices[ 0 ] = SelectedEdgeVertices[VertexIndex];
			// 		EdgeVertices[ 1 ] = SelectedEdgeVertices[VertexIndex + 1];
			//
			// 		PDI->DrawLine(
			// 			StaticMeshComponent->GetComponentTransform().TransformPosition( EdgeVertices[ 0 ] ),
			// 			StaticMeshComponent->GetComponentTransform().TransformPosition( EdgeVertices[ 1 ] ),
			// 			FColor( 255, 255, 0 ),
			// 			SDPG_World );
			// 	}
			// }

			if( bShowPivot )
			{
				FUnrealEdUtils::DrawWidget(View, PDI, StaticMeshComponents[s]->GetComponentTransform().ToMatrixWithScale(), 0, 0, EAxisList::All, EWidgetMovementMode::WMM_Translate, false);
			}

			if( bDrawAdditionalData )
			{
				// const TArray<UAssetUserData*>* UserDataArray = HoudiniAsset->GetAssetUserDataArray();
				// if (UserDataArray != NULL)
				// {
				// 	for (int32 AdditionalDataIndex = 0; AdditionalDataIndex < UserDataArray->Num(); ++AdditionalDataIndex)
				// 	{
				// 		if ((*UserDataArray)[AdditionalDataIndex] != NULL)
				// 		{
				// 			(*UserDataArray)[AdditionalDataIndex]->Draw(PDI, View);
				// 		}
				// 	}
				// }

				// if (HoudiniAsset->NavCollision 
				// 	&& HoudiniAsset->bHasNavigationData)
				// {
				// 	// Draw the static mesh's body setup (simple collision)
				// 	FTransform GeomTransform(StaticMeshComponent->GetComponentTransform());
				// 	FColor NavCollisionColor = FColor(118, 84, 255, 255);
				// 	HoudiniAsset->NavCollision->DrawSimpleGeom(PDI, GeomTransform, FColorList::LimeGreen);
				// }
			}
		}

		//TODO: When to many mesh on scene and Draw is enabled ms drops significantly, Improve performance.
		if( bDrawNormals || bDrawTangents || bDrawBinormals || bDrawVertices )
		{
			for(auto Comp : HoudiniAssetEditor->GetHoudiniAssetEditor()->GetHoudiniActorComponents())
			{
				if(Comp->IsA(UInstancedStaticMeshComponent::StaticClass()))
				{
					for(auto InstanceData : HoudiniAssetObj->HoudiniInstanceData)
					{
						for(auto Transform : InstanceData.InstanceTransform)
						{
							FMatrix LocalToWorldInverseTranspose = Transform.ToMatrixWithScale().InverseFast().GetTransposed();
							DisplayHandles(LocalToWorldInverseTranspose,Transform, InstanceData.InstanceMesh, PDI);
						}
					
					}
				}
				else if(Comp->IsA(UStaticMeshComponent::StaticClass()))
				{
					UStaticMeshComponent* MeshComponent = Cast<UStaticMeshComponent>(Comp);
					if(!MeshComponent)
						break;
				
					FMatrix LocalToWorldInverseTranspose = MeshComponent->GetComponentTransform().ToMatrixWithScale().InverseFast().GetTransposed();
					FTransform WorldPos = MeshComponent->GetComponentTransform();
					DisplayHandles(LocalToWorldInverseTranspose,WorldPos,MeshComponent->GetStaticMesh(), PDI);
				}
			}
		}
	}
}

void FHoudiniAssetEditorViewportClient::DisplayHandles(FMatrix LocalToWorldInverseTranspose, FTransform ComponentTransform, UStaticMesh* Mesh, FPrimitiveDrawInterface* PDI)
{
	FStaticMeshLODResources& LODModel = Mesh->RenderData->LODResources[HoudiniAssetEditorPtr.Pin()->GetCurrentLODIndex()];
	FIndexArrayView Indices = LODModel.IndexBuffer.GetArrayView();
	uint32 NumIndices = Indices.Num();

	for (uint32 n = 0; n < NumIndices; n++)
	{
		const FVector& VertexPos = LODModel.VertexBuffers.PositionVertexBuffer.VertexPosition( Indices[n] );
		
		const FVector WorldPos = ComponentTransform.TransformPosition( VertexPos );
		const FVector& Normal = LODModel.VertexBuffers.StaticMeshVertexBuffer.VertexTangentZ( Indices[n] ); 
		const FVector& Binormal = LODModel.VertexBuffers.StaticMeshVertexBuffer.VertexTangentY( Indices[n] ); 
		const FVector& Tangent = LODModel.VertexBuffers.StaticMeshVertexBuffer.VertexTangentX( Indices[n] ); 
		
		const float Len = 5.0f;
		const float BoxLen = 2.0f;
		const FVector Box(BoxLen);
		
		if( bDrawNormals )
		{
			PDI->DrawLine( WorldPos, WorldPos+LocalToWorldInverseTranspose.TransformVector( Normal ).GetSafeNormal() * Len, FLinearColor( 0.0f, 1.0f, 0.0f), SDPG_World );
		}
		
		if( bDrawTangents )
		{
			PDI->DrawLine( WorldPos, WorldPos+LocalToWorldInverseTranspose.TransformVector( Tangent ).GetSafeNormal() * Len, FLinearColor( 1.0f, 0.0f, 0.0f), SDPG_World );
		}
		
		if( bDrawBinormals )
		{
			PDI->DrawLine( WorldPos, WorldPos+LocalToWorldInverseTranspose.TransformVector( Binormal ).GetSafeNormal() * Len, FLinearColor( 0.0f, 0.0f, 1.0f), SDPG_World );
		}
		
		if( bDrawVertices )
		{								
			PDI->SetHitProxy(new HSMEVertexProxy(n));
			DrawWireBox( PDI, FBox(WorldPos - Box, WorldPos + Box), FLinearColor(0.0f, 1.0f, 0.0f), SDPG_World );
			PDI->SetHitProxy(NULL);								
		}
	}
	
}

static void DrawAngles(FCanvas* Canvas, int32 XPos, int32 YPos, EAxisList::Type ManipAxis, FWidget::EWidgetMode MoveMode, const FRotator& Rotation, const FVector& Translation)
{
	FString OutputString(TEXT(""));
	if (MoveMode == FWidget::WM_Rotate && Rotation.IsZero() == false)
	{
		//Only one value moves at a time
		const FVector EulerAngles = Rotation.Euler();
		if (ManipAxis == EAxisList::X)
		{
			OutputString += FString::Printf(TEXT("Roll: %0.2f"), EulerAngles.X);
		}
		else if (ManipAxis == EAxisList::Y)
		{
			OutputString += FString::Printf(TEXT("Pitch: %0.2f"), EulerAngles.Y);
		}
		else if (ManipAxis == EAxisList::Z)
		{
			OutputString += FString::Printf(TEXT("Yaw: %0.2f"), EulerAngles.Z);
		}
	}
	else if (MoveMode == FWidget::WM_Translate && Translation.IsZero() == false)
	{
		//Only one value moves at a time
		if (ManipAxis == EAxisList::X)
		{
			OutputString += FString::Printf(TEXT(" %0.2f"), Translation.X);
		}
		else if (ManipAxis == EAxisList::Y)
		{
			OutputString += FString::Printf(TEXT(" %0.2f"), Translation.Y);
		}
		else if (ManipAxis == EAxisList::Z)
		{
			OutputString += FString::Printf(TEXT(" %0.2f"), Translation.Z);
		}
	}

	if (OutputString.Len() > 0)
	{
		FCanvasTextItem TextItem( FVector2D(XPos, YPos), FText::FromString( OutputString ), GEngine->GetSmallFont(), FLinearColor::White );
		Canvas->DrawItem( TextItem );
	}
}


void FHoudiniAssetEditorViewportClient::DrawCanvas(FViewport& InViewport, FSceneView& View, FCanvas& Canvas)
{
	auto HoudiniAssetEditor = HoudiniAssetEditorPtr.Pin();
	auto HoudiniAssetEditorViewport = HoudiniAssetEditorViewportPtr.Pin();
	if (!HoudiniAssetEditor.IsValid() || !HoudiniAssetEditorViewport.IsValid())
	{
		return;
	}

	const int32 HalfX = Viewport->GetSizeXY().X/2 / GetDPIScale();
	const int32 HalfY = Viewport->GetSizeXY().Y/2 / GetDPIScale();

	// Draw socket names if desired.
	// if( bShowSockets )
	// {
	// 	for(int32 i=0; i<StaticMesh->Sockets.Num(); i++)
	// 	{
	// 		UStaticMeshSocket* Socket = StaticMesh->Sockets[i];
	// 		if(Socket!=NULL)
	// 		{
	// 			FMatrix SocketTM;
	// 			Socket->GetSocketMatrix(SocketTM, StaticMeshComponent);
	// 			const FVector SocketPos	= SocketTM.GetOrigin();
	// 			const FPlane proj		= View.Project( SocketPos );
	// 			if(proj.W > 0.f)
	// 			{
	// 				const int32 XPos = HalfX + ( HalfX * proj.X );
	// 				const int32 YPos = HalfY + ( HalfY * (proj.Y * -1) );
	//
	// 				FCanvasTextItem TextItem( FVector2D( XPos, YPos ), FText::FromString( Socket->SocketName.ToString() ), GEngine->GetSmallFont(), FLinearColor(FColor(255,196,196)) );
	// 				Canvas.DrawItem( TextItem );	
	//
	// 				const UStaticMeshSocket* SelectedSocket = StaticMeshEditor->GetSelectedSocket();
	// 				if (bManipulating && SelectedSocket == Socket)
	// 				{
	// 					//Figure out the text height
	// 					FTextSizingParameters Parameters(GEngine->GetSmallFont(), 1.0f, 1.0f);
	// 					UCanvas::CanvasStringSize(Parameters, *Socket->SocketName.ToString());
	// 					int32 YL = FMath::TruncToInt(Parameters.DrawYL);
	//
	// 					DrawAngles(&Canvas, XPos, YPos + YL, 
	// 						Widget->GetCurrentAxis(), 
	// 						GetWidgetMode(),
	// 						Socket->RelativeRotation,
	// 						Socket->RelativeLocation);
	// 				}
	// 			}
	// 		}
	// 	}
	// } 

	TArray<SHoudiniAssetEditorViewport::FOverlayTextItem> TextItems;
	//TODO : Fix these to work for all Static Meshes that are generated by the HDA into 1 if possible.
	const int32 CurrentLODLevel = [this, &HoudiniAssetEditor, &View]()
	{
		int32 LOD = HoudiniAssetEditor->GetCurrentLODLevel();
		return (LOD == 0 && StaticMeshes.Num() > 0) ?
			ComputeStaticMeshLOD(StaticMeshes[0]->RenderData.Get(), StaticMeshComponents[0]->Bounds.Origin, StaticMeshComponents[0]->Bounds.SphereRadius, View, StaticMeshes[0]->MinLOD.Default)
			:
			LOD - 1;
	}();

	const int32 CurrentMinLODLevel = (StaticMeshes.Num() > 0) ? StaticMeshes[0]->MinLOD.GetValue() : 0;
	const bool bBelowMinLOD = CurrentLODLevel < CurrentMinLODLevel;
	TextItems.Add(SHoudiniAssetEditorViewport::FOverlayTextItem(
		FText::Format(NSLOCTEXT("UnrealEd", "LOD_F", "LOD:  {0}"), FText::AsNumber(CurrentLODLevel)),
		bBelowMinLOD ? "TextBlock.ShadowedTextWarning" : "TextBlock.ShadowedText"));
	
	if ( bBelowMinLOD )
	{
		TextItems.Add(SHoudiniAssetEditorViewport::FOverlayTextItem(
			FText::Format(NSLOCTEXT("UnrealEd", "BelowMinLODWarning_F", "Selected LOD is below the minimum of {0}"),
				FText::AsNumber(CurrentMinLODLevel)), "TextBlock.ShadowedTextWarning"));
	}

	const float CurrentScreenSize = (StaticMeshComponents.Num() > 0) ? ComputeBoundsScreenSize(StaticMeshComponents[0]->Bounds.Origin, StaticMeshComponents[0]->Bounds.SphereRadius, View) : 1.0f ;
	FNumberFormattingOptions FormatOptions;
	FormatOptions.MinimumFractionalDigits = 3;
	FormatOptions.MaximumFractionalDigits = 6;
	FormatOptions.MaximumIntegralDigits = 6;
	TextItems.Add(SHoudiniAssetEditorViewport::FOverlayTextItem(
		FText::Format(NSLOCTEXT("UnrealEd", "ScreenSize_F", "Current Screen Size :  {0}"), FText::AsNumber(CurrentScreenSize, &FormatOptions))));

	TextItems.Add(SHoudiniAssetEditorViewport::FOverlayTextItem(
		FText::Format(NSLOCTEXT("UnrealEd", "Triangles_F", "Triangles :  {0}"), FText::AsNumber(HoudiniAssetEditorPtr.Pin()->GetNumTriangles(CurrentLODLevel)))));

	TextItems.Add(SHoudiniAssetEditorViewport::FOverlayTextItem(
		FText::Format(NSLOCTEXT("UnrealEd", "Vertices_F", "Vertices :  {0}"), FText::AsNumber(HoudiniAssetEditorPtr.Pin()->GetNumVertices(CurrentLODLevel)))));

	TextItems.Add(SHoudiniAssetEditorViewport::FOverlayTextItem(
		FText::Format(NSLOCTEXT("UnrealEd", "UVChannels_F", "UV Channels :  {0}"), FText::AsNumber(HoudiniAssetEditorPtr.Pin()->GetNumUVChannels(CurrentLODLevel)))));

	for(auto InstanceData : HoudiniAssetObj->HoudiniInstanceData)
	{
		FFormatNamedArguments Args;
		Args.Add("InstanceName", FText::FromString(InstanceData.MeshName));
		Args.Add("Count", FText::AsNumber(InstanceData.InstanceCount));
		
		TextItems.Add(SHoudiniAssetEditorViewport::FOverlayTextItem(
		FText::Format(NSLOCTEXT("UnrealEd", "Instances_F", "{InstanceName} :  {Count}"), Args)));
	}
	
	
	if(StaticMeshes.Num() > 0)
	{
		if(StaticMeshes[0]->RenderData && StaticMeshes[0]->RenderData->LODResources.Num() > 0 )
		{
			if (StaticMeshes[0]->RenderData->LODResources[0].DistanceFieldData != nullptr )
			{
				const FDistanceFieldVolumeData& VolumeData = *(StaticMeshes[0]->RenderData->LODResources[0].DistanceFieldData);
	
				if (VolumeData.Size.GetMax() > 0)
				{
					static const auto CVarEightBit = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("r.DistanceFieldBuild.EightBit"));
					const bool bEightBitFixedPoint = CVarEightBit->GetValueOnAnyThread() != 0;
					const int32 FormatSize = GPixelFormats[bEightBitFixedPoint ? PF_G8 : PF_R16F].BlockBytes;
	
					float MemoryMb = (VolumeData.Size.X * VolumeData.Size.Y * VolumeData.Size.Z * FormatSize + VolumeData.CompressedDistanceFieldVolume.Num() * VolumeData.CompressedDistanceFieldVolume.GetTypeSize()) / (1024.0f * 1024.0f);
	
					FNumberFormattingOptions NumberOptions;
					NumberOptions.MinimumFractionalDigits = 2;
					NumberOptions.MaximumFractionalDigits = 2;
	
					if (VolumeData.bMeshWasClosed)
					{
						TextItems.Add(SHoudiniAssetEditorViewport::FOverlayTextItem(
							FText::Format(NSLOCTEXT("UnrealEd", "DistanceFieldRes_F", "Distance Field:  {0}x{1}x{2} = {3}Mb"), FText::AsNumber(VolumeData.Size.X), FText::AsNumber(VolumeData.Size.Y), FText::AsNumber(VolumeData.Size.Z), FText::AsNumber(MemoryMb, &NumberOptions))));
					}
					else
					{
						TextItems.Add(SHoudiniAssetEditorViewport::FOverlayTextItem(
							NSLOCTEXT("UnrealEd", "DistanceFieldClosed_F", "Distance Field:  Mesh was not closed and material was one-sided")));
					}
				}
			}
		}
	}
	
	FVector Origin;
	FVector BoxExtent;
	HoudiniAssetEditorViewport->GetHoudiniAssetActor()->GetActorBounds(false,Origin, BoxExtent);
	
	TextItems.Add(SHoudiniAssetEditorViewport::FOverlayTextItem(
		FText::Format(NSLOCTEXT("UnrealEd", "ApproxSize_F", "Approx Size: {0}x{1}x{2}"),
		FText::AsNumber(int32((StaticMeshes.Num() > 0 ) ? BoxExtent.X * 2.0f : 0.0f)), // x2 as artists wanted length not radius
		FText::AsNumber(int32((StaticMeshes.Num() > 0 ) ? BoxExtent.Y * 2.0f : 0.0f)),
		FText::AsNumber(int32((StaticMeshes.Num() > 0 ) ? BoxExtent.Z * 2.0f : 0.0f)))));

	// Show the number of collision primitives
	// if(HoudiniAsset->BodySetup)
	// {
	// 	TextItems.Add(SHoudiniAssetEditorViewport::FOverlayTextItem(
	// 		FText::Format(NSLOCTEXT("UnrealEd", "NumPrimitives_F", "Num Collision Primitives:  {0}"), FText::AsNumber(HoudiniAsset->BodySetup->AggGeom.GetElementCount()))));
	// }

	// if (StaticMeshComponent && StaticMeshComponent->SectionIndexPreview != INDEX_NONE)
	// {
	// 	TextItems.Add(SHoudiniAssetEditorViewport::FOverlayTextItem(NSLOCTEXT("UnrealEd", "MeshSectionsHiddenWarning",  "Mesh Sections Hidden")));
	// }

	HoudiniAssetEditorViewport->PopulateOverlayText(TextItems);

 	int32 X = Canvas.GetRenderTarget()->GetSizeXY().X - 300;
 	int32 Y = 30;
	
	// Make sure draws to the canvas are not rendered upside down.
	Canvas.SetAllowSwitchVerticalAxis(false);

	if(StaticMeshes.Num() > 0)
	{
		if (StaticMeshes[0]->BodySetup && (!(StaticMeshes[0]->BodySetup->bHasCookedCollisionData || StaticMeshes[0]->BodySetup->bNeverNeedsCookedCollisionData) || StaticMeshes[0]->BodySetup->bFailedToCreatePhysicsMeshes))
		{
			static const FText Message = NSLOCTEXT("Renderer", "NoCookedCollisionObject", "NO COOKED COLLISION OBJECT: TOO SMALL?");
			Canvas.DrawShadowedText(X, Y, Message, GetStatsFont(), FLinearColor(1.0, 0.05, 0.05, 1.0));
		}

		if(bDrawUVs && StaticMeshes[0]->RenderData->LODResources.Num() > 0)
		{
			const int32 YPos = 160;
			DrawUVsForMesh(Viewport, &Canvas, YPos);
		}
	}
	
	FEditorViewportClient::DrawCanvas(InViewport, View, Canvas);
}

bool FHoudiniAssetEditorViewportClient::InputWidgetDelta(FViewport* InViewport, EAxisList::Type CurrentAxis,
	FVector& Drag, FRotator& Rot, FVector& Scale)
{
	bool bHandled = FEditorViewportClient::InputWidgetDelta(InViewport, CurrentAxis, Drag, Rot, Scale);

	if (!bHandled && bManipulating)
	{
		if (CurrentAxis != EAxisList::None)
		{
			// UStaticMeshSocket* SelectedSocket = HoudiniAssetEditorPtr.Pin()->GetSelectedSocket();
			// if(SelectedSocket)
			// {
			// 	FProperty* ChangedProperty = NULL;
			// 	const FWidget::EWidgetMode MoveMode = GetWidgetMode();
			// 	if(MoveMode == FWidget::WM_Rotate)
			// 	{
			// 		ChangedProperty = FindFProperty<FProperty>( UStaticMeshSocket::StaticClass(), "RelativeRotation" );
			// 		SelectedSocket->PreEditChange(ChangedProperty);
			//
			// 		FRotator CurrentRot = SelectedSocket->RelativeRotation;
			// 		FRotator SocketWinding, SocketRotRemainder;
			// 		CurrentRot.GetWindingAndRemainder(SocketWinding, SocketRotRemainder);
			//
			// 		const FQuat ActorQ = SocketRotRemainder.Quaternion();
			// 		const FQuat DeltaQ = Rot.Quaternion();
			// 		const FQuat ResultQ = DeltaQ * ActorQ;
			// 		const FRotator NewSocketRotRem = FRotator( ResultQ );
			// 		FRotator DeltaRot = NewSocketRotRem - SocketRotRemainder;
			// 		DeltaRot.Normalize();
			//
			// 		SelectedSocket->RelativeRotation += DeltaRot;
			// 		SelectedSocket->RelativeRotation = SelectedSocket->RelativeRotation.Clamp();
			// 	}
			// 	else if(MoveMode == FWidget::WM_Translate)
			// 	{
			// 		ChangedProperty = FindFProperty<FProperty>( UStaticMeshSocket::StaticClass(), "RelativeLocation" );
			// 		SelectedSocket->PreEditChange(ChangedProperty);
			//
			// 		//FRotationMatrix SocketRotTM( SelectedSocket->RelativeRotation );
			// 		//FVector SocketMove = SocketRotTM.TransformVector( Drag );
			//
			// 		SelectedSocket->RelativeLocation += Drag;
			// 	}
			// 	if ( ChangedProperty )
			// 	{			
			// 		FPropertyChangedEvent PropertyChangedEvent( ChangedProperty );
			// 		SelectedSocket->PostEditChangeProperty(PropertyChangedEvent);
			// 	}
			//
			// 	StaticMeshEditorPtr.Pin()->GetStaticMesh()->MarkPackageDirty();
			// }
			// else
			// {
			// 	const bool bSelectedPrim = StaticMeshEditorPtr.Pin()->HasSelectedPrims();
			// 	if (bSelectedPrim && CurrentAxis != EAxisList::None)
			// 	{
			// 		const FWidget::EWidgetMode MoveMode = GetWidgetMode();
			// 		if (MoveMode == FWidget::WM_Rotate)
			// 		{
			// 			StaticMeshEditorPtr.Pin()->RotateSelectedPrims(Rot);
			// 		}
			// 		else if (MoveMode == FWidget::WM_Scale)
			// 		{
			// 			StaticMeshEditorPtr.Pin()->ScaleSelectedPrims(Scale);
			// 		}
			// 		else if (MoveMode == FWidget::WM_Translate)
			// 		{
			// 			StaticMeshEditorPtr.Pin()->TranslateSelectedPrims(Drag);
			// 		}
			//
			// 		StaticMeshEditorPtr.Pin()->GetStaticMesh()->MarkPackageDirty();
			// 	}
			// }
		}

		Invalidate();		
		bHandled = true;
	}

	return bHandled;
}

void FHoudiniAssetEditorViewportClient::TrackingStarted(const FInputEventState& InInputState, bool bIsDragging,
	bool bNudge)
{
	const bool bTrackingHandledExternally = ModeTools->StartTracking(this, Viewport);

	if( !bManipulating && bIsDragging && !bTrackingHandledExternally)
	{
		Widget->SetSnapEnabled(true);
		// const UStaticMeshSocket* SelectedSocket = HoudiniAssetEditorPtr.Pin()->GetSelectedSocket();
		// if (SelectedSocket)
		// {
		// 	FText TransText;
		// 	if( GetWidgetMode() == FWidget::WM_Rotate )
		// 	{
		// 		TransText = LOCTEXT("FStaticMeshEditorViewportClient_RotateSocket", "Rotate Socket");
		// 	}
		// 	else if (GetWidgetMode() == FWidget::WM_Translate)
		// 	{
		// 		if( InInputState.IsLeftMouseButtonPressed() && (Widget->GetCurrentAxis() & EAxisList::XYZ) )
		// 		{
		// 			const bool bAltDown = InInputState.IsAltButtonPressed();
		// 			if ( bAltDown )
		// 			{
		// 				// Rather than moving/rotating the selected socket, copy it and move the copy instead
		// 				HoudiniAssetEditorPtr.Pin()->DuplicateSelectedSocket();
		// 			}
		// 		}
		//
		// 		TransText = LOCTEXT("FStaticMeshEditorViewportClient_TranslateSocket", "Translate Socket");
		// 	}
		//
		// 	if (!TransText.IsEmpty())
		// 	{
		// 		GEditor->BeginTransaction(TransText);
		// 	}
		// }
		//
		// const bool bSelectedPrim = HoudiniAssetEditorPtr.Pin()->HasSelectedPrims();
		// if (bSelectedPrim)
		// {
		// 	FText TransText;
		// 	if (GetWidgetMode() == FWidget::WM_Rotate)
		// 	{
		// 		TransText = LOCTEXT("FStaticMeshEditorViewportClient_RotateCollision", "Rotate Collision");
		// 	}
		// 	else if (GetWidgetMode() == FWidget::WM_Scale)
		// 	{
		// 		TransText = LOCTEXT("FStaticMeshEditorViewportClient_ScaleCollision", "Scale Collision");
		// 	}
		// 	else if (GetWidgetMode() == FWidget::WM_Translate)
		// 	{
		// 		if (InInputState.IsLeftMouseButtonPressed() && (Widget->GetCurrentAxis() & EAxisList::XYZ))
		// 		{
		// 			const bool bAltDown = InInputState.IsAltButtonPressed();
		// 			if (bAltDown)
		// 			{
		// 				// Rather than moving/rotating the selected primitives, copy them and move the copies instead
		// 				HoudiniAssetEditorPtr.Pin()->DuplicateSelectedPrims(NULL);
		// 			}
		// 		}
		//
		// 		TransText = LOCTEXT("FStaticMeshEditorViewportClient_TranslateCollision", "Translate Collision");
		// 	}
		// 	if (!TransText.IsEmpty())
		// 	{
		// 		GEditor->BeginTransaction(TransText);
		// 		if (HoudiniAsset->BodySetup)
		// 		{
		// 			Houdini->BodySetup->Modify();
		// 		}
		// 	}
		// }

		bManipulating = true;
	}
}

void FHoudiniAssetEditorViewportClient::TrackingStopped()
{
	const bool bTrackingHandledExternally = ModeTools->EndTracking(this, Viewport);

	if( bManipulating && !bTrackingHandledExternally)
	{
		bManipulating = false;
		GEditor->EndTransaction();
	}
}

FWidget::EWidgetMode FHoudiniAssetEditorViewportClient::GetWidgetMode() const
{
	if (IsCustomModeUsingWidget())
	{
		return ModeTools->GetWidgetMode();
	}
	// else if(HoudiniAssetEditorPtr.Pin()->GetSelectedSocket())
	// {
	// 	return WidgetMode;
	// }
	// else if (HoudiniAssetEditorPtr.Pin()->HasSelectedPrims())
	// {
	// 	return WidgetMode;
	// }

	return FWidget::WM_Max;
}

void FHoudiniAssetEditorViewportClient::SetWidgetMode(FWidget::EWidgetMode NewMode)
{
	if (IsCustomModeUsingWidget())
	{
		ModeTools->SetWidgetMode(NewMode);
	}
	else
	{
		WidgetMode = NewMode;
	}

	Invalidate();
}

bool FHoudiniAssetEditorViewportClient::CanSetWidgetMode(FWidget::EWidgetMode NewMode) const
{
	if (!Widget->IsDragging())
	{
		if (IsCustomModeUsingWidget())
		{
			return ModeTools->UsesTransformWidget(NewMode);
		}
		// else if (HoudiniAssetEditorPtr.Pin()->HasSelectedPrims())
		// {
		// 	return true;
		// }
		// else if (NewMode != FWidget::WM_Scale)	// Sockets don't support scaling
		// 	{
		// 	const UStaticMeshSocket* SelectedSocket = HoudiniAssetEditorPtr.Pin()->GetSelectedSocket();
		// 	if (SelectedSocket)
		// 	{
		// 		return true;
		// 	}
		// 	}
	}
	return false;
}

bool FHoudiniAssetEditorViewportClient::CanCycleWidgetMode() const
{
	if (!Widget->IsDragging())
	{
		// const UStaticMeshSocket* SelectedSocket = HoudiniAssetEditorPtr.Pin()->GetSelectedSocket();
		// const bool bSelectedPrim = HoudiniAssetEditorPtr.Pin()->HasSelectedPrims();
		// if ((SelectedSocket || bSelectedPrim || IsCustomModeUsingWidget()))
		// {
		// 	return true;
		// }
	}
	return false;
}

FVector FHoudiniAssetEditorViewportClient::GetWidgetLocation() const
{
	if (IsCustomModeUsingWidget())
	{
		return ModeTools->GetWidgetLocation();
	}
	// else if (const UStaticMeshSocket* SelectedSocket = HoudiniAssetEditorPtr.Pin()->GetSelectedSocket())
	// {
	// 	FMatrix SocketTM;
	// 	SelectedSocket->GetSocketMatrix(SocketTM, StaticMeshComponent);
	//
	// 	return SocketTM.GetOrigin();
	// }

	// FTransform PrimTransform = FTransform::Identity;
	// const bool bSelectedPrim = HoudiniAssetEditorPtr.Pin()->GetLastSelectedPrimTransform(PrimTransform);
	// if (bSelectedPrim)
	// {
	// 	return PrimTransform.GetLocation();
	// }

	return FVector::ZeroVector;
}

FMatrix FHoudiniAssetEditorViewportClient::GetWidgetCoordSystem() const
{
	if (IsCustomModeUsingWidget())
	{
		return ModeTools->GetCustomInputCoordinateSystem();
	}

	// if(const UStaticMeshSocket* SelectedSocket = HoudiniAssetEditorPtr.Pin()->GetSelectedSocket())
	// {
	// 	//FMatrix SocketTM;
	// 	//SelectedSocket->GetSocketMatrix(SocketTM, StaticMeshComponent);
	//
	// 	return FRotationMatrix( SelectedSocket->RelativeRotation );
	// }
	//
	// FTransform PrimTransform = FTransform::Identity;
	// const bool bSelectedPrim = HoudiniAssetEditorPtr.Pin()->GetLastSelectedPrimTransform(PrimTransform);
	// if (bSelectedPrim)
	// {
	// 	return FRotationMatrix(PrimTransform.Rotator());
	// }

	return FMatrix::Identity;
}

ECoordSystem FHoudiniAssetEditorViewportClient::GetWidgetCoordSystemSpace() const
{
	if (IsCustomModeUsingWidget())
	{
		return ModeTools->GetCoordSystem();
	}

	return COORD_Local; 
}

bool FHoudiniAssetEditorViewportClient::ShouldOrbitCamera() const
{
	if (GetDefault<ULevelEditorViewportSettings>()->bUseUE3OrbitControls)
	{
		// this editor orbits always if ue3 orbit controls are enabled
		return true;
	}

	return FEditorViewportClient::ShouldOrbitCamera();
}



void FHoudiniAssetEditorViewportClient::SetPreviewMeshes(TArray<UStaticMesh*> InStaticMeshes ,TArray<UStaticMeshComponent*> InStaticMeshComponents, bool bResetCamera)
{
	StaticMeshes = InStaticMeshes;
	StaticMeshComponents = InStaticMeshComponents;

	UpdateSimpleCollisionDisplay(); //TODO: Fix SimpleCollisionDisplay for Houdini Asset Editor in Client.
	UpdateComplexCollisionDisplay();
	// TODO: Make a single piece Static Mesh if there is multi Static Mesh for any HDA for thumbnail.
	if (bResetCamera)
	{
		// If we have a thumbnail transform, we will favor that over the camera position as the user may have customized this for a nice view
		// If we have neither a custom thumbnail nor a valid camera position, then we'll just use the default thumbnail transform 
		const USceneThumbnailInfo* const AssetThumbnailInfo = Cast<USceneThumbnailInfo>((StaticMeshes.Num() != 0) ? StaticMeshes[0]->ThumbnailInfo : nullptr);
		const USceneThumbnailInfo* const DefaultThumbnailInfo = USceneThumbnailInfo::StaticClass()->GetDefaultObject<USceneThumbnailInfo>();

		// Prefer the asset thumbnail if available
		const USceneThumbnailInfo* const ThumbnailInfo = (AssetThumbnailInfo) ? AssetThumbnailInfo : DefaultThumbnailInfo;
		check(ThumbnailInfo);

		FRotator ThumbnailAngle;
		ThumbnailAngle.Pitch = ThumbnailInfo->OrbitPitch;
		ThumbnailAngle.Yaw = ThumbnailInfo->OrbitYaw;
		ThumbnailAngle.Roll = 0;
		const float ThumbnailDistance = ThumbnailInfo->OrbitZoom;

		const float CameraY = (StaticMeshes.Num() != 0) ? StaticMeshes[0]->GetBounds().SphereRadius / (75.0f * PI / 360.0f) : 1.0f;
		SetCameraSetup(
			FVector::ZeroVector,
			ThumbnailAngle,
			FVector(0.0f, CameraY + ThumbnailDistance - AutoViewportOrbitCameraTranslate, 0.0f),
			(StaticMeshes.Num() != 0) ? StaticMeshes[0]->GetBounds().Origin : FVector(0.0f,0.0f,0.0f),
			-FVector(0, CameraY, 0),
			FRotator(0, 90.f, 0)
			);

		// TODO: Comment this out if it fails to display
		if (!AssetThumbnailInfo && HoudiniAssetObj->EditorCameraPosition.bIsSet)
		{
			// The static mesh editor saves the camera position in terms of an orbit camera, so ensure 
			// that orbit mode is enabled before we set the new transform information
			const bool bWasOrbit = bUsingOrbitCamera;
			ToggleOrbitCamera(true);

			SetViewRotation(HoudiniAssetObj->EditorCameraPosition.CamOrbitRotation);
			SetViewLocation(HoudiniAssetObj->EditorCameraPosition.CamOrbitPoint + HoudiniAssetObj->EditorCameraPosition.CamOrbitZoom);
			SetLookAtLocation(HoudiniAssetObj->EditorCameraPosition.CamOrbitPoint);

			ToggleOrbitCamera(bWasOrbit);
		}
	}
}

void FHoudiniAssetEditorViewportClient::OnMeshChanged()
{
	UpdateComplexCollisionDisplay();
}

void FHoudiniAssetEditorViewportClient::DrawUVsForMesh(FViewport* InViewport, FCanvas* InCanvas, int32 InTextYPos)
{

	TMap<int32, int32> MeshUVMainIndex = HoudiniAssetEditorPtr.Pin()->GetCurrentMeshUVIndex(HoudiniAssetEditorPtr.Pin()->GetCurrentLODIndex());
	int32 UVChannel = MeshUVMainIndex.FindRef(HoudiniAssetEditorPtr.Pin()->GetCurrentUVChannel());
	
	TMap<int32, UStaticMesh*> UVMeshChannel = HoudiniAssetEditorPtr.Pin()->GetCurrentUVMesh(HoudiniAssetEditorPtr.Pin()->GetCurrentLODIndex());
	UStaticMesh* CurrentMesh = UVMeshChannel.FindRef(HoudiniAssetEditorPtr.Pin()->GetCurrentUVChannel());

	//use the overridden LOD level
	const uint32 LODLevel = FMath::Clamp(StaticMeshComponents[0]->ForcedLodModel - 1, 0, CurrentMesh->RenderData->LODResources.Num() - 1);
	
	DrawUVs(InViewport, InCanvas, InTextYPos, LODLevel, UVChannel, SelectedEdgeTexCoords[UVChannel], CurrentMesh->RenderData.Get(), NULL);

}

void FHoudiniAssetEditorViewportClient::ToggleDrawUVOverlay()
{
	SetDrawUVOverlay(!bDrawUVs);
}

void FHoudiniAssetEditorViewportClient::SetDrawUVOverlay(bool bShouldDraw)
{
	bDrawUVs = bShouldDraw;
	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bDrawUVs"), bDrawUVs ? TEXT("True") : TEXT("False"));
	}
	Invalidate();
}

bool FHoudiniAssetEditorViewportClient::IsDrawUVOverlayChecked() const
{
	return bDrawUVs;
}

void FHoudiniAssetEditorViewportClient::SetShowNormals(bool bShowOn)
{
	bDrawNormals = bShowOn;
	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bDrawNormals"), bDrawNormals ? TEXT("True") : TEXT("False"));
	}
	Invalidate();
}

void FHoudiniAssetEditorViewportClient::SetShowTangents(bool bShowOn)
{
	bDrawTangents = bShowOn;
	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bDrawTangents"), bDrawTangents ? TEXT("True") : TEXT("False"));
	}
	Invalidate();
}

void FHoudiniAssetEditorViewportClient::SetShowBinormals(bool bShowOn)
{
	bDrawBinormals = bShowOn;
	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bDrawBinormals"), bDrawBinormals ? TEXT("True") : TEXT("False"));
	}
	Invalidate();
}

void FHoudiniAssetEditorViewportClient::SetShowSimpleCollisions(bool bShowOn)
{
	// ToggleShowSimpleCollision() does more that just flipping a flag so we allow it to do its thing if needed.
	if (bShowSimpleCollision != bShowOn)
	{
		ToggleShowSimpleCollision();
		if (FEngineAnalytics::IsAvailable())
		{
			FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bShowComplexCollision"), bShowPivot ? TEXT("True") : TEXT("False"));
		}
		Invalidate();
	}


	bShowSimpleCollision = bShowOn;
	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bShowSimpleCollision"), bShowPivot ? TEXT("True") : TEXT("False"));
	}
	Invalidate();
}

void FHoudiniAssetEditorViewportClient::SetShowComplexCollisions(bool bShowOn)
{
	// ToggleShowComplexCollision() does more that just flipping a flag so we allow it to do its thing if needed.
	if (bShowComplexCollision != bShowOn)
	{
		ToggleShowComplexCollision();
		if (FEngineAnalytics::IsAvailable())
		{
			FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bShowComplexCollision"), bShowPivot ? TEXT("True") : TEXT("False"));
		}
		Invalidate();
	}
}

void FHoudiniAssetEditorViewportClient::SetShowPivots(bool bShowOn)
{
	bShowPivot = bShowOn;
	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bShowPivot"), bShowPivot ? TEXT("True") : TEXT("False"));
	}
	Invalidate();
}

void FHoudiniAssetEditorViewportClient::SetShowGrids(bool bShowOn)
{
	EngineShowFlags.Grid = bShowOn;
	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("EngineShowFlags.Grid"), EngineShowFlags.Grid ? TEXT("True") : TEXT("False"));
	}
	Invalidate();
}

void FHoudiniAssetEditorViewportClient::SetShowVertices(bool bShowOn)
{
	bDrawVertices = bShowOn;
	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bDrawVertices"), bDrawVertices ? TEXT("True") : TEXT("False"));
	}
	Invalidate();
}

void FHoudiniAssetEditorViewportClient::SetShowWireframes(bool bShowOn)
{
	
}

void FHoudiniAssetEditorViewportClient::SetShowVertexColors(bool bShowOn)
{
	
}

void FHoudiniAssetEditorViewportClient::ToggleShowNormals()
{
	bDrawNormals = !bDrawNormals;
	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bDrawNormals"), bDrawNormals ? TEXT("True") : TEXT("False"));
	}
	Invalidate();
}

bool FHoudiniAssetEditorViewportClient::IsShowNormalsChecked() const
{
	return bDrawNormals;
}

void FHoudiniAssetEditorViewportClient::ToggleShowTangents()
{
	bDrawTangents = !bDrawTangents;
	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bDrawTangents"), bDrawTangents ? TEXT("True") : TEXT("False"));
	}
	Invalidate();
}

bool FHoudiniAssetEditorViewportClient::IsShowTangentsChecked() const
{
	return bDrawTangents;
}

void FHoudiniAssetEditorViewportClient::ToggleShowBinormals()
{
	bDrawBinormals = !bDrawBinormals;
	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bDrawBinormals"), bDrawBinormals ? TEXT("True") : TEXT("False"));
	}
	Invalidate();
}

bool FHoudiniAssetEditorViewportClient::IsShowBinormalsChecked() const
{
	return bDrawBinormals;
}

void FHoudiniAssetEditorViewportClient::ToggleShowSimpleCollision()
{
	bShowSimpleCollision = !bShowSimpleCollision;
	UpdateSimpleCollisionDisplay();

	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bShowCollision"), (bShowSimpleCollision || bShowComplexCollision) ? TEXT("True") : TEXT("False"));
	}
}

bool FHoudiniAssetEditorViewportClient::IsShowSimpleCollisionChecked() const
{
	return bShowSimpleCollision;
}

void FHoudiniAssetEditorViewportClient::ToggleShowComplexCollision()
{
	bShowComplexCollision = !bShowComplexCollision;
	UpdateComplexCollisionDisplay();
	
	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bShowCollision"), (bShowSimpleCollision || bShowComplexCollision) ? TEXT("True") : TEXT("False"));
	}
}

bool FHoudiniAssetEditorViewportClient::IsShowComplexCollisionChecked() const
{
	return bShowComplexCollision;
}

void FHoudiniAssetEditorViewportClient::ToggleShowPivot()
{
	bShowPivot = !bShowPivot;
	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bShowPivot"), bShowPivot ? TEXT("True") : TEXT("False"));
	}
	Invalidate();
}

bool FHoudiniAssetEditorViewportClient::IsShowPivotChecked() const
{
	return bShowPivot;
}

void FHoudiniAssetEditorViewportClient::ToggleDrawAdditionalData()
{
	bDrawAdditionalData = !bDrawAdditionalData;
	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bDrawAdditionalData"), bDrawAdditionalData ? TEXT("True") : TEXT("False"));
	}
	Invalidate();
}

bool FHoudiniAssetEditorViewportClient::IsDrawAdditionalDataChecked() const
{
	return bDrawAdditionalData;
}

void FHoudiniAssetEditorViewportClient::ToggleDrawVertices()
{
	bDrawVertices = !bDrawVertices;
	if (FEngineAnalytics::IsAvailable())
	{
		FEngineAnalytics::GetProvider().RecordEvent(TEXT("Editor.Usage.HoudiniAsset.Toolbar"), TEXT("bDrawVertices"), bDrawVertices ? TEXT("True") : TEXT("False"));
	}
	Invalidate();
}

bool FHoudiniAssetEditorViewportClient::IsDrawVerticesChecked() const
{
	return bDrawVertices;
}

void FHoudiniAssetEditorViewportClient::SetFloorAndEnvironmentVisibility(const bool bVisible)
{
	AdvancedPreviewScene->SetFloorVisibility(bVisible, true);
	AdvancedPreviewScene->SetEnvironmentVisibility(bVisible, true);
}

void FHoudiniAssetEditorViewportClient::PerspectiveCameraMoved()
{
	FEditorViewportClient::PerspectiveCameraMoved();

	// If in the process of transitioning to a new location, don't update the orbit camera position.
	// On the final update of the transition, we will get here with IsPlaying()==false, and the editor camera position will
	// be correctly updated.
	if (GetViewTransform().IsPlaying())
	{
		return;
	}

	// The Houdini asset editor saves the camera position in terms of an orbit camera, so ensure 
	// that orbit mode is enabled before we store the current transform information.
	const bool bWasOrbit = bUsingOrbitCamera;
	const FVector OldCameraLocation = GetViewLocation();
	const FRotator OldCameraRotation = GetViewRotation();
	ToggleOrbitCamera(true);

	const FVector OrbitPoint = GetLookAtLocation();
	const FVector OrbitZoom = GetViewLocation() - OrbitPoint;
	HoudiniAssetObj->EditorCameraPosition = FHoudiniAssetEditorOrbitCameraPosition(
		OrbitPoint,
		OrbitZoom,
		GetViewRotation()
		);

	ToggleOrbitCamera(bWasOrbit);
}

void FHoudiniAssetEditorViewportClient::OnAssetViewerSettingsChanged(const FName& InPropertyName)
{
	if (InPropertyName == GET_MEMBER_NAME_CHECKED(FPreviewSceneProfile, bPostProcessingEnabled) || InPropertyName == NAME_None)
	{
		UAssetViewerSettings* Settings = UAssetViewerSettings::Get();
		const int32 ProfileIndex = AdvancedPreviewScene->GetCurrentProfileIndex();
		if (Settings->Profiles.IsValidIndex(ProfileIndex))
		{
			SetAdvancedShowFlagsForScene(Settings->Profiles[ProfileIndex].bPostProcessingEnabled);
		}		
	}
}

void FHoudiniAssetEditorViewportClient::SetAdvancedShowFlagsForScene(const bool bAdvancedShowFlags)
{
	if (bAdvancedShowFlags)
	{
		EngineShowFlags.EnableAdvancedFeatures();
	}
	else
	{
		EngineShowFlags.DisableAdvancedFeatures();
	}
}

void FHoudiniAssetEditorViewportClient::UpdateSimpleCollisionDisplay()
{
	for(UStaticMeshComponent* Component : StaticMeshComponents)
	{
		if (Component != nullptr)
		{
			// Have to set this flag in case we are using 'use complex as simple'
			Component->bDrawMeshCollisionIfSimple = bShowSimpleCollision;
			Component->MarkRenderStateDirty();
		}
	}

	Invalidate();
}

void FHoudiniAssetEditorViewportClient::UpdateComplexCollisionDisplay()
{
	for(int i = 0 ; i < StaticMeshes.Num(); i++)
	{
		UStaticMesh* Mesh = StaticMeshes[i];
		UStaticMeshComponent* Component = StaticMeshComponents[i];
		if (Mesh)
        	{
        		if (UObject* CDPObj = Mesh->ComplexCollisionMesh)
        		{
        			if (IInterface_CollisionDataProvider* CDP = Cast<IInterface_CollisionDataProvider>(CDPObj))
        			{
        				CollisionMeshData = FTriMeshCollisionData();
        				CDP->GetPhysicsTriMeshData(&CollisionMeshData, true);
        			}
        			if (Component != nullptr)
        			{
        				Component->bDrawMeshCollisionIfComplex = false;
        				Component->MarkRenderStateDirty();
        			}
        		}
        		else if (Component != nullptr)
        		{
        			Component->bDrawMeshCollisionIfComplex = bShowComplexCollision;
        			Component->MarkRenderStateDirty();
        		}
        	}
	}
	
	Invalidate();
}

bool FHoudiniAssetEditorViewportClient::IsCustomModeUsingWidget() const
{
	const FWidget::EWidgetMode ToolsWidgetMode = ModeTools->GetWidgetMode();
	const bool bDisplayToolWidget = ModeTools->GetShowWidget();

	return bDisplayToolWidget && ToolsWidgetMode != FWidget::EWidgetMode::WM_None;
}

#undef LOCTEXT_NAMESPACE 
