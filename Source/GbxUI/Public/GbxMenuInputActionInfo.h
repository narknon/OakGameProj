#pragma once
#include "CoreMinimal.h"
#include "GbxMenuInputActionInfo.generated.h"

USTRUCT()
struct GBXUI_API FGbxMenuInputActionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool bIsHeld;
    
    UPROPERTY(Transient)
    bool bIsPressToHold;
    
    UPROPERTY(Transient)
    float PressToHoldDuration;
    
    UPROPERTY(Transient)
    float PressToHoldProgress;
    
    FGbxMenuInputActionInfo();
};

