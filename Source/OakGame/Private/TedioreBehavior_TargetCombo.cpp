#include "TedioreBehavior_TargetCombo.h"

class UDamageComponent;
class UDamageCauserComponent;
class UGbxDamageType;
class UDamageSource;
class AController;

void UTedioreBehavior_TargetCombo::OnProjectileTakeAnyDamage(UDamageComponent* DamageReceiver, float Damage, const UGbxDamageType* DamageType, const UDamageSource* DamageSource, AController* InstigatedBy, UDamageCauserComponent* DamageCauser, FReceivedDamageDetails Details) {
}



UTedioreBehavior_TargetCombo::UTedioreBehavior_TargetCombo() {
    this->TargetComboSphere = NULL;
    this->VisualDelay = 0.65f;
    this->TargetComboVisuals = NULL;
    this->HealthType = NULL;
    this->ComboDamageScale = NULL;
    this->ComboRadiusScale = NULL;
    this->OnTargetComboExplode = NULL;
    this->OnTargetComboStart = NULL;
    this->OnTargetComboEnd = NULL;
}

