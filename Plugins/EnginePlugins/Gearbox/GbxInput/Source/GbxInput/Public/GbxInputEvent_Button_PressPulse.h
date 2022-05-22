#pragma once
#include "CoreMinimal.h"
#include "GbxInputEvent_Button_Core.h"
#include "GbxInputEvent_Button_PressPulse.generated.h"

USTRUCT()
struct GBXINPUT_API FGbxInputEvent_Button_PressPulse : public FGbxInputEvent_Button_Core {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float DelayBeforeInitialPulse;
    
    UPROPERTY(EditAnywhere)
    float BaseDelayBetweenPulses;
    
    UPROPERTY(EditAnywhere)
    float PulseDelayAcceleration;
    
    UPROPERTY(EditAnywhere)
    float FinalDelayBetweenPulses;
    
public:
    FGbxInputEvent_Button_PressPulse();
};

