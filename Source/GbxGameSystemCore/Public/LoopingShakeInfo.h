#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "LoopingShakeInfo.generated.h"

class APlayerController;
class UObject;

USTRUCT(BlueprintType)
struct FLoopingShakeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    APlayerController* AssociatedController;
    
    UPROPERTY(Transient)
    float Scale;
    
    UPROPERTY(Transient)
    UObject* ContextObject;
    
    UPROPERTY(Transient)
    FTimerHandle TimerHandle;
    
    UPROPERTY(Transient)
    FVector FeedbackLocation;
    
    GBXGAMESYSTEMCORE_API FLoopingShakeInfo();
};

