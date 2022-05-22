#include "GFxItemCardAbbreviated.h"

class UOakInventoryBalanceStateComponent;
class AWeapon;
class APawn;

void UGFxItemCardAbbreviated::OnWeaponChanged(AWeapon* Weapon, AWeapon* LastWeapon) const {
}

void UGFxItemCardAbbreviated::OnPawnChanged(APawn* Pawn, APawn* OldPawn) const {
}

void UGFxItemCardAbbreviated::OnEndCompareToEquippedItem() const {
}

void UGFxItemCardAbbreviated::OnCompareToEquippedItem(UOakInventoryBalanceStateComponent* HeldItem, UOakInventoryBalanceStateComponent* OtherItem) const {
}

bool UGFxItemCardAbbreviated::IsDisplayed() const {
    return false;
}

void UGFxItemCardAbbreviated::HideAfterDelay() const {
}

UGFxItemCardAbbreviated::UGFxItemCardAbbreviated() {
    this->TimeUntilOutro = 1.00f;
}

