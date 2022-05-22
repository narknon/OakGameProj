#include "VehicleSeatComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UVehicleSeatComponent::ReserveSeat(AActor* Actor) {
}

void UVehicleSeatComponent::RequestSwitchSeats() {
}

bool UVehicleSeatComponent::IsReservedBy(AActor* Actor) {
    return false;
}

bool UVehicleSeatComponent::IsReserved() {
    return false;
}

bool UVehicleSeatComponent::CanUseCharacterWeapon() const {
    return false;
}

void UVehicleSeatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UVehicleSeatComponent, AdjacentSeatSlot);
    DOREPLIFETIME(UVehicleSeatComponent, bCanBeSwitchedTo);
}

UVehicleSeatComponent::UVehicleSeatComponent() {
    this->SeatSlot = -1;
    this->AdjacentSeatSlot = -1;
    this->bSkipExitTransitionWhenFlipped = true;
    this->Vehicle = NULL;
    this->TransitionSeatSlot = -1;
    this->bUseVehicleAimSettings = true;
    this->bAffectVehicleTeam = true;
    this->bCrouchWhenSeated = false;
    this->bNotUsableByEnemies = false;
    this->FollowVehicleRotation = EFollowVehicleRotation::None;
    this->bForcePawnIgnoreControllerRotationOnTransition = false;
    this->bForcePawnUseAllControllerRotationWhileAttached = false;
    this->bAllowRootMotionWhileAttached = false;
    this->bHideFirstPersonLegsWhileAttached = false;
    this->bDisableHandToWeaponAlpha = true;
    this->bIsUsingBaseAnimation = false;
    this->HideFirstPersonLegsReason = TEXT("VehicleFlatbed");
    this->bCanBeSwitchedTo = true;
    this->bPlaySafePlaceTransitionWhenNoDetachTransitionFound = false;
    this->bOptimizeInteractBoxes = true;
    this->bUseCharacterWeapon = false;
    this->AdditiveMovementScale = 1.00f;
    this->AdditiveSpeedScale = 1.00f;
}

