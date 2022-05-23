#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxUISpinnerWidget.generated.h"

UCLASS(NonTransient)
class UGFxUISpinnerWidget : public UGbxGFxObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    uint8 TargetValue;
    
    UPROPERTY(Transient)
    UGbxGFxObject* AnimationWrapper;
    
public:
    UPROPERTY(EditAnywhere)
    uint8 TotalDigitsDisplayed;
    
    UGFxUISpinnerWidget();
};

