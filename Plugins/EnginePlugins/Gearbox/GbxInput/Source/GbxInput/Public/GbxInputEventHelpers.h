#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GbxInputEventHelpers.generated.h"

UCLASS(Abstract)
class UGbxInputEventHelpers : public UObject {
    GENERATED_BODY()
public:
    UGbxInputEventHelpers();
    UFUNCTION()
    void SigFunc_Button_PressPulse(float NextPulseDelay);
    
    UFUNCTION()
    void SigFunc_Axis(const FVector& Val);
    
};

