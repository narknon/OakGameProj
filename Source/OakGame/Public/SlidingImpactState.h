#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TrackedSlidingImpactEffect.h"
#include "SlidingImpactState.generated.h"

class UOakCharacterMovementComponent;
class UWwiseEvent;

USTRUCT(BlueprintType)
struct FSlidingImpactState {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UOakCharacterMovementComponent* OwnerMovementComponent;
    
    UPROPERTY()
    UWwiseEvent* StartAudioEvent;
    
    UPROPERTY()
    UWwiseEvent* StopAudioEvent;
    
    UPROPERTY()
    bool bIgnoreSlidingState;
    
    UPROPERTY()
    FHitResult LastImpact;
    
    UPROPERTY()
    float LastImpactTraceTime;
    
    UPROPERTY()
    TArray<FTrackedSlidingImpactEffect> Effects;
    
    UPROPERTY()
    FName SpeedParticleParameterName;
    
    OAKGAME_API FSlidingImpactState();
};

