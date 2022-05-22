#include "VendingMachineMenu.h"

class UGbxUserWidget;
class UGbxListItem;

void UVendingMachineMenu::OnVendingItemClicked(UGbxListItem* VendingItem) {
}

void UVendingMachineMenu::OnFeaturedItemClicked(UGbxUserWidget* FeaturedItem, const FGbxMenuInputEvent& InputInfo) {
}


UVendingMachineMenu::UVendingMachineMenu() {
    this->VendingMachineList = NULL;
    this->TitleText = NULL;
    this->HeaderText = NULL;
    this->ItemFilterText = NULL;
    this->BackgroundImage = NULL;
    this->FeaturedItemWidget = NULL;
    this->VendingMachineMenuCharacter = NULL;
    this->PlayerShopManager = NULL;
}

