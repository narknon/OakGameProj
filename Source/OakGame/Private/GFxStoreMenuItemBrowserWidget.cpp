#include "GFxStoreMenuItemBrowserWidget.h"

UGFxStoreMenuItemBrowserWidget::UGFxStoreMenuItemBrowserWidget() {
    this->ContentClip = NULL;
    this->TitleTextClip = NULL;
    this->NavBarClip = NULL;
    this->SubTitleTextClip = NULL;
    this->ItemBrowserListClip = NULL;
    this->PageNavBarClip = NULL;
    this->CurrentTab = EGFxStoreMenuTabType::Empty;
    this->CurrentPageIndex = 0;
}

