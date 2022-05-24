#include "SpawnerComponent.h"

class USpawnerStyle;
class UTeam;
class USpawnOptionData;
class USpawnerComponent;
class AActor;

void USpawnerComponent::SuspendAllActors() {
}

void USpawnerComponent::SetTeam(UTeam* NewTeam) {
}

void USpawnerComponent::SetSpawnOptions(USpawnOptionData* NewSpawnOptions) {
}

void USpawnerComponent::ResetSpawning() {
}

void USpawnerComponent::OverrideSpawnerStyle(USpawnerStyle* NewSpawnerStyle) {
}

bool USpawnerComponent::IsSpawnerStyleClassAllowed(const UClass* SpawnerStyleClass) const {
    return false;
}

bool USpawnerComponent::IsFinishedSpawning() const {
    return false;
}

void USpawnerComponent::IncludeExternalActorsForAllDiedEvent() {
}

USpawnOptionData* USpawnerComponent::GetSpawnOptions() const {
    return NULL;
}

USpawnerComponent* USpawnerComponent::GetParentSpawner() const {
    return NULL;
}

int32 USpawnerComponent::GetNumSuspendedActors() const {
    return 0;
}

int32 USpawnerComponent::GetNumSpawnedActors(bool bIncludeExternal, bool bInGroup) const {
    return 0;
}

int32 USpawnerComponent::GetNumDeadActors(bool bIncludeExternal, bool bInGroup) const {
    return 0;
}

int32 USpawnerComponent::GetNumAliveActors(bool bIncludeExternal, bool bInGroup) const {
    return 0;
}

TArray<AActor*> USpawnerComponent::GetAliveActors() {
    return TArray<AActor*>();
}

void USpawnerComponent::EnableSpawner() {
}

void USpawnerComponent::DisableSpawner() {
}

void USpawnerComponent::DestroyAllActors() {
}

void USpawnerComponent::CompleteScriptedWarmup() {
}

bool USpawnerComponent::AreAllDead(bool bIncludeExternal, bool bInGroup) const {
    return false;
}

USpawnerComponent::USpawnerComponent() {
    this->bEnabled = true;
    this->bAlwaysActive = false;
    this->bResetOnEnabled = false;
    this->ScriptedWarmup = EScriptedWarmup::None;
    this->ActivationRadius = 8000.00f;
    this->bActivationUsesRadius = true;
    this->bActivationUsesVolumes = false;
    this->MinimumActivationTime = 5.00f;
    this->SpawnerStyle = NULL;
    this->SpawnerStyleOverride = NULL;
    this->bApplyLimitsToGroup = false;
    this->bRandomizeSpawnPoints = true;
    this->SpawnPointUseType = ESpawnPointUseType::Self;
    this->SpawnPointClusterRadius = 2000.00f;
    this->Spawner = NULL;
    this->bIncludeExternalActorsForAllDiedEvent = false;
    this->DrawStyle = ESpawnerDrawStyle::Wire;
    this->bUseScriptedWarmup = false;
}

