#include "SeatPawn.h"
#include "OakPawnAttachSlotComponent.h"

class UWeaponSlotData;
class APawn;
class USceneComponent;

void ASeatPawn::StopZooming(bool bForcedStop) {
}

void ASeatPawn::StopUsingWeapon(UWeaponSlotData* Slot, uint8 InputChannel) {
}

void ASeatPawn::StopReload(UWeaponSlotData* Slot) {
}

void ASeatPawn::StartZooming() {
}

void ASeatPawn::StartUsingWeapon(UWeaponSlotData* Slot, uint8 InputChannel) {
}

void ASeatPawn::SeatAttachStateChanged() {
}

void ASeatPawn::Reload(UWeaponSlotData* Slot) {
}

bool ASeatPawn::IsOccupied(bool bIncludeDetaching) const {
    return false;
}

APawn* ASeatPawn::GetOccupant(bool bIncludeDetaching) const {
    return NULL;
}

void ASeatPawn::AttachSeat(FName AttachSocket, USceneComponent* AttachComponent) {
}

ASeatPawn::ASeatPawn() {
    this->MaxWeaponAimAdjustmentAngle = 2.00f;
    this->SeatComponent = CreateDefaultSubobject<UOakPawnAttachSlotComponent>(TEXT("SeatComponent"));
    this->InputComponentClass = NULL;
    this->WeaponsComponent = NULL;
    this->BodyWeaponHoldManager = NULL;
    this->bResetTurretRotationWhenUnoccupied = true;
}

