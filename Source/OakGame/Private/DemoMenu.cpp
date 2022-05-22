#include "DemoMenu.h"

class UGbxUserWidget;

void UDemoMenu::OnDemoSaveSelected(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo) {
}

void UDemoMenu::OnBackClicked(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo) {
}

void UDemoMenu::ClientConnectTimedout() {
}

UDemoMenu::UDemoMenu() {
    this->BackItem = NULL;
    this->ContentPanel = NULL;
}

