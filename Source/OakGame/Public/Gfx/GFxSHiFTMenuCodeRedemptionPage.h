#pragma once
#include "CoreMinimal.h"
#include "GFxSHiFTMenuPage.h"
#include "GbxMenuInputEvent.h"
#include "GFxSHiFTMenuCodeRedemptionPage.generated.h"

class UGbxTextField;
class UGbxGFxButton;
class UGFxSHiFTMenuEditableTextField;
class UGbxGFxObject;

UCLASS(NonTransient)
class OAKGAME_API UGFxSHiFTMenuCodeRedemptionPage : public UGFxSHiFTMenuPage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* ErrorTextField;
    
    UPROPERTY(Transient)
    UGbxTextField* AccountNameTextField;
    
    UPROPERTY(Transient)
    UGbxTextField* PageDescription;
    
    UPROPERTY(Transient)
    TArray<UGFxSHiFTMenuEditableTextField*> CodeSegments;
    
    UPROPERTY(Transient)
    UGbxGFxObject* CheckVerificationClip;
    
    UPROPERTY(Transient)
    UGbxTextField* DiamondKeyTextField;
    
    UPROPERTY(Transient)
    UGbxTextField* GoldenkeyTextField;
    
    UPROPERTY(Transient)
    UGbxGFxButton* CodeRedemptionButton;
    
    UPROPERTY(Transient)
    UGbxGFxButton* RewardHistoryButton;
    
    UPROPERTY(Transient)
    UGbxGFxButton* SubmitButton;
    
public:
    UGFxSHiFTMenuCodeRedemptionPage();
private:
    UFUNCTION()
    void OnClickSubmit(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnClickRewardHistory(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnButtonFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
};

