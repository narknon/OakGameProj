#include "TrophyCaseProxy.h"

void ATrophyCaseProxy::ZoomOut() {
}

void ATrophyCaseProxy::ZoomIn() {
}

void ATrophyCaseProxy::StopRotatingTrophy() {
}

void ATrophyCaseProxy::SelectPrevious() {
}

void ATrophyCaseProxy::SelectNext() {
}

void ATrophyCaseProxy::RotateTrophyPositive() {
}

void ATrophyCaseProxy::RotateTrophyNegative() {
}

void ATrophyCaseProxy::OnAxisInput(FVector Vec, bool bGamePad) {
}

ATrophyCaseProxy::ATrophyCaseProxy() {
    this->LockedTrophyMesh = NULL;
    this->BronzeTrophyMaterial = NULL;
    this->SilverTrophyMaterial = NULL;
    this->GoldTrophyMaterial = NULL;
    this->PlatinumTrophyMaterial = NULL;
    this->EridiumTrophyMaterial = NULL;
    this->TrophyRotationSpeed = 5.00f;
    this->SelectedTrophyBaseMaterial = NULL;
    this->MaxSelectionAngle = 90.00f;
    this->MaxSelectionDistance = 300.00f;
    this->AngleWeight = 1.00f;
    this->DistanceWeight = 1.00f;
}

