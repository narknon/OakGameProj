#pragma once
#include "CoreMinimal.h"
#include "GFxSHiFTMenuPage.h"
#include "GbxMenuInputEvent.h"
#include "GFxSHiFTMenuResetPasswordPage.generated.h"

class UGbxGFxButton;
class UGFxSHiFTMenuEditableTextField;
class UGbxTextField;

UCLASS(NonTransient)
class OAKGAME_API UGFxSHiFTMenuResetPasswordPage : public UGFxSHiFTMenuPage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxSHiFTMenuEditableTextField* EmailTextField;
    
    UPROPERTY(Transient)
    UGbxTextField* ErrorTextBox;
    
    UPROPERTY(Transient)
    UGbxGFxButton* SubmitButton;
    
public:
    UGFxSHiFTMenuResetPasswordPage();
private:
    UFUNCTION()
    void OnSubmitFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnClickSubmit(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
};

