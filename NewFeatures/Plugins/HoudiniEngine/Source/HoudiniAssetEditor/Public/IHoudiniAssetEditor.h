#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Engine/EngineBaseTypes.h"
#include "Toolkits/AssetEditorToolkit.h"
#include "PhysicsEngine/ShapeElem.h"

class UHoudiniAssetEditorObject;
class UHoudiniAssetComponent;
class UStaticMesh;
class UStaticMeshComponent;
class FHoudiniAssetEditor;
//class UStaticMeshSocket;

DECLARE_MULTICAST_DELEGATE(FOnSelectedLODChangedMulticaster);

typedef FOnSelectedLODChangedMulticaster::FDelegate FOnSelectedLODChanged;

class IHoudiniAssetEditor : public FAssetEditorToolkit
{
public:
	/**
	* Primitive data use to track which aggregate geometry is selected
	*/
	// struct FPrimData
	// {
	// 	EAggCollisionShape::Type		PrimType;
	// 	int32							PrimIndex;
	//
	// 	FPrimData(EAggCollisionShape::Type InPrimType, int32 InPrimIndex) :
	// 		PrimType(InPrimType),
	// 		PrimIndex(InPrimIndex) {}
	//
	// 	bool operator==(const FPrimData& Other) const
	// 	{
	// 		return (PrimType == Other.PrimType && PrimIndex == Other.PrimIndex);
	// 	}
	// };
	
	/** Called after an undo is performed to give child widgets a chance to refresh. */
	DECLARE_MULTICAST_DELEGATE( FOnPostUndoMulticaster );

	// Post undo
	typedef FOnPostUndoMulticaster::FDelegate FOnPostUndo;

	virtual FHoudiniAssetEditor* GetHoudiniAssetEditor() = 0;

	/** Retrieves the current Houdini asset displayed in the Houdini Asset Editor. */
	virtual UHoudiniAssetEditorObject* GetHoudiniAssetEditorObj() = 0;

	/** Retrieves the Houdini Asset Component. */
	virtual UHoudiniAssetComponent* GetHoudiniAssetComponent() const = 0;

	/** Retrieves the current static mesh displayed in the Static Mesh Editor. */
	virtual TArray<UStaticMesh*> GetStaticMeshes() = 0;

	/** Retrieves the static mesh component. */
	virtual TArray<UStaticMeshComponent*> GetStaticMeshComponents() const = 0;

	/** Retrieves the currently selected socket from the Socket Manager. */
	//virtual UStaticMeshSocket* GetSelectedSocket() const = 0;

	/**
	 *	Set the currently selected socket in the Socket Manager.
	 *
	 *	@param	InSelectedSocket			The selected socket to pass on to the Socket Manager.
	 */
	//virtual void SetSelectedSocket(UStaticMeshSocket* InSelectedSocket) = 0;

	// /** Duplicate the selected socket */
	// virtual void DuplicateSelectedSocket() = 0;
	//
	// /** Requests to rename selected socket */
	// virtual void RequestRenameSelectedSocket() = 0;

	/**
	*  Checks to see if the parsed primitive data is selected
	*
	*  @param  InPrimData			The data to compare
	*  @returns					True, if the prim is selected
	*/
	// virtual bool IsSelectedPrim(const FPrimData& InPrimData) const = 0;
	
	/**
	 *  Retrieves the number of triangles in the current static mesh or it's forced LOD.
	 *
	 *  @param  LODLevel			The desired LOD to retrieve the number of triangles for.
	 *	@returns					The number of triangles for the specified LOD level.
	 */
	virtual int32 GetNumTriangles(int32 LODLevel = 0) const = 0;

	/**
	 *  Retrieves the number of vertices in the current static mesh or it's forced LOD.
	 *
	 *  @param  LODLevel			The desired LOD to retrieve the number of vertices for.
	 *	@returns					The number of vertices for the specified LOD level.
	 */
	virtual int32 GetNumVertices(int32 LODLevel = 0) const = 0;

	/**
	 *  Retrieves the number of UV channels available.
	 *
	 *  @param  LODLevel			The desired LOD to retrieve the number of UV channels for.
	 *	@returns					The number of triangles for the specified LOD level.
	 */
	virtual int32 GetNumUVChannels(int32 LODLevel = 0) const = 0;

