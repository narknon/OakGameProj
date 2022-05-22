#include "GFxCharacterSelectMenu.h"

class UObject;
class UGbxGFxButton;

void UGFxCharacterSelectMenu::WaitForValidPlayerController(const UObject* WorldContextObject, FLatentActionInfo LatentInfo) const {
}

void UGFxCharacterSelectMenu::ShowLoadGameMenu() const {
}

void UGFxCharacterSelectMenu::OnPlayerClassItemFocused(UGbxGFxButton* ButtonFocused, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxCharacterSelectMenu::OnPlayerClassItemClicked(UGbxGFxButton* ButtonClicked, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxCharacterSelectMenu::UGFxCharacterSelectMenu() {
    this->ButtonLibraryName = TEXT("BTN_CharacterClass");
    this->PlayerStatusLibraryName = TEXT("BTN_PlayerStatus");
    this->CountdownText = NULL;
    this->PlayerName = NULL;
    this->CharacterDescriptionPanel = NULL;
    this->CharacterDescriptionLabel = NULL;
    this->CharacterDescription = NULL;
    this->LobbyWidget = NULL;
}

