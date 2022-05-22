#include "OakVehicleAnimInstance.h"

void UOakVehicleAnimInstance::PlayGearShiftAnim(int32 Gear, bool bIsUpShifting) {
}

void UOakVehicleAnimInstance::OwnerPostBeginPlay() {
}

UOakVehicleAnimInstance::UOakVehicleAnimInstance() {
    this->OakVehicle = NULL;
    this->WheeledComponent = NULL;
    this->HoverComponent = NULL;
    this->GearShiftSlotName = TEXT("GearShiftSlot");
    this->GearShiftUp = NULL;
    this->GearShiftDown = NULL;
}

