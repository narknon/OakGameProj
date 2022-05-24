#pragma once
#include "CoreMinimal.h"
#include "GFxStatusMenuSubmenu.h"
#include "SpinnerSliderTestMovie.generated.h"

class UGbxGFxSlider;
class UGbxSpinner;
class UGbxGFxDropDownList;

UCLASS()
class OAKGAME_API USpinnerSliderTestMovie : public UGFxStatusMenuSubmenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxSpinner* TestSpinner;
    
    UPROPERTY(Transient)
    UGbxGFxSlider* TestSlider;
    
    UPROPERTY(Transient)
    UGbxGFxDropDownList* TestDropDownList;
    
public:
    USpinnerSliderTestMovie();
};

