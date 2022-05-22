#include "GFxLoadGameMenu.h"

class UGbxGFxButton;
class UGbxGFxDialogBox;

void UGFxLoadGameMenu::OnSaveGameItemFocused(UGbxGFxButton* FocusedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxLoadGameMenu::OnSaveGameItemClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxLoadGameMenu::OnPromptNoSaveGame(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxLoadGameMenu::OnPromptDeleteCorruptSavegame(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxLoadGameMenu::OnDeleteCharacterChoiceMade(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxLoadGameMenu::OnCreateCharacterButtonClicked(UGbxGFxButton* FocusedButton, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxLoadGameMenu::UGFxLoadGameMenu() {
    this->PlayerName = NULL;
    this->MenuTitle = NULL;
    this->LoadInProgressClip = NULL;
    this->LoadCharacterPanel = NULL;
    this->SaveGameList = NULL;
    this->SaveGameDetails = NULL;
    this->CreateCharacterButton = NULL;
    this->CreateCharacterButtonHint = NULL;
    this->CountdownText = NULL;
    this->TargetPC = NULL;
    this->PlayerStandIn = NULL;
}

