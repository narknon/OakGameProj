#pragma once
#include "CoreMinimal.h"
#include "SimpleMotionInstanceState.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FSimpleMotionInstanceState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    float Speed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bMotionReversed: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bReachedTarget: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bReachedMaxSpeed: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bInTransition: 1;
    
    FSimpleMotionInstanceState();
};

