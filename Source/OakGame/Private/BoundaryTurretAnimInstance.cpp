#include "BoundaryTurretAnimInstance.h"

UBoundaryTurretAnimInstance::UBoundaryTurretAnimInstance() {
    this->OwnerTurret = NULL;
    this->PivotSocketName = TEXT("Head");
    this->RotationSpeed = 90.00f;
    this->bInvertTurret = true;
}

