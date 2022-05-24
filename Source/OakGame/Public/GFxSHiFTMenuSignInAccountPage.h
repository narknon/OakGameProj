#pragma once
#include "CoreMinimal.h"
#include "GFxSHiFTMenuPage.h"
#include "GbxMenuInputEvent.h"
#include "GFxSHiFTMenuSignInAccountPage.generated.h"

class UGbxTextField;
class UGbxGFxButton;
class UGFxSHiFTMenuEditableTextField;

UCLASS(NonTransient)
class OAKGAME_API UGFxSHiFTMenuSignInAccountPage : public UGFxSHiFTMenuPage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* ErrorTextBox;
    
    UPROPERTY(Transient)
    UGFxSHiFTMenuEditableTextField* EmailTextField;
    
    UPROPERTY(Transient)
    UGFxSHiFTMenuEditableTextField* PasswordTextField;
    
    UPROPERTY(Transient)
    UGbxGFxButton* SubmitButton;
    
public:
    UGFxSHiFTMenuSignInAccountPage();
private:
    UFUNCTION()
    void OnSubmitFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnClickSubmit(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnClickCancel(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
};

