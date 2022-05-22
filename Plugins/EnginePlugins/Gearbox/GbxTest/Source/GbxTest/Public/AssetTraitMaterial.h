#pragma once
#include "CoreMinimal.h"
#include "AssetTrait.h"
#include "OptionalBool.h"
#include "AssetTraitMaterial.generated.h"

UCLASS()
class UAssetTraitMaterial : public UAssetTrait {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalBool UsedWithSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalBool UsedWithParticleSprites;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalBool UsedWithBeamTrails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalBool UsedWithMeshParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalBool UsedWithStaticLighting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalBool UsedWithMorphTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalBool UsedWithSplineMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalBool UsedWithLandscape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalBool UsedWithInstancedStaticMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalBool UsedWithClothing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalBool HasPhysMatSet;
    
    UAssetTraitMaterial();
};

