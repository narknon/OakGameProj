#include "TurretSeatPawn.h"
#include "TeamComponent.h"

void ATurretSeatPawn::HijackStateChanged() {
}

void ATurretSeatPawn::GetAvailableIKSocketNames(TArray<FName>& SocketNames) const {
}

void ATurretSeatPawn::EnableTransitionControl(bool bEnable) {
}

void ATurretSeatPawn::AttachStateChanged() {
}

ATurretSeatPawn::ATurretSeatPawn() {
    this->TurretType = EGroundTurretType::Seated;
    this->TeamComponent = CreateDefaultSubobject<UTeamComponent>(TEXT("TeamComponent"));
    this->DefaultTurretAction = NULL;
    this->OakPawnAttachSlotComponent = NULL;
    this->OakHijackSlotComponent = NULL;
    this->LastCharacterAttached = NULL;
    this->LastHijackCharacterAttached = NULL;
    this->MeshComponent = NULL;
    this->PlayerAlertType = EPlayerAlertType::Neutral;
}

