#include "OakAimAssistParameters.h"

UOakAimAssistParameters::UOakAimAssistParameters() {
    this->Stickiness = 0.50f;
    this->ZoomStickiness = 0.50f;
    this->ReduceInput = 0.50f;
    this->RadiusScaleDistance = 400.00f;
    this->MinRadiusScale = 1.50f;
    this->MaxRadiusScale = 3.00f;
    this->FullStrengthRatio = 0.00f;
    this->FarPlaneMinCap = 10000.00f;
    this->FarPlaneMinDistance = 2000.00f;
    this->FarPlaneMaxDistance = 4000.00f;
    this->NearPlaneMaxDistance = 400.00f;
    this->NearPlaneMinDistance = 100.00f;
    this->NearPlaneMaxScaling = 0.00f;
    this->IdleAimAssistSmoothingDuration = 1.00f;
    this->NoTargetAimAssistSmoothingDuration = 0.50f;
    this->bBulletMagnetismAlwaysOn = false;
    this->BulletMagnetismOuterAngle = 4.00f;
    this->BulletMagnetismInnerAngle = 2.00f;
    this->bBulletMagnetismZoomScale = true;
    this->BulletMagnetismZoomScale = 1.00f;
    this->MaxBulletMagnetismDeflection = 4.00f;
    this->MaxSnapToTargetPitch = 2.25f;
    this->MaxSnapToTargetYaw = 30.00f;
    this->InitialStickiness = 0.00f;
    this->InitialZoomStickiness = 0.00f;
    this->InitialReduceInput = 0.00f;
    this->InitialRadiusScaleDistance = 0.00f;
    this->InitialMinRadiusScale = 0.00f;
    this->InitialMaxRadiusScale = 0.00f;
    this->InitialFullStrengthRatio = 0.00f;
    this->InitialFarPlaneMinCap = 0.00f;
    this->InitialFarPlaneMinDistance = 0.00f;
    this->InitialFarPlaneMaxDistance = 0.00f;
    this->InitialNearPlaneMaxDistance = 0.00f;
    this->InitialNearPlaneMinDistance = 0.00f;
    this->InitialNearPlaneMaxScaling = 0.00f;
    this->InitialIdleAimAssistSmoothingDuration = 0.00f;
    this->InitialNoTargetAimAssistSmoothingDuration = 0.00f;
    this->InitialbBulletMagnetismAlwaysOn = false;
    this->InitialBulletMagnetismOuterAngle = 0.00f;
    this->InitialBulletMagnetismInnerAngle = 0.00f;
    this->InitialbBulletMagnetismZoomScale = false;
    this->InitialBulletMagnetismZoomScale = 0.00f;
    this->InitialMaxBulletMagnetismDeflection = 0.00f;
    this->InitialMaxSnapToTargetPitch = 0.00f;
    this->InitialMaxSnapToTargetYaw = 0.00f;
}

