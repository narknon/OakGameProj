#include "GFxItemCard.h"

class AWeapon;
class APawn;

void UGFxItemCard::OnWeaponChanged(AWeapon* Weapon, AWeapon* LastWeapon) const {
}

void UGFxItemCard::OnPawnChanged(APawn* Pawn, APawn* OldPawn) const {
}

bool UGFxItemCard::IsDisplayed() const {
    return false;
}

void UGFxItemCard::extFinishedTransition() const {
}

void UGFxItemCard::extFinishedHide() const {
}

UGFxItemCard::UGFxItemCard() {
    this->UpdateElementalInfoTime = 2.00f;
    this->HideSmallIconDistance = 332.00f;
    this->ShowSmallIconDistance = 330.00f;
    this->HideItemCardDistance = 252.00f;
    this->ShowItemCardDistance = 250.00f;
    this->BeamAlignmentOffset = -800.00f;
    this->ItemCardHeightPivotOffsetFactor = 1.00f;
    this->SplitscreenOffset = 350.00f;
    this->CalibrationResolutionX = 1920.00f;
    this->CalibrationResolutionY = 1080.00f;
    this->DistanceScaleCurve = NULL;
    this->TimeUntilOutro = 1.00f;
}

