#include "AIAction_VehicleEscort.h"

class AActor;

void UAIAction_VehicleEscort::InitEscortTarget(AActor* Target, const FVector& OffsetVector, AActor* OrientationReference) {
}

void UAIAction_VehicleEscort::InitCustomEscort(AActor* Target, AActor* ActorToEscort, const FVector& OffsetVector, AActor* OrientationReference) {
}

UAIAction_VehicleEscort::UAIAction_VehicleEscort() {
    this->bMoveEvenIfUnreachable = false;
}

