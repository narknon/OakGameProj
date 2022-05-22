#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "VoxelDataProvider.h"
#include "AudioPrepComponentFilter.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AudioOcclusionVoxelDataProvider.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UAudioOcclusionVoxelDataProvider : public UVoxelDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleAnywhere)
    FIntVector DataResolution;
    
    UPROPERTY()
    bool bUseMaterialLibrary;
    
    UPROPERTY(EditAnywhere)
    FString TritonMaterialLibraryFile;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, FString> ExtraTritonMaterialEquivalences;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> CheckCollisionChannel;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionResponse> CheckCollisionResponse;
    
    UPROPERTY(EditAnywhere)
    bool bVoxelizeFoliage;
    
    UPROPERTY(EditAnywhere)
    int32 ExtraTerrainThickness;
    
    UPROPERTY()
    bool bFlagMatchingVoxels;
    
    UPROPERTY(EditAnywhere)
    FAudioPrepComponentFilter FlagVoxelsForComponentsFilter;
    
    UAudioOcclusionVoxelDataProvider();
};

