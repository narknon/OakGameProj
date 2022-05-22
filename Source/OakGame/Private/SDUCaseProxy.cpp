#include "SDUCaseProxy.h"

void ASDUCaseProxy::PurchaseSDU() {
}




void ASDUCaseProxy::OnAxisInput(FVector Vec, bool bGamePad) {
}

void ASDUCaseProxy::NavigateUp() {
}

void ASDUCaseProxy::NavigateRight() {
}

void ASDUCaseProxy::NavigateLeft() {
}

void ASDUCaseProxy::NavigateDown() {
}

void ASDUCaseProxy::ExitCase() {
}

ASDUCaseProxy::ASDUCaseProxy() {
    this->SelectedSDUMaterial = NULL;
    this->MaxSelectionAngle = 90.00f;
    this->MaxSelectionDistance = 300.00f;
    this->AngleWeight = 1.00f;
    this->DistanceWeight = 1.00f;
}

