#pragma once
#include "CoreMinimal.h"
#include "WwiseObject.h"
#include "WwiseSwitch.generated.h"

class UWwiseSwitchGroup;

UCLASS()
class WWISEAUDIO_API UWwiseSwitch : public UWwiseObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    UWwiseSwitchGroup* SwitchGroup;
    
    UWwiseSwitch();
};

