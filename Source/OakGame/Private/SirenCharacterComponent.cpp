#include "SirenCharacterComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;
class UGbxCustomizationData;
class UOakActionAbility_PhaseTrance;
class USirenArmControllerInterface;
class ISirenArmControllerInterface;
class UOakActionAbility;

void USirenCharacterComponent::UnlockSirenCastMeshes(FName Reason) {
}

void USirenCharacterComponent::StaticRemoveGhostArmController(AActor* Actor, TScriptInterface<ISirenArmControllerInterface> Controller) {
}

void USirenCharacterComponent::StaticAddGhostArmController(AActor* Actor, TScriptInterface<ISirenArmControllerInterface> Controller) {
}






void USirenCharacterComponent::OnRep_ArmAppearanceState() {
}

void USirenCharacterComponent::OnPhaseTranceComboChanged(UOakActionAbility_PhaseTrance* ActionAbility) {
}

void USirenCharacterComponent::OnPhaseTranceActivated(UOakActionAbility* InActionAbility) {
}

void USirenCharacterComponent::OnLevelChanged(int32 OldLevel, int32 NewLevel) {
}

void USirenCharacterComponent::OnFirstPersonCreated(bool bArmsCreated) {
}

void USirenCharacterComponent::OnCustomizationApplied(UGbxCustomizationData* Customization) {
}

void USirenCharacterComponent::LockSirenCastMeshes(FName Reason) {
}

int32 USirenCharacterComponent::GetRushCount() const {
    return 0;
}

int32 USirenCharacterComponent::GetMaxRushCount() const {
    return 0;
}

EPhaseTranceElementalType USirenCharacterComponent::GetActiveGhostArmElementalType() const {
    return EPhaseTranceElementalType::None;
}

int32 USirenCharacterComponent::ConsumeRush() {
    return 0;
}

bool USirenCharacterComponent::CanPlayPassiveGhostArmAction() const {
    return false;
}

bool USirenCharacterComponent::AreGhostArmsVisible() const {
    return false;
}

void USirenCharacterComponent::AddRush(int32 Value) {
}

void USirenCharacterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USirenCharacterComponent, ArmAppearanceState);
}

USirenCharacterComponent::USirenCharacterComponent() {
    this->GhostArms1PComponentName = TEXT("Ghost Arms 1st");
    this->GhostArms3PComponentName = TEXT("Ghost Arms 3rd");
    this->RushHUDItemData = NULL;
    this->FirstPersonComponent = NULL;
    this->GhostArms1P = NULL;
    this->GhostArms3P = NULL;
    this->Rush = 0;
    this->ConsumedRush = 0;
}

