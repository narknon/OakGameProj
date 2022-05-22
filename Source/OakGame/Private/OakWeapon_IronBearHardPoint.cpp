#include "OakWeapon_IronBearHardPoint.h"
#include "Net/UnrealNetwork.h"
#include "OakCustomizationComponent.h"

class UGFxIronbearWeaponWidget;

void AOakWeapon_IronBearHardPoint::SetHUDWidget(UGFxIronbearWeaponWidget* InHUDWidget) {
}

void AOakWeapon_IronBearHardPoint::OnWeaponUsed() {
}

void AOakWeapon_IronBearHardPoint::OnRep_IronBear() {
}

void AOakWeapon_IronBearHardPoint::OnRep_HardPointData() {
}

void AOakWeapon_IronBearHardPoint::OnRep_HardPointAugmentMod() {
}

void AOakWeapon_IronBearHardPoint::OnFirstPersonCreated() {
}

void AOakWeapon_IronBearHardPoint::NotifyPlayerLeaving_Implementation() {
}







bool AOakWeapon_IronBearHardPoint::HasMod(EIronBearModType ModType) const {
    return false;
}


EIronBearModType AOakWeapon_IronBearHardPoint::GetMod() const {
    return EIronBearModType::None;
}



void AOakWeapon_IronBearHardPoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOakWeapon_IronBearHardPoint, IronBear);
    DOREPLIFETIME(AOakWeapon_IronBearHardPoint, HardPointData);
    DOREPLIFETIME(AOakWeapon_IronBearHardPoint, HardPointAugmentMod);
}

AOakWeapon_IronBearHardPoint::AOakWeapon_IronBearHardPoint() {
    this->UIHardpointType = EIronBearUIHardpointType::GRENADE_LAUNCHER;
    this->HardPointAugment = NULL;
    this->CustomizationComponent = CreateDefaultSubobject<UOakCustomizationComponent>(TEXT("CustomizationComponent"));
    this->IronBear = NULL;
    this->HardPointAugmentMod = NULL;
    this->HUDWidget = NULL;
}

