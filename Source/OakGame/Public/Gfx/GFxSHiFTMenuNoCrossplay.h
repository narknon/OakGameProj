#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GFxEchoNetSubMenu.h"
#include "GbxMenuInputEvent.h"
#include "GFxSHiFTMenuNoCrossplay.generated.h"

class UGFxSHiFTMenuPage;
class UGFxSHiFTMenuCodeRedemptionPage;
class UGFxSHiFTMenuResetPasswordPage;
class UGFxSHiFTMenuNotSignedInPage;
class UGFxSHiFTMenuSignInAccountPage;
class UGFxSHiFTMenuRewardHistoryPage;
class UGFxSHiFTMenuCreateAccountPage;
class UGFxSHiFTMenuOfflinePage;
class UGbxTextField;
class AGbxPlayerController;
class UGbxMenuData;
class UGbxGFxDialogBox;

UCLASS()
class OAKGAME_API UGFxSHiFTMenuNoCrossplay : public UGFxEchoNetSubMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxSHiFTMenuPage* ActivePage;
    
    UPROPERTY(Transient)
    UGFxSHiFTMenuNotSignedInPage* NotSignedInPage;
    
    UPROPERTY(Transient)
    UGFxSHiFTMenuResetPasswordPage* ResetPasswordPageWidget;
    
    UPROPERTY(Transient)
    UGFxSHiFTMenuSignInAccountPage* SignInAccountPage;
    
    UPROPERTY(Transient)
    UGFxSHiFTMenuCreateAccountPage* CreateAccountPageWidget;
    
    UPROPERTY(Transient)
    UGFxSHiFTMenuRewardHistoryPage* RewardHistoryPageWidget;
    
    UPROPERTY(Transient)
    UGFxSHiFTMenuCodeRedemptionPage* CodeRedemptionPageWidget;
    
    UPROPERTY(Transient)
    UGFxSHiFTMenuOfflinePage* OfflinePageWidget;
    
    UPROPERTY(Transient)
    UGbxTextField* TargetPlayerName;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AGbxPlayerController> TargetPC;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FText PageDescriptionText;
    
    UPROPERTY(EditDefaultsOnly)
    FText EmailDescriptionText;
    
    UPROPERTY(EditDefaultsOnly)
    FText AgeDescriptionText;
    
    UPROPERTY(EditDefaultsOnly)
    FText PasswordDescriptionText;
    
    UPROPERTY(EditDefaultsOnly)
    FText ConfirmPasswordDescriptionText;
    
    UPROPERTY(EditDefaultsOnly)
    FText PasswordInvalidText;
    
    UPROPERTY(EditDefaultsOnly)
    FText AgeInvalidText;
    
    UPROPERTY(EditDefaultsOnly)
    FText EmailInvalidText;
    
    UPROPERTY(EditDefaultsOnly)
    FText ConfirmPasswordInvalidText;
    
    UPROPERTY(EditDefaultsOnly)
    FText ResetPasswordDescription;
    
    UPROPERTY(EditDefaultsOnly)
    FText PasswordResetResponseText;
    
    UPROPERTY(EditDefaultsOnly)
    FText CodeRedemptionPageDescriptionText;
    
    UPROPERTY(EditDefaultsOnly)
    FText CodeRedemptionErrorText;
    
    UPROPERTY(EditDefaultsOnly)
    FText NoRewardText;
    
    UPROPERTY(EditDefaultsOnly)
    FText WebSiteLinkText;
    
    UPROPERTY(EditDefaultsOnly)
    FText WebSiteLinkFormatText;
    
    UPROPERTY(EditDefaultsOnly)
    FText OfflineMessageText;
    
public:
    UPROPERTY(EditDefaultsOnly)
    UGbxMenuData* ErrorMessageDialogBox;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor ErrorTextColor;
    
    UPROPERTY(EditDefaultsOnly)
    FString EditableTextClickedAudioEventName;
    
    UPROPERTY(EditDefaultsOnly)
    FString EditableTextSubmittedAudioEventName;
    
    UPROPERTY(EditDefaultsOnly)
    FString EditableTextEditAbortedAudioEventName;
    
    UPROPERTY(EditDefaultsOnly)
    FString EditableTextInputAudioEventName;
    
    UGFxSHiFTMenuNoCrossplay();
private:
    UFUNCTION()
    void HandleEULAResponse(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
protected:
    UFUNCTION()
    void extFinishedHide() const;
    
};

