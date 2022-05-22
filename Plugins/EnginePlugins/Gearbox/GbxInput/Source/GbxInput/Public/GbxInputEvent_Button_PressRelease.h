#pragma once
#include "CoreMinimal.h"
#include "GbxInputEvent_Button_Core.h"
#include "GbxInputEvent_Button_PressRelease.generated.h"

USTRUCT()
struct GBXINPUT_API FGbxInputEvent_Button_PressRelease : public FGbxInputEvent_Button_Core {
    GENERATED_BODY()
public:
    FGbxInputEvent_Button_PressRelease();
};

