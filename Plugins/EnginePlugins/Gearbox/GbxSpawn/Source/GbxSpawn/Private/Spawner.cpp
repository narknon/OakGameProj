#include "Spawner.h"
#include "SpawnPointComponent.h"
#include "SpawnerComponent.h"
#include "SpawnerTeamComponent.h"
#include "SpawnerLinkComponent.h"

class USpawnerStyle;
class UTeam;
class ASpawner;

void ASpawner::SuspendAllActors() {
}

void ASpawner::SetTeamOverride(UTeam* OverrideTeam) {
}

void ASpawner::SetTeam(UTeam* NewTeam) {
}

void ASpawner::SetAlwaysActive(bool bInAlwaysActive) {
}

void ASpawner::ResetSpawning() {
}

void ASpawner::OverrideSpawnerStyle(USpawnerStyle* NewSpawnerStyle) {
}

void ASpawner::OnSpawningComplete(ASpawner* Spawner) {
}

bool ASpawner::IsSpawnerEnabled() const {
    return false;
}

bool ASpawner::IsFinishedSpawning() const {
    return false;
}

USpawnPointComponent* ASpawner::GetSpawnPointComponent() const {
    return NULL;
}

USpawnerTeamComponent* ASpawner::GetSpawnerTeamComponent() const {
    return NULL;
}

USpawnerLinkComponent* ASpawner::GetSpawnerLinkComponent() const {
    return NULL;
}

USpawnerComponent* ASpawner::GetSpawnerComponent() const {
    return NULL;
}

int32 ASpawner::GetNumAliveActors(bool bIncludeExternal) const {
    return 0;
}

void ASpawner::EnableSpawner() {
}

void ASpawner::DisableSpawner() {
}

void ASpawner::DestroyAllActors() {
}

void ASpawner::CompleteScriptedWarmup() {
}

bool ASpawner::AreAllDead(bool bIncludeExternal) const {
    return false;
}

ASpawner::ASpawner() {
    this->SpawnerComponent = CreateDefaultSubobject<USpawnerComponent>(TEXT("SpawnerComponent"));
    this->SpawnerLinkComponent = CreateDefaultSubobject<USpawnerLinkComponent>(TEXT("SpawnerLinkComponent"));
    this->SpawnPointComponent = CreateDefaultSubobject<USpawnPointComponent>(TEXT("SpawnPointComponent"));
    this->SpawnerTeamComponent = CreateDefaultSubobject<USpawnerTeamComponent>(TEXT("SpawnerTeamComponent"));
    this->bAutoGroundSpawnPointComponents = false;
}

