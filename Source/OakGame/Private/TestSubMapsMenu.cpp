#include "TestSubMapsMenu.h"

class UGbxUserWidget;

void UTestSubMapsMenu::OnTestMapSelected(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo) {
}

void UTestSubMapsMenu::OnBackClicked(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo) {
}

UTestSubMapsMenu::UTestSubMapsMenu() {
    this->BackItem = NULL;
    this->ContentPanel = NULL;
}

