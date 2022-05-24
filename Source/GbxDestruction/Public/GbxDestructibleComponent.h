#pragma once
#include "CoreMinimal.h"
#include "DestructibleComponent.h"
#include "ImpactDataOverride.h"
#include "GbxComponentFractureSignatureDelegate.h"
#include "EDestructibleRelevance.h"
#include "EDestructibleDamageThresholdMagnitude.h"
#include "Engine/EngineTypes.h"
#include "GbxDestructibleComponent.generated.h"

class UImpactData;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXDESTRUCTION_API UGbxDestructibleComponent : public UDestructibleComponent, public IImpactDataOverride {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float SecondsToWaitAfterNotRenderedToCleanUp;
    
    UPROPERTY(EditAnywhere)
    float ProbabilityOfTransientChunk;
    
    UPROPERTY(EditAnywhere)
    float FractureEventRefireDelay;
    
    UPROPERTY(BlueprintAssignable)
    FGbxComponentFractureSignature OnGbxComponentFracture;
    
    UPROPERTY(EditAnywhere)
    EDestructibleRelevance DestructibleRelevance;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> ChunkCollisionChannel;
    
    UPROPERTY(EditAnywhere)
    UImpactData* ChunkImpactData;
    
    UPROPERTY(EditAnywhere)
    bool bPlayFractureEventOnDebris;
    
    UPROPERTY(EditAnywhere)
    bool bSupportChunksBlockPawnMovement;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideAssetDamageThreshold;
    
    UPROPERTY(EditAnywhere)
    float MetersDroppedToBreak;
    
    UPROPERTY(EditAnywhere)
    EDestructibleDamageThresholdMagnitude DamageThresholdMagnitude;
    
    UPROPERTY(EditAnywhere)
    int32 ImpactDamageDefaultDepth;
    
    UPROPERTY(EditAnywhere)
    bool bAutoComputeMaterialStrength;
    
    UPROPERTY(EditAnywhere)
    bool bAccumulateImpactDamage;
    
    UPROPERTY(EditAnywhere)
    float ImpactVelocityThresholdOverride;
    
    UPROPERTY(EditAnywhere)
    bool bUseTotalMass;
    
    UPROPERTY(EditAnywhere)
    float TotalMass;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideDebrisLifetime;
    
    UPROPERTY(EditAnywhere)
    float DebrisLifetimeMin;
    
    UPROPERTY(EditAnywhere)
    float DebrisLifetimeMax;
    
    UPROPERTY(EditAnywhere)
    float FractureEffectOverlapPercent;
    
    UGbxDestructibleComponent();
    UFUNCTION(BlueprintCallable)
    void SetFracturable(bool bFracturable);
    
    UFUNCTION(BlueprintPure)
    float GetTotalPercentFractured() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDamageRequiredToFracture(int32 Depth);
    
    UFUNCTION(BlueprintCallable)
    void FractureRandomChunk();
    
    
    // Fix for true pure virtual functions not being implemented
};

