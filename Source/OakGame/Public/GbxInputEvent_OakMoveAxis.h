#pragma once
#include "CoreMinimal.h"
#include "GbxInputEvent_Axis_Core.h"
#include "GbxInputEvent_OakMoveAxis.generated.h"

USTRUCT()
struct OAKGAME_API FGbxInputEvent_OakMoveAxis : public FGbxInputEvent_Axis_Core {
    GENERATED_BODY()
public:
    FGbxInputEvent_OakMoveAxis();
};

