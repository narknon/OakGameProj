#include "IronBearWeaponUseComponent_Jackhammer.h"
#include "Net/UnrealNetwork.h"

void UIronBearWeaponUseComponent_Jackhammer::AnimNotify_OnUsed() {
}

void UIronBearWeaponUseComponent_Jackhammer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIronBearWeaponUseComponent_Jackhammer, FireRate);
    DOREPLIFETIME(UIronBearWeaponUseComponent_Jackhammer, AccuracyImpulse);
}

UIronBearWeaponUseComponent_Jackhammer::UIronBearWeaponUseComponent_Jackhammer() {
}

