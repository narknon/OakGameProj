#include "GFxItemInspectionMenu.h"

class UGbxGFxButton;

void UGFxItemInspectionMenu::OnTabClicked(FName ItemId) const {
}

void UGFxItemInspectionMenu::OnSkinsListCellFocused(const FGbxGFxListCellUpdateInfo& UpdateInfo) const {
}

void UGFxItemInspectionMenu::OnSkinsListCellClicked(const FGbxGFxListCellUpdateInfo& UpdateInfo) const {
}

void UGFxItemInspectionMenu::OnSkinsListArrowClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxItemInspectionMenu::OnPartsListCellFocused(const FGbxGFxListCellUpdateInfo& UpdateInfo) const {
}

void UGFxItemInspectionMenu::OnPartsListCellClicked(const FGbxGFxListCellUpdateInfo& UpdateInfo) const {
}

void UGFxItemInspectionMenu::OnManufacturerPlayClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxItemInspectionMenu::OnItemCardReady() const {
}

void UGFxItemInspectionMenu::OnInventoryItemUpdated(const FInventoryListEntryHandle& UpdatedItemHandle) const {
}

void UGFxItemInspectionMenu::OnChallengeClassLoaded() const {
}

UGFxItemInspectionMenu::UGFxItemInspectionMenu() {
    this->ItemCardMovie = NULL;
    this->ItemInspectionContainerClass = NULL;
    this->MaxPrimaryStatsDisplayed = 6;
    this->MaxSecondaryStatsDisplayed = 4;
    this->ItemScoreTextHTMLColor = TEXT("#838383");
    this->ItemStatBaseSize = 40.00f;
    this->ItemStatMainSateSpacing = 46.00f;
    this->ItemStatSecondaryStatsSpacing = 50.00f;
    this->ItemPartInspectionFocusInterpolationRate = 10.00f;
    this->PartLineThickness = 3.00f;
    this->FullScreenMovieMenuData = NULL;
    this->bMenuHasStarted = false;
    this->bHasSetInspectionItem = false;
    this->bItemCardReady = false;
    this->ContentClip = NULL;
    this->ItemCard = NULL;
    this->MouseDragArea = NULL;
    this->NavAnimClip = NULL;
    this->NavBarClip = NULL;
    this->ItemInspectionContainer = NULL;
    this->CurrentPageIndex = -1;
    this->bIsInSkins = false;
    this->bRMBDown = false;
    this->bLMBDown = false;
    this->LineDrawObject = NULL;
    this->bHasPreviewSkin = false;
    this->bCanChangeSkins = true;
    this->bIsUIHidden = false;
}

