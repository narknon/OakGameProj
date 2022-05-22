#pragma once
#include "CoreMinimal.h"
#include "GbxGFxDialogBox.h"
#include "GbxGFxEULA.generated.h"

class UGbxGFxSlider;

UCLASS()
class UGbxGFxEULA : public UGbxGFxDialogBox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxSlider* EULAScrollBar;
    
public:
    UGbxGFxEULA();
private:
    UFUNCTION()
    void OnSliderPositionUpdate(float SliderPercent) const;
    
};