	/** Retrieves the currently selected UV channel. */
	virtual int32 GetCurrentUVChannel() = 0;

	/** Retrieves the current LOD level. 0 is auto, 1 is base. */
	virtual int32 GetCurrentLODLevel() = 0;

	/** Retrieves the current LOD index */
	virtual int32 GetCurrentLODIndex() = 0;

	/** Retrieves the current LOD list of assign UVChannel and Static Mesh */
	virtual TMap<int32, UStaticMesh*> GetCurrentUVMesh(int32 LODLevel = 0) const = 0;

	virtual TMap<int32, int32> GetCurrentMeshUVIndex(int32 LODLevel = 0) const = 0;

	/* Retrieve editor custom data. Return INDEX_NONE if the key is invalid */
	virtual int32 GetCustomData(const int32 Key) const { return INDEX_NONE; }
	
	/*
	 * Store the custom data using the key.
	 * Remark:
	 * The custom data memory should be clear when the editor is close by the user, this is not persistent data.
	 * Currently we use it to store the state of the editor UI to restore it properly when a refresh happen.
	 */
	virtual void SetCustomData(const int32 Key, const int32 CustomData) {}

	/** Refreshes the Static Mesh Editor's viewport. */
	virtual void RefreshViewport() = 0;

	/** Refreshes everything in the Static Mesh Editor. */
	virtual void RefreshTool() = 0;

	/** Registers a delegate to be called after an Undo operation */
	virtual void RegisterOnPostUndo( const FOnPostUndo& Delegate ) = 0;

	/** Unregisters a delegate to be called after an Undo operation */
	virtual void UnregisterOnPostUndo( SWidget* Widget ) = 0;

	/** Get the active view mode */
	virtual EViewModeIndex GetViewMode() const = 0;

	/* Register callback to be able to be notify when the select LOD is change */
	virtual void RegisterOnSelectedLODChanged(const FOnSelectedLODChanged &Delegate, bool UnregisterOnRefresh) = 0;
	/* Unregister callback to free up the ressources */
	virtual void UnRegisterOnSelectedLODChanged(void* Thing) = 0;

	/* Broadcast when selected LOD changes */
	virtual void BroadcastOnSelectedLODChanged() = 0;

	/** Get the Houdini Asset Editor's the viewport client */
	virtual class FEditorViewportClient& GetViewportClient() = 0;

	/** Set the display name for the secondary toolbar and its associated menu item */
	virtual void SetSecondaryToolbarDisplayName(FText DisplayName) = 0;

	DECLARE_EVENT_OneParam(IHoudiniAssetEditor, FHoudiniAssetEditorDockingExtentionTabsEvent, const TSharedRef<FTabManager::FStack>&)
	virtual FHoudiniAssetEditorDockingExtentionTabsEvent& OnHoudiniAssetEditorDockingExtentionTabs() { return HoudiniAssetEditorDockingExtentionTabsEvent; };

	DECLARE_EVENT(IHoudiniAssetEditor, FHoudiniAssetEditorClosedEvent);
	virtual FHoudiniAssetEditorClosedEvent& OnHoudiniAssetEditorClosed() { return HoudiniAssetEditorClosedEvent; };

	/** Delegate to be called when the tabs are being registered **/
	DECLARE_EVENT_OneParam(IHoudiniAssetEditor, FRegisterTabSpawnersEvent, const TSharedRef<class FTabManager>&);
	virtual FRegisterTabSpawnersEvent& HoudiniOnRegisterTabSpawners() { return RegisterTabSpawnersEvent; };

	/** Delegate to be called when the tabs are being unregistered **/
	DECLARE_EVENT_OneParam(IHoudiniAssetEditor, FUnregisterTabSpawnersEvent, const TSharedRef<class FTabManager>&);
	virtual FUnregisterTabSpawnersEvent& HoudiniOnUnregisterTabSpawners() { return UnregisterTabSpawnersEvent; };

private:
	FHoudiniAssetEditorDockingExtentionTabsEvent HoudiniAssetEditorDockingExtentionTabsEvent;
	FHoudiniAssetEditorClosedEvent HoudiniAssetEditorClosedEvent;
	FRegisterTabSpawnersEvent RegisterTabSpawnersEvent;
	FUnregisterTabSpawnersEvent UnregisterTabSpawnersEvent;
	
};
