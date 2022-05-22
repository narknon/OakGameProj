#pragma once
#include "CoreMinimal.h"
#include "GbxGFxButton.h"
#include "GbxMenuInputEvent.h"
#include "GbxSpinner.generated.h"

class UGbxTextField;

UCLASS(NonTransient)
class GBXUI_API UGbxSpinner : public UGbxGFxButton {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FSpinnerValueUpdatedEvent);
    
    UPROPERTY(Transient)
    UGbxGFxButton* LeftButton;
    
    UPROPERTY(Transient)
    UGbxGFxButton* RightButton;
    
    UPROPERTY(Transient)
    UGbxTextField* ChoiceText;
    
    UGbxSpinner();
    UFUNCTION()
    void SpinRight(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void SpinLeft(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo);
    
};

