#include "WeaponRecoilPatternComponent.h"
#include "Net/UnrealNetwork.h"

void UWeaponRecoilPatternComponent::ResetPattern() {
}

void UWeaponRecoilPatternComponent::OnUseFinished() {
}

float UWeaponRecoilPatternComponent::GetRecoilPatternWidthGoodness() const {
    return 0.0f;
}

float UWeaponRecoilPatternComponent::GetRecoilPatternHeightGoodness() const {
    return 0.0f;
}

float UWeaponRecoilPatternComponent::GetRecoilPatternGoodness() const {
    return 0.0f;
}

void UWeaponRecoilPatternComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWeaponRecoilPatternComponent, PatternWidthScale);
    DOREPLIFETIME(UWeaponRecoilPatternComponent, PatternHeightScale);
    DOREPLIFETIME(UWeaponRecoilPatternComponent, PatternZoomScale);
}

UWeaponRecoilPatternComponent::UWeaponRecoilPatternComponent() {
    this->Pattern = NULL;
    this->bScalePatternByFOV = true;
    this->bResetPatternWhenFiringEnds = false;
    this->RecoilSpeed = 4.00f;
    this->RecoilRecoveryTime = 0.50f;
    this->RecoilRecoveryDelayTime = 0.20f;
    this->bStartRecoilRecoveryWhenFiringEnds = true;
}

