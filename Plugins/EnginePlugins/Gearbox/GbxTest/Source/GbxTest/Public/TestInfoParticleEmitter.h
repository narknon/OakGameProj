#pragma once
#include "CoreMinimal.h"
#include "TestInfoParticleEmitter.generated.h"

USTRUCT(BlueprintType)
struct FTestInfoParticleEmitter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 EmitterIndex;
    
    UPROPERTY(BlueprintReadOnly)
    FName EmitterName;
    
    UPROPERTY(BlueprintReadOnly)
    int32 SuperMaxDrawCount;
    
    UPROPERTY(BlueprintReadOnly)
    float MinUnitScalar;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasLowestLOD;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasAnimTrailData;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasGpuSpriteData;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasMeshData;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasRibbonOrBeamData;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasRequiredModule;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasSpawnPerUnitModule;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasLifetimeModule;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasLightModule;
    
    UPROPERTY(BlueprintReadOnly)
    bool bUseMaxDrawCountDisabled;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasInfiniteMaxDrawCount;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasInfiniteLifetime;
    
    UPROPERTY(BlueprintReadOnly)
    bool bKillOnCompletedNotSet;
    
    UPROPERTY(BlueprintReadOnly)
    bool bUseInverseSquaredFalloffSet;
    
    GBXTEST_API FTestInfoParticleEmitter();
};

