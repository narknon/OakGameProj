#pragma once
#include "CoreMinimal.h"
#include "GbxNavLayerState.h"
#include "GbxUserEdgeManager.h"
#include "NavigationData.h"
#include "UObject/NoExportTypes.h"
#include "GbxPainterManager.h"
#include "GbxNavStreamingData.h"
#include "GbxReachabilityTracker.h"
#include "GbxNavWorld.generated.h"

class UGbxNavComponent;
class UGbxNavArea;
class UGbxNavSectionComponent;
class UHavokNavMeshGenerationSettings;
class UHavokNavVolumeGenerationSettings;

UCLASS()
class GBXNAV_API AGbxNavWorld : public ANavigationData {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FGbxUserEdgeManager UserEdgeManager;
    
    UPROPERTY()
    FGbxPainterManager PainterManager;
    
    UPROPERTY()
    FGbxNavStreamingData FlyStreamingData;
    
    UPROPERTY()
    FGbxNavStreamingData MeshStreamingData;
    
    UPROPERTY()
    FGbxNavLayerState MeshLayers;
    
    UPROPERTY()
    FGbxNavLayerState FlyLayers;
    
    UPROPERTY(Export, Transient)
    UGbxNavComponent* ReachabilityBuilding;
    
    UPROPERTY(Export, Transient)
    TArray<UGbxNavComponent*> ReachabilityQueue;
    
    UPROPERTY(Export, Transient)
    TArray<UGbxNavComponent*> NavComps;
    
    UPROPERTY(Transient)
    FGbxReachabilityTracker ReachabilityTracker;
    
    UPROPERTY(Config)
    int32 MaxClearanceFillsPerStep;
    
    UPROPERTY(Config)
    int32 MaxClearanceChecksPerStep;
    
    UPROPERTY(Config)
    bool bAsyncProcessingEnabled;
    
    UPROPERTY(Config)
    bool bAsyncAgentUpdatesEnabled;
    
    UPROPERTY(Config)
    FSoftObjectPath DefaultMeshLayer;
    
    UPROPERTY(Config)
    FSoftObjectPath DefaultFlyLayer;
    
    UPROPERTY(Config)
    FSoftObjectPath DefaultNavArea;
    
    UPROPERTY(Config)
    FSoftObjectPath NullNavArea;
    
    UPROPERTY(Config)
    TArray<FSoftObjectPath> AllNavAreas;
    
    UPROPERTY(Transient)
    TArray<UGbxNavArea*> LoadedAllNavAreas;
    
    UPROPERTY(Export, Transient)
    TArray<UGbxNavSectionComponent*> SectionsWithDirtyTransforms;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UHavokNavMeshGenerationSettings* MeshGenSettings;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UHavokNavVolumeGenerationSettings* VolumeGenSettings;
    
public:
    AGbxNavWorld();
};

