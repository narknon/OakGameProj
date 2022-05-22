#include "GFxSHiFTMenuNoCrossplay.h"

class UGbxGFxDialogBox;

void UGFxSHiFTMenuNoCrossplay::HandleEULAResponse(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxSHiFTMenuNoCrossplay::extFinishedHide() const {
}

UGFxSHiFTMenuNoCrossplay::UGFxSHiFTMenuNoCrossplay() {
    this->ActivePage = NULL;
    this->NotSignedInPage = NULL;
    this->ResetPasswordPageWidget = NULL;
    this->SignInAccountPage = NULL;
    this->CreateAccountPageWidget = NULL;
    this->RewardHistoryPageWidget = NULL;
    this->CodeRedemptionPageWidget = NULL;
    this->OfflinePageWidget = NULL;
    this->TargetPlayerName = NULL;
    this->ErrorMessageDialogBox = NULL;
}

