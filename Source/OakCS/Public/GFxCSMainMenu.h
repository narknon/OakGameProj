#pragma once
#include "CoreMinimal.h"
#include "GFxCSSubMenu.h"
#include "GbxMenuInputEvent.h"
#include "GFxCSMainMenu.generated.h"

class UGFxCSButton;
class UGbxGFxButton;
class UGbxTextField;
class UGbxGFxDialogBox;

UCLASS()
class OAKCS_API UGFxCSMainMenu : public UGFxCSSubMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxCSButton* PlayButton;
    
    UPROPERTY(Transient)
    UGFxCSButton* BuyBoosterButton;
    
    UPROPERTY(Transient)
    UGFxCSButton* WhatsThisButton;
    
    UPROPERTY(Transient)
    UGFxCSButton* QuitButton;
    
    UPROPERTY(Transient)
    UGbxGFxButton* HelpButton;
    
    UPROPERTY(Transient)
    UGbxTextField* DidYouKnowTitle;
    
    UPROPERTY(Transient)
    UGbxTextField* DidYouKnowText;
    
    UPROPERTY(Transient)
    UGbxGFxDialogBox* SparkAuthenticatingDialog;
    
public:
    UGFxCSMainMenu();
private:
    UFUNCTION()
    void OnWhatsThisClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnPlayClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnErrorDialogClicked(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnBuyBoosterClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
};

