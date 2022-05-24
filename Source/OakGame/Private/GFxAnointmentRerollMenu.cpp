#include "GFxAnointmentRerollMenu.h"

class UGbxGFxObject;
class AActor;
class AOakPlayerController;

void UGFxAnointmentRerollMenu::OnThumbnailLoaded() const {
}

void UGFxAnointmentRerollMenu::OnSelectedBackpackItemChanged(const FOakUIInventoryItemDisplayInfo& DisplayInfo, UGbxGFxObject* GridWidget) const {
}

void UGFxAnointmentRerollMenu::OnReRolledInventoryActorReady(AOakPlayerController* ReRolledOwner, AActor* ReRolledInventoryActor) const {
}

void UGFxAnointmentRerollMenu::OnItemCardReady() const {
}

void UGFxAnointmentRerollMenu::OnBackpackItemClicked(const FOakUIInventoryItemDisplayInfo& DisplayInfo, UGbxGFxObject* GridWidget, const FGbxMenuInputEvent& InputInfo) const {
}

UGFxAnointmentRerollMenu::UGFxAnointmentRerollMenu() {
    this->NavBackpackLeftHint = NULL;
    this->NavBackpackRightHint = NULL;
    this->DenyHint = NULL;
    this->ConfirmHint = NULL;
    this->PlayerEridiumCounter = NULL;
    this->InsufficientFundsTextClip = NULL;
    this->InsufficientFundsTextShadowClip = NULL;
    this->InsufficientFundsObj = NULL;
    this->BackpackClip = NULL;
    this->IconManager = NULL;
    this->ItemCardBase = NULL;
    this->RerollEridiumCounter = NULL;
    this->SelectedItem = NULL;
    this->CurrentFilterIndex = -1;
    this->VisibleBackpackCellsStandard = 8;
    this->VisibleBackpackCellsSplit = 4;
    this->ItemCardMovie = NULL;
}

