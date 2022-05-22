#pragma once
#include "CoreMinimal.h"
#include "GbxInputEventHelper_SigFunc_Button_PressPulse_Data.generated.h"

USTRUCT()
struct FGbxInputEventHelper_SigFunc_Button_PressPulse_Data {
    GENERATED_BODY()
public:
    UPROPERTY()
    float NextPulseDelay;
    
    GBXINPUT_API FGbxInputEventHelper_SigFunc_Button_PressPulse_Data();
};

