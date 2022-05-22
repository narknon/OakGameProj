#include "ProjectedShield.h"

class UDamageComponent;
class UDamageCauserComponent;
class UGbxDamageType;
class UDamageSource;
class AController;

void UProjectedShield::ToggleProjectedShield(bool bToggleOn) {
}

void UProjectedShield::SpawnShield() {
}

void UProjectedShield::OnTakeAnyDamageInternal(UDamageComponent* DamageReceiver, float Damage, const UGbxDamageType* DamageType, const UDamageSource* DamageSource, AController* InstigatedBy, UDamageCauserComponent* DamageCauser, FReceivedDamageDetails Details) {
}



void UProjectedShield::OnShieldNotDepletedInternal(FGameResourcePoolReference ResourcePool) {
}





void UProjectedShield::OnShieldDepleted(FGameResourcePoolReference ResourcePool) {
}


void UProjectedShield::OnHealthTypeVeryLow(const FHealthType& HealthType, int32 Index) {
}

void UProjectedShield::OnHealthTypeNormal(const FHealthType& HealthType, int32 Index) {
}

void UProjectedShield::OnHealthTypeLow(const FHealthType& HealthType, int32 Index) {
}

bool UProjectedShield::IsShieldBroken() const {
    return false;
}

void UProjectedShield::DespawnShield() {
}

UProjectedShield::UProjectedShield() {
    this->Data = NULL;
    this->ParticleSystem = NULL;
    this->StaticMeshComponent = NULL;
    this->ProjectedAudioComponent = NULL;
    this->OwnerActor = NULL;
}

