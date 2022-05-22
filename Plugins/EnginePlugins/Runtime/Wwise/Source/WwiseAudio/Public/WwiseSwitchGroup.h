#pragma once
#include "CoreMinimal.h"
#include "WwiseObject.h"
#include "WwiseSwitchGroup.generated.h"

class UWwiseSwitch;

UCLASS()
class WWISEAUDIO_API UWwiseSwitchGroup : public UWwiseObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<UWwiseSwitch*> ChildSwitches;
    
    UWwiseSwitchGroup();
};

