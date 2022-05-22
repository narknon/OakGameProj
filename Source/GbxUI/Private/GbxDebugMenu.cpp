#include "GbxDebugMenu.h"

class UGbxUserWidget;

void UGbxDebugMenu::OnCloseClicked() {
}

void UGbxDebugMenu::OnCategorySelected(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo) {
}

UGbxDebugMenu::UGbxDebugMenu() {
    this->CategoryList = NULL;
    this->CloseButton = NULL;
    this->SubmenuContainer = NULL;
    this->HiddenSubmenus.AddDefaulted(1);
}

