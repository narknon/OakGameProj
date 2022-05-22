#include "OakAction_LeapOnVehicle.h"

class AOakVehicle;

TArray<FGbxActionRegister> UOakAction_LeapOnVehicle::MakeActionLeapOnVehicleRegisters(AOakVehicle* OakVehicle, int32 SeatIndex) {
    return TArray<FGbxActionRegister>();
}

UOakAction_LeapOnVehicle::UOakAction_LeapOnVehicle() {
    this->FailedAction = NULL;
    this->DistanceToAttach = 400.00f;
    this->ZOffset = 75.00f;
    this->NavigationToleranceRadius = 100.00f;
    this->MaxLeapDistance = 2000.00f;
    this->bDoNavigationTest = true;
    this->SeatType = ELeapOnVehicle_SeatType::SpecifiedSlot;
    this->bSearchNearestSeat = true;
}

