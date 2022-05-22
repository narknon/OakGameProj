#pragma once
#include "CoreMinimal.h"
#include "GbxInputEvent.h"
#include "GbxInputAxis.h"
#include "GbxInputEvent_Axis_Core.generated.h"

class UGbxInputKeyRebindData_Axis;

USTRUCT()
struct GBXINPUT_API FGbxInputEvent_Axis_Core : public FGbxInputEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGbxInputAxis AXIS;
    
    UPROPERTY(EditAnywhere)
    UGbxInputKeyRebindData_Axis* RebindData;
    
public:
    FGbxInputEvent_Axis_Core();
};

