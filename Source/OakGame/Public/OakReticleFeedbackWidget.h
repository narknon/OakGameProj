#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "EOakReticleFeedbackGameEvent.h"
#include "OakReticleFeedbackWidget.generated.h"

class AOakPlayerController;

UCLASS(Blueprintable, NonTransient)
class OAKGAME_API UOakReticleFeedbackWidget : public UGbxGFxObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float MaxDamageCausedDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxDeathCausedDuration;
    
    UPROPERTY(Transient)
    EOakReticleFeedbackGameEvent CurrentGameEvent;
    
    UPROPERTY(Transient)
    float CurrentGameEventDuration;
    
private:
    UPROPERTY(Transient)
    AOakPlayerController* OakPCOwner;
    
public:
    UOakReticleFeedbackWidget();
    UFUNCTION(BlueprintCallable)
    void OnGameEventComplete(EOakReticleFeedbackGameEvent GameEvent);
    
    UFUNCTION()
    void OnGameEventCallback(EOakReticleFeedbackGameEvent GameEvent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGameEvent(EOakReticleFeedbackGameEvent GameEvent);
    
};

