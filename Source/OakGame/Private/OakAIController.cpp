#include "OakAIController.h"
#include "OakNavComponent.h"
#include "OakAIActionComponent.h"

class AController;
class APawn;
class AOakVehicle;
class ATurretSeatPawn;

void AOakAIController::OnSeatDetachFinished(APawn* DetachedPawn, AController* DetachedController) {
}

UOakNavComponent* AOakAIController::GetOakNavComponent() const {
    return NULL;
}

UOakAIActionComponent* AOakAIController::GetOakAIActionComponent() const {
    return NULL;
}

AOakVehicle* AOakAIController::GetMyVehicle() const {
    return NULL;
}

ATurretSeatPawn* AOakAIController::GetMyTurret() const {
    return NULL;
}

void AOakAIController::EnterVehicle(AOakVehicle* OakVehicle, int32 SlotIdx, bool bInstant, bool bSkipAITreeSetup) {
}

void AOakAIController::EnterTurret(ATurretSeatPawn* TurrentPawn, bool bInstant, bool bSkipAITreeSetup) {
}

AOakAIController::AOakAIController() {
    this->OakCharacter = NULL;
    this->AIWeaponUserComp = NULL;
    this->MyVehicle = NULL;
    this->MyVehicleSeatPawn = NULL;
    this->MyVehicleSeatComponent = NULL;
    this->TurretSeatPawn = NULL;
    this->TurretMovementComponent = NULL;
    this->OakAIActionComponent = CreateDefaultSubobject<UOakAIActionComponent>(TEXT("AIActionComponent"));
    this->OakNavComponent = CreateDefaultSubobject<UOakNavComponent>(TEXT("GbxNavComponent"));
    this->OakNpcGreetingComponent = NULL;
}

