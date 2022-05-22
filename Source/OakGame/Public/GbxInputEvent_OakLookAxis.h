#pragma once
#include "CoreMinimal.h"
#include "GbxInputEvent_Axis_Core.h"
#include "GbxInputEvent_OakLookAxis.generated.h"

USTRUCT()
struct OAKGAME_API FGbxInputEvent_OakLookAxis : public FGbxInputEvent_Axis_Core {
    GENERATED_BODY()
public:
    FGbxInputEvent_OakLookAxis();
};

