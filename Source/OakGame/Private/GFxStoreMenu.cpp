#include "GFxStoreMenu.h"

class UGbxGFxButton;

void UGFxStoreMenu::OnPreviewImageLoaded() const {
}

void UGFxStoreMenu::OnClickStoreButton(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxStoreMenu::UGFxStoreMenu() {
    this->ItemBrowserWidgetClip = NULL;
    this->DetailsWidgetClip = NULL;
    this->PreviewImageManager = NULL;
    this->bPreviewImagesNeedRefresh = false;
}

