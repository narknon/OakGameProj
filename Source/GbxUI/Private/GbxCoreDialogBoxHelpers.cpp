#include "GbxCoreDialogBoxHelpers.h"

class AGbxPlayerController;
class UGbxDialogBox;

UGbxDialogBox* UGbxCoreDialogBoxHelpers::ShowYesNoDialog(AGbxPlayerController* PC, const FText HeaderText, const FText MessageText, bool bAnyUserCanInteract) {
    return NULL;
}

UGbxDialogBox* UGbxCoreDialogBoxHelpers::ShowOkayDialog(AGbxPlayerController* PC, const FText HeaderText, const FText MessageText, bool bAnyUserCanInteract, EGbxDialogBoxHelpersDialogTemplate Template) {
    return NULL;
}

UGbxDialogBox* UGbxCoreDialogBoxHelpers::ShowDialog(AGbxPlayerController* PC, const FGbxDialogBoxInfo& DialogBoxInfo) {
    return NULL;
}

UGbxDialogBox* UGbxCoreDialogBoxHelpers::ShowConfirmCancelDialog(AGbxPlayerController* PC, const FText HeaderText, const FText MessageText, bool bAnyUserCanInteract) {
    return NULL;
}

UGbxDialogBox* UGbxCoreDialogBoxHelpers::ShowBlockingDialog(AGbxPlayerController* PC, const FText HeaderText, const FText MessageText, bool bBlocksAllUsers) {
    return NULL;
}

UGbxCoreDialogBoxHelpers::UGbxCoreDialogBoxHelpers() {
}

