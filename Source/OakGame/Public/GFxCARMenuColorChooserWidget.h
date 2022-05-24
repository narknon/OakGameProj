#pragma once
#include "CoreMinimal.h"
#include "GFxColorPickerWidget.h"
#include "GFxCARMenuColorChooserWidget.generated.h"

class UGbxGFxButton;

UCLASS(NonTransient)
class OAKGAME_API UGFxCARMenuColorChooserWidget : public UGFxColorPickerWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxButton* NavArrowLeftButton;
    
    UPROPERTY(Transient)
    UGbxGFxButton* NavArrowRightButton;
    
public:
    UGFxCARMenuColorChooserWidget();
};

