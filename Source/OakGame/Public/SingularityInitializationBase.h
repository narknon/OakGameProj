#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SingularityInitializationBase.generated.h"

class AActor;
class UHitReactionTag;
class UWwiseRtpc;
class UWwiseAuxBus;
class UWwiseEvent;

USTRUCT(BlueprintType)
struct FSingularityInitializationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UHitReactionTag* PullTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer IgnoreTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinPullRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> IgnoreActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseAuxBus* EffectAuxBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EffectSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EffectFadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EffectDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseRtpc* FadeDistanceRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* AdditionalStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* AdditionalStopEvent;
    
    OAKGAME_API FSingularityInitializationBase();
};

