#pragma once
#include "CoreMinimal.h"
#include "GbxGFxSliderAcceleration.generated.h"

USTRUCT(BlueprintType)
struct GBXUI_API FGbxGFxSliderAcceleration {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 RepeatsNeededToAcclerate;
    
    UPROPERTY(EditAnywhere)
    int32 RepeatAdder;
    
    UPROPERTY(EditAnywhere)
    int32 MaxIncreases;
    
    UPROPERTY(EditAnywhere)
    float TimeToResetMouseWheelRepeat;
    
    FGbxGFxSliderAcceleration();
};

