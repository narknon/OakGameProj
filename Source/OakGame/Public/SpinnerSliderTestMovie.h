#pragma once
#include "CoreMinimal.h"
#include "GFxStatusMenuSubmenu.h"
#include "SpinnerSliderTestMovie.generated.h"

class UGbxGFxDropDownList;
class UGbxSpinner;
class UGbxGFxSlider;

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

