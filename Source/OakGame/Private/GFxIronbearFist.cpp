#include "GFxIronbearFist.h"

class UGbxDamageType;

void UGFxIronbearFist::UpdateFistElementalIcon(const UGbxDamageType* NewDamageType) {
}

void UGFxIronbearFist::SetFistReadyState(bool ReadyState) {
}

UGFxIronbearFist::UGFxIronbearFist() {
    this->CachedEquippedWeapon = NULL;
    this->RechargingClip = NULL;
    this->BracketAnim = NULL;
    this->AnimateBar = NULL;
}

