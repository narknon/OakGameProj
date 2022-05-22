#include "TestMapsMenu.h"

class UGbxUserWidget;

void UTestMapsMenu::OnTestMapDLCNameSelected(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo) {
}

void UTestMapsMenu::OnTestMapCategorySelected(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo) {
}

void UTestMapsMenu::OnBackClicked(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo) {
}

UTestMapsMenu::UTestMapsMenu() {
    this->BackItem = NULL;
    this->MapCategories.AddDefaulted(6);
    this->SubMenuData = NULL;
    this->ContentPanel = NULL;
}

