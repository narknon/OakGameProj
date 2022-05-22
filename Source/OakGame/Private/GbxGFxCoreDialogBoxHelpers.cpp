#include "GbxGFxCoreDialogBoxHelpers.h"

class AGbxPlayerController;
class UGbxGFxDialogBox;

UGbxGFxDialogBox* UGbxGFxCoreDialogBoxHelpers::ShowYesNoDialog(AGbxPlayerController* PC, const FText& HeaderText, const FText& MessageText, const FGbxGFxDialogBoxOnChoiceMade& OnChoiceMade, bool bAnyUserCanInteract, AGbxPlayerController* InTargetPC, const EGbxGFxDialogBoxStyle DialogBoxStyle, int32 InitialChoiceIndex, bool CanCancel) {
    return NULL;
}

UGbxGFxDialogBox* UGbxGFxCoreDialogBoxHelpers::ShowOkayDialog(AGbxPlayerController* PC, const FText& HeaderText, const FText& MessageText, const FGbxGFxDialogBoxOnChoiceMade& OnChoiceMade, bool bAnyUserCanInteract, AGbxPlayerController* InTargetPC, const EGbxGFxDialogBoxStyle DialogBoxStyle) {
    return NULL;
}

UGbxGFxDialogBox* UGbxGFxCoreDialogBoxHelpers::ShowDialog(AGbxPlayerController* PC, const FGbxGFxDialogBoxInfo& DialogBoxInfo) {
    return NULL;
}

UGbxGFxDialogBox* UGbxGFxCoreDialogBoxHelpers::ShowCustomDialog(AGbxPlayerController* PC, const FText& HeaderText, const FText& MessageText, const TArray<FGbxGFxDialogBoxChoiceInfo>& Choices, const FGbxGFxDialogBoxOnChoiceMade& OnChoiceMade, bool bAnyUserCanInteract, AGbxPlayerController* InTargetPC, const EGbxGFxDialogBoxStyle DialogBoxStyle, int32 InitialChoiceIndex, bool CanCancel) {
    return NULL;
}

UGbxGFxDialogBox* UGbxGFxCoreDialogBoxHelpers::ShowConfirmCancelDialog(AGbxPlayerController* PC, const FText& HeaderText, const FText& MessageText, const FGbxGFxDialogBoxOnChoiceMade& OnChoiceMade, bool bAnyUserCanInteract, AGbxPlayerController* InTargetPC, const EGbxGFxDialogBoxStyle DialogBoxStyle, bool CanCancel) {
    return NULL;
}

UGbxGFxDialogBox* UGbxGFxCoreDialogBoxHelpers::ShowBlockingDialog(AGbxPlayerController* PC, const FText& HeaderText, const FText& MessageText, bool bBlocksAllUsers, AGbxPlayerController* InTargetPC, bool bAllowedToDismiss) {
    return NULL;
}

UGbxGFxCoreDialogBoxHelpers::UGbxGFxCoreDialogBoxHelpers() {
}

