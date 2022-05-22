#include "GFxStatusMenu.h"

class AWeapon;


void UGFxStatusMenu::OnPlayerWeaponChanged(AWeapon* NewWeapon, AWeapon* LastWeapon) const {
}

void UGFxStatusMenu::OnNumPlayersChanged(int32 NewNumPlayers) const {
}

UGFxStatusMenu::UGFxStatusMenu() {
    this->BackgroundParticleEffectWipeSound = TEXT("StatusMenu_Backdrop_Wipe");
    this->BackgroundParticleEffectCloseSound = TEXT("StatusMenu_Backdrop_Close");
    this->StatusMenuNavBar = NULL;
    this->ZoneMapViewer = NULL;
    this->bBackgroundParticleStateOn = false;
}

