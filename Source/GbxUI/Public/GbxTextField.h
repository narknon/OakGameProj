#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GbxTextField.generated.h"

class UGbxGFxSlider;

UCLASS(NonTransient)
class GBXUI_API UGbxTextField : public UGbxGFxObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxGFxSlider* ScrollBar;
    
public:
    UGbxTextField();
    UFUNCTION()
    void OnScrollBarPositionUpdated(float SliderPercentage);
    
};

