#pragma once
#include "CoreMinimal.h"
#include "GbxInputEvent.h"
#include "GbxInputButton.h"
#include "GbxInputEvent_Button_Core.generated.h"

class UGbxInputKeyRebindData_Button;

USTRUCT()
struct GBXINPUT_API FGbxInputEvent_Button_Core : public FGbxInputEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGbxInputButton BUTTON;
    
    UPROPERTY(EditAnywhere)
    UGbxInputKeyRebindData_Button* RebindData;
    
public:
    FGbxInputEvent_Button_Core();
};

