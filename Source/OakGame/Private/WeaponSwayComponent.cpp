#include "WeaponSwayComponent.h"
#include "Net/UnrealNetwork.h"

void UWeaponSwayComponent::OnZoomed() {
}

void UWeaponSwayComponent::OnUsed() {
}

void UWeaponSwayComponent::OnDetached() {
}

void UWeaponSwayComponent::OnAttached() {
}

float UWeaponSwayComponent::GetSwayGoodness() const {
    return 0.0f;
}

void UWeaponSwayComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWeaponSwayComponent, Scale);
    DOREPLIFETIME(UWeaponSwayComponent, AccuracyScale);
    DOREPLIFETIME(UWeaponSwayComponent, ZoomScale);
    DOREPLIFETIME(UWeaponSwayComponent, ZoomAccuracyScale);
}

UWeaponSwayComponent::UWeaponSwayComponent() {
    this->Pattern = NULL;
    this->Speed = 1.00f;
    this->Lacunarity = 1.00f;
    this->Persistence = 0.62f;
    this->DiscWidth = 1.00f;
    this->DiscHeight = 1.00f;
    this->ZoomSmoothingSpeed = 10.00f;
    this->ZoomSmoothInTime_OnZoom = 2.00f;
    this->ZoomSmoothInTime_OnFire = 0.00f;
    this->bApplyAccuracyScaleOnlyWhenFiring = true;
    this->MaxAccuracyPercent = 1.00f;
    this->CurrentScale = 0.00f;
    this->WeaponPrivate = NULL;
}

