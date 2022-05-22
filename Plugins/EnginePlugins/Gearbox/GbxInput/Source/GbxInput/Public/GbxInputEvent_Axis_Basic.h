#pragma once
#include "CoreMinimal.h"
#include "GbxInputEvent_Axis_Core.h"
#include "GbxInputEvent_Axis_Basic.generated.h"

USTRUCT()
struct GBXINPUT_API FGbxInputEvent_Axis_Basic : public FGbxInputEvent_Axis_Core {
    GENERATED_BODY()
public:
    FGbxInputEvent_Axis_Basic();
};

