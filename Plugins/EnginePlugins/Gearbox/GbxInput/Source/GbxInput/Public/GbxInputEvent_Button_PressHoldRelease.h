#pragma once
#include "CoreMinimal.h"
#include "GbxInputEvent_Button_Core.h"
#include "GbxInputEvent_Button_PressHoldRelease.generated.h"

USTRUCT()
struct GBXINPUT_API FGbxInputEvent_Button_PressHoldRelease : public FGbxInputEvent_Button_Core {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float HoldTime;
    
public:
    FGbxInputEvent_Button_PressHoldRelease();
};

