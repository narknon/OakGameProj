#pragma once
#include "CoreMinimal.h"
#include "TestInfoParticleEmitter.h"
#include "TestInfoParticleSystem.generated.h"

class UAssetTraitParticleSystem;

USTRUCT(BlueprintType)
struct FTestInfoParticleSystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<UAssetTraitParticleSystem*> AssetTraits;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FTestInfoParticleEmitter> EmitterInfo;
    
    UPROPERTY(BlueprintReadOnly)
    float FixedRelativeBoundsSize;
    
    UPROPERTY(BlueprintReadOnly)
    float UpdateTime;
    
    UPROPERTY(BlueprintReadOnly)
    float WarmupTime;
    
    UPROPERTY(BlueprintReadOnly)
    float LODDistanceCheckTime;
    
    UPROPERTY(BlueprintReadOnly)
    float TemplateCost;
    
    UPROPERTY(BlueprintReadOnly)
    int32 EmitterCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 MinModuleCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 MaxModuleCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 LODCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 AnimTrailDataCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 GpuSpriteDataCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 MeshDataCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 RibbonOrBeamDataCount;
    
    UPROPERTY(BlueprintReadOnly)
    bool bUsesFixedRelativeBounds;
    
    UPROPERTY(BlueprintReadOnly)
    bool bZAxisOrientedTowardsCamera;
    
    UPROPERTY(BlueprintReadOnly)
    bool bAllEmittersHaveRequiredModules;
    
    UPROPERTY(BlueprintReadOnly)
    bool bAllEmittersHaveLowestLOD;
    
    UPROPERTY(BlueprintReadOnly)
    bool bKillFlagsNotSet;
    
    GBXTEST_API FTestInfoParticleSystem();
};

