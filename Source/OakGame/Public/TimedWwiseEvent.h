#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "TimedWwiseEvent.generated.h"

class UWorld;
class APawn;
class UWwiseEvent;

UCLASS()
class OAKGAME_API UTimedWwiseEvent : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UWorld* RefWorld;
    
    UPROPERTY()
    APawn* OwningPawn;
    
    UPROPERTY()
    FTimerHandle TimerHandle;
    
    UPROPERTY()
    UWwiseEvent* WwiseEvent;
    
    UTimedWwiseEvent();
    UFUNCTION()
    void CallWwiseEvent();
    
};

