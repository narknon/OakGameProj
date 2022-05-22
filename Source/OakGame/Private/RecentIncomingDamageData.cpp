#include "RecentIncomingDamageData.h"

FRecentIncomingDamageData::FRecentIncomingDamageData() {
    this->DamageInstigator = NULL;
    this->DamageInstigatorDamageComponent = NULL;
    this->InitialDuration = 0.00f;
    this->DamageSeverity = 0.00f;
    this->TimeRemaining = 0.00f;
    this->bWasJolt = false;
    this->Flags = ERecentDamageFlags::None;
    this->InstanceId = 0;
}

