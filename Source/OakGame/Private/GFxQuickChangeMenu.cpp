#include "GFxQuickChangeMenu.h"

class UGbxGFxEditableTextField;
class UGbxGFxListCell;
class UGbxGFxDialogBox;
class UGbxGFxButton;

void UGFxQuickChangeMenu::OnSaveGameRenamed(UGbxGFxEditableTextField* SaveGameField, const FString& NewName) const {
}

void UGFxQuickChangeMenu::OnSaveGameRenameAborted(UGbxGFxEditableTextField* SaveGameField, const FString& NewName) const {
}

void UGFxQuickChangeMenu::OnRespecChoiceMade(UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxQuickChangeMenu::OnPetRenamed(UGbxGFxEditableTextField* SaveGameField, const FString& NewName) const {
}

void UGFxQuickChangeMenu::OnPetRenameAborted(UGbxGFxEditableTextField* SaveGameField, const FString& NewName) const {
}

void UGFxQuickChangeMenu::OnMenuListItemSelectionChanged(UGbxGFxListCell* SelectedItem) const {
}

void UGFxQuickChangeMenu::OnEmoteLoadoutButtonFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxQuickChangeMenu::OnColorSelected(FColor NewColor, bool bIsSplit, int32 Index, bool bIsDefault) const {
}

void UGFxQuickChangeMenu::OnColorFocused(FColor NewColor, bool bIsSplit, int32 Index, bool bIsDefault) const {
}

UGFxQuickChangeMenu::UGFxQuickChangeMenu() {
    this->RespecAnimTime = 1.00f;
    this->RenameSaveGameContainer = NULL;
    this->RenameCharacterLabel = NULL;
    this->RenameCharacterField = NULL;
    this->RenamePetContainer = NULL;
    this->RenamePetLabel = NULL;
    this->RenamePetField = NULL;
    this->ColorPicker = NULL;
}

