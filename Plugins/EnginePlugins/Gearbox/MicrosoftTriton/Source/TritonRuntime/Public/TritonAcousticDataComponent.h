#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TritonProbeLayer.h"
#include "AudioPrepComponentFilter.h"
#include "EOcclusionVoxelThinningAlgorithm.h"
#include "TritonUpdateDesc.h"
#include "GbxTriggerProperty.h"
#include "TritonAcousticDataComponent.generated.h"

class UAudioOcclusionVoxelDataProvider;

UCLASS(MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTritonAcousticDataComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FTritonProbeLayer> ProbeLayers;
    
    UPROPERTY(EditAnywhere)
    float SpeedOfSound;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, FString> ExtraTritonMaterialEquivalences;
    
    UPROPERTY(EditAnywhere)
    TArray<FAudioPrepComponentFilter> ExcludeComponentsFilters;
    
    UPROPERTY(EditAnywhere)
    TArray<FAudioPrepComponentFilter> IncludeComponentsFilters;
    
    UPROPERTY(EditAnywhere)
    TArray<EOcclusionVoxelThinningAlgorithm> ThinningSteps;
    
    UPROPERTY(EditAnywhere)
    int32 ExtraTerrainThickness;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bOnlyGenerateSelected;
    
    UPROPERTY(EditAnywhere, Transient)
    FTritonUpdateDesc UpdateSteps;
    
    UPROPERTY(EditAnywhere, Transient)
    FGbxTriggerProperty TriggerRefreshCachedVoxelData;
    
    UPROPERTY(EditAnywhere, Transient)
    FGbxTriggerProperty TriggerVisualizeMaterials;
    
    UPROPERTY(EditAnywhere, Transient)
    FGbxTriggerProperty TriggerAuditProbeLocations;
    
    UPROPERTY(EditAnywhere, Transient)
    FGbxTriggerProperty TriggerUpdateProbeLocations;
    
    UPROPERTY(Transient)
    UAudioOcclusionVoxelDataProvider* CachedVoxelData;
    
    UPROPERTY(Transient)
    UAudioOcclusionVoxelDataProvider* CachedVoxelDataNoThinning;
    
    UPROPERTY(Transient)
    UAudioOcclusionVoxelDataProvider* CachedNavMeshVoxelData;
    
    UPROPERTY(EditAnywhere, Transient)
    FGbxTriggerProperty TriggerBuildFallbackAcousticData;
    
    UTritonAcousticDataComponent();
    UFUNCTION()
    void VisualizeMaterials();
    
    UFUNCTION()
    void UpdateProbeLocations();
    
    UFUNCTION()
    void RefreshCachedVoxelData();
    
    UFUNCTION()
    void BuildFallbackAcousticData();
    
    UFUNCTION()
    void AuditProbeLocations();
    
};

