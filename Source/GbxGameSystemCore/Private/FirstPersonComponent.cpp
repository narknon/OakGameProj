#include "FirstPersonComponent.h"

class USceneComponent;

void UFirstPersonComponent::SetBaseEyeToWeaponTransform(FTransform NewWeaponTransform) {
}

USceneComponent* UFirstPersonComponent::GetFirstPersonComponentByName(FName Name) const {
    return NULL;
}

UFirstPersonComponent::UFirstPersonComponent() {
    this->ConfigData = NULL;
    this->Arms = NULL;
    this->Legs = NULL;
    this->FirstPersonRootBone = TEXT("SpineEnd");
    this->CameraSocket = TEXT("Camera");
    this->PrimaryHandWeaponSocket = TEXT("R_Hand_Weapon");
    this->BaseTransformsAnimation = NULL;
    this->CrouchTransitionDuration = 0.20f;
    this->CrouchTransitionEasing = 0.00f;
    this->ZoomRotationSocket = TEXT("Muzzle");
    this->ShotOffsetSpeed = 0.00f;
    this->ShotOffsetRecoverySpeed = 0.00f;
    this->FlinchBlendSpace = NULL;
    this->DefaultFlinchBlendInTime = 0.10f;
    this->DefaultFlinchBlendOutTime = 0.10f;
    this->InterruptFlinchBlendInTime = 0.05f;
    this->FlinchInterruptThreshold = 0.80f;
    this->ZoomedFlinchWeight = 1.00f;
}

