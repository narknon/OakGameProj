#pragma once
#include "CoreMinimal.h"
#include "GbxInputEvent_Axis_Core.h"
#include "GbxInputEvent_OakUIAxis.generated.h"

USTRUCT()
struct OAKGAME_API FGbxInputEvent_OakUIAxis : public FGbxInputEvent_Axis_Core {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float HoldTime;
    
public:
    FGbxInputEvent_OakUIAxis();
};

