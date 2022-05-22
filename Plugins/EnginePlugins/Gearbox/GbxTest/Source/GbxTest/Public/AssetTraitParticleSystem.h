#pragma once
#include "CoreMinimal.h"
#include "AssetTrait.h"
#include "OptionalInt32.h"
#include "OptionalFloat.h"
#include "OptionalBool.h"
#include "AssetTraitParticleSystem.generated.h"

UCLASS()
class UAssetTraitParticleSystem : public UAssetTrait {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MinEmitterCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MaxEmitterCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MinModuleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MaxModuleCount;
    
    UPROPERTY()
    FOptionalInt32 MinLODCount;
    
    UPROPERTY()
    FOptionalInt32 MaxLODCount;
    
    UPROPERTY()
    FOptionalFloat MinLODDistanceCheckTime;
    
    UPROPERTY()
    FOptionalFloat MaxLODDistanceCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalFloat MinUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalFloat MaxUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalFloat MaxWarmupTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MinDataAnimTrailCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MaxDataAnimTrailCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MinDataGPUSpritesCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MaxDataGPUSpritesCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MinDataMeshCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MaxDataMeshCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MinDataRibbonOrBeamCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MaxDataRibbonOrBeamCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalFloat MaxTemplateCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalBool bHasDataAnimTrail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalBool bHasDataGPUSprites;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalBool bHasDataMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalBool bHasDataRibbonOrBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MaxDrawCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalBool bKillOnCompletedNotSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalFloat MinUnitScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalBool bUseInverseSquaredFalloffSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalBool bAllowInfiniteLifetimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalFloat MaxLifetime;
    
    UAssetTraitParticleSystem();
};

