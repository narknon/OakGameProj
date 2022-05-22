#pragma once
#include "CoreMinimal.h"
#include "TestInfoMaterial.generated.h"

class UAssetTraitMaterial;

USTRUCT(BlueprintType)
struct FTestInfoMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<UAssetTraitMaterial*> AssetTraits;
    
    UPROPERTY(BlueprintReadOnly)
    bool bUsedWithSkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly)
    bool bUsedWithParticleSprites;
    
    UPROPERTY(BlueprintReadOnly)
    bool bUsedWithBeamTrails;
    
    UPROPERTY(BlueprintReadOnly)
    bool bUsedWithMeshParticles;
    
    UPROPERTY(BlueprintReadOnly)
    bool bUsedWithStaticLighting;
    
    UPROPERTY(BlueprintReadOnly)
    bool bUsedWithMorphTargets;
    
    UPROPERTY(BlueprintReadOnly)
    bool bUsedWithSplineMesh;
    
    UPROPERTY(BlueprintReadOnly)
    bool bUsedWithInstancedStaticMeshes;
    
    UPROPERTY(BlueprintReadOnly)
    bool bUsedWithClothing;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasPhysMatSet;
    
    GBXTEST_API FTestInfoMaterial();
};

