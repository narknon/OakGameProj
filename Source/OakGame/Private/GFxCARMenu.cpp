#include "GFxCARMenu.h"

class AOakVehicle;
class UGbxGFxButton;
class UGbxGFxPooledGridList;

void UGFxCARMenu::OnVehicleSpawned(AOakVehicle* Vehicle) const {
}

void UGFxCARMenu::OnTutorialComplete() const {
}

void UGFxCARMenu::OnTutorialAdvanced() const {
}

void UGFxCARMenu::OnThumbnailLoaded() const {
}

void UGFxCARMenu::OnTeleportPressed(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxCARMenu::OnPreviewColorChanged(FColor Color, bool bIsPrimary, int32 Index, bool bIsDefault) const {
}

void UGFxCARMenu::OnPreviewActorContainerLoaded() const {
}

void UGFxCARMenu::OnNavButtonPressed(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxCARMenu::OnLastDeployedPressed(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxCARMenu::OnColorChosen(FColor Color, bool bIsPrimary, int32 Index, bool bIsDefault) const {
}

void UGFxCARMenu::OnAssetLoaded() const {
}

UGbxGFxPooledGridList* UGFxCARMenu::GetPartSelectionList(const FString& ListName) const {
    return NULL;
}

void UGFxCARMenu::extBodyUnlockAnimFinished() const {
}

UGFxCARMenu::UGFxCARMenu() {
    this->CameraInputSpeed = 1.00f;
    this->CameraInputDamping = 0.20f;
    this->CameraMinPitch = 0.00f;
    this->CameraMaxPitch = 0.00f;
    this->bAllowRotateCameraInPart = false;
    this->TestWidget = NULL;
    this->EchoDeviceMenuName = TEXT("CatchARide");
    this->EchoDeviceIdleScreenName = TEXT("CatchARide");
    this->EchoDeviceDeployScreenName = TEXT("CatchARide_DeployVehicle");
    this->MaxThumbnails = 21;
    this->MaxThumbnailsSplitScreen = 15;
    this->bShowDebugPreviewText = false;
    this->MouseRotateFactor = 0.00f;
    this->VehiclePreviewActor = NULL;
    this->CurrentLoadoutIndex = -1;
    this->DeployedLoadoutIndex = -1;
    this->CurrentPage = EGFxCARMenuPage::Loadout;
    this->TutorialWidget = NULL;
    this->DebugLoadoutText = NULL;
    this->CatchARideMenuClip = NULL;
    this->MenuLabelText = NULL;
    this->StatCard = NULL;
    this->NavArrowLeftButton = NULL;
    this->NavArrowLeft = NULL;
    this->NavArrowRightButton = NULL;
    this->NavArrowRight = NULL;
    this->LoadoutNameClip = NULL;
    this->SlotLabelClip = NULL;
    this->PrevLoadoutHintClip = NULL;
    this->NextLoadoutHintClip = NULL;
    this->CustomizationHintNextClip = NULL;
    this->CustomizationHintPrevClip = NULL;
    this->CustomizePanels = NULL;
    this->LoadoutOptionsClip = NULL;
    this->ColorChooserWidget = NULL;
    this->DeployAnim = NULL;
    this->DeployText = NULL;
    this->NewBodyNotification = NULL;
    this->NewBodyHeaderText = NULL;
    this->NewBodyHeaderDsText = NULL;
    this->NewBodyNameText = NULL;
    this->ThumbnailManager = NULL;
    this->MouseDragArea = NULL;
    this->bThumbnailRefreshNeeded = false;
    this->SharedOptionsListScrollbar = NULL;
}

