#pragma once
#include "CoreMinimal.h"
#include "GFxSHiFTMenuPage.h"
#include "GbxMenuInputEvent.h"
#include "GFxSHiFTMenuNotSignedInPage.generated.h"

class UGbxGFxButton;
class UGbxGFxSlider;
class UGbxTextField;
class UGbxGFxObject;

UCLASS(NonTransient)
class OAKGAME_API UGFxSHiFTMenuNotSignedInPage : public UGFxSHiFTMenuPage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxGFxButton* SignInButton;
    
    UPROPERTY(Transient)
    UGbxGFxButton* CreateAccountButton;
    
    UPROPERTY(Transient)
    UGbxTextField* DescriptionTextFieldClip;
    
    UPROPERTY(Transient)
    UGbxGFxSlider* DescriptionTextFieldScrollBarClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* DescriptionTextFieldGridAreaClip;
    
public:
    UGFxSHiFTMenuNotSignedInPage();
    UFUNCTION()
    void OnClickSignIn(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnClickCreateAccount(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
};

