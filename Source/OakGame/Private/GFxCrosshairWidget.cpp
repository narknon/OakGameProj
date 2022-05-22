#include "GFxCrosshairWidget.h"

class AWeapon;
class UGbxCrosshairDataAsset;

void UGFxCrosshairWidget::UpdateWeaponSlot() const {
}

void UGFxCrosshairWidget::UpdateLightForDamageType() const {
}

void UGFxCrosshairWidget::SetLockedTargetClipsState(bool bIsEnabled) const {
}

void UGFxCrosshairWidget::SetCrosshairColor(ECrosshairColorsEnum NewColor) const {
}

void UGFxCrosshairWidget::OnZoomed(uint8 ZoomLevel) const {
}

void UGFxCrosshairWidget::OnWeaponChanged(AWeapon* Weapon, AWeapon* LastWeapon) const {
}

void UGFxCrosshairWidget::OnTargetLockChange(AWeapon* EventWeapon, bool bInLockedOn) const {
}

void UGFxCrosshairWidget::OnSwitchedWeaponMode() const {
}

void UGFxCrosshairWidget::OnNotZoomed() const {
}

void UGFxCrosshairWidget::OnMeleeStateChangeEvent(bool bMeleePossible) const {
}

void UGFxCrosshairWidget::HandleCrosshairSpread() const {
}

ECrosshairColorsEnum UGFxCrosshairWidget::FindCrosshairColor() const {
    return ECrosshairColorsEnum::NONE;
}

void UGFxCrosshairWidget::CheckForCrosshairVisibility() const {
}

void UGFxCrosshairWidget::ChangeCrosshairType(const UGbxCrosshairDataAsset* NewCrosshairDataAsset) const {
}

void UGFxCrosshairWidget::ChangeCrosshairByString(const FString& NewFrame) const {
}

UGFxCrosshairWidget::UGFxCrosshairWidget() {
    this->DefaultCrosshairData = NULL;
    this->CrosshairEnumType = ECrosshairType::NORMAL;
    this->CachedWeapon = NULL;
    this->CachedZoomComponent = NULL;
    this->CrosshairActor = NULL;
    this->CurrentTarget = NULL;
    this->CrosshairContainerInstanceName = TEXT("allCrosshairs");
    this->MeleeCrosshairInstanceName = TEXT("meleeCrosshair");
    this->ActionSkillCrosshairInstanceName = TEXT("actionSkillGeneric");
    this->SprintCrosshairInstanceName = TEXT("sprintCrosshair");
    this->DefaultCrosshairInstanceName = TEXT("meleeCrosshair");
    this->MaxRepresentableAngle = 0.00f;
    this->FeedbackWidget = NULL;
}

