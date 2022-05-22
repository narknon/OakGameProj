#include "OakPawnAttachSlotComponent.h"

class APawn;

FRotator UOakPawnAttachSlotComponent::GetWeaponRotation(bool bWorldSpace) const {
    return FRotator{};
}

APawn* UOakPawnAttachSlotComponent::GetHijackedOccupant() const {
    return NULL;
}

UOakPawnAttachSlotComponent::UOakPawnAttachSlotComponent() {
    this->bLockInputDuringAttach = false;
    this->bLockInputDuringDetach = false;
    this->bTransferInventory = false;
    this->bCanUseWhileNotPossessingPrimaryCharacter = true;
    this->bModifyHUD = false;
    this->bHideHUDWhileAttaching = false;
    this->bHideHUDWhileDetaching = false;
    this->bClearSelfElementalEffectsOnAttach = false;
    this->bClearPawnElementalEffectsOnAttach = false;
    this->bBlockPawnElementalEffectsWhileAttached = false;
    this->bAllowPetsWhileAttached = false;
    this->bAllowEchoDeviceEquipping = false;
    this->bHidePrimaryWeaponWhileAttached = false;
    this->bHideHolsteredWeaponWhileAttached = false;
    this->bMustMatchDuelTeamOfInstigator = false;
    this->bUseStatusMenuCameraMode = false;
    this->CameraModesSet = NULL;
    this->bOverrideCrosshairScreenPosition = false;
    this->bPlayOccupiedIdleAudioOnLocalPlayerOnly = false;
    this->OccupiedIdleAudioEvent = NULL;
    this->OccupiedIdleStopAudioEvent = NULL;
    this->bTransitionIsHijacked = false;
    this->HijackerController = NULL;
    this->bIsAllowedToDetachWhenHiJack = true;
    this->bIsLeapOnTarget = false;
    this->bIsSeatSwap = false;
    this->HijackAttachSlot = NULL;
}

