#pragma once
#include "CoreMinimal.h"
#include "GFxSHiFTMenuPage.h"
#include "GbxMenuInputEvent.h"
#include "GFxSHiFTMenuCreateAccountPage.generated.h"

class UGFxSHiFTMenuEditableTextField;
class UGbxGFxButton;

UCLASS(NonTransient)
class OAKGAME_API UGFxSHiFTMenuCreateAccountPage : public UGFxSHiFTMenuPage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxButton* ConfirmAgeButton;
    
    UPROPERTY(Transient)
    UGFxSHiFTMenuEditableTextField* EmailTextField;
    
    UPROPERTY(Transient)
    UGFxSHiFTMenuEditableTextField* PasswordTextField;
    
    UPROPERTY(Transient)
    UGFxSHiFTMenuEditableTextField* ConfirmPasswordTextField;
    
    UPROPERTY(Transient)
    UGbxGFxButton* SubmitButton;
    
public:
    UGFxSHiFTMenuCreateAccountPage();
private:
    UFUNCTION()
    void OnClickSubmit(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnButtonFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnAgeConfirmedClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
};

