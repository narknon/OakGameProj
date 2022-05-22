#include "StreamingEventDispatcher.h"
#include "Net/UnrealNetwork.h"

class UPawnAttachSlotComponent;
class USpawnerComponent;
class AGbxCharacter;
class AActor;
class UDamageComponent;
class UGbxDamageType;
class UDamageSource;
class UOakStreamingInteractionEvent_EnemySpawn;
class UObject;

void AStreamingEventDispatcher::ValidEnemySuspend_Implementation(USpawnerComponent* SpawnerComponent, AActor* Actor) const {
}

void AStreamingEventDispatcher::ValidEnemyDied_Implementation(USpawnerComponent* SpawnerComponent, AActor* Actor) const {
}

void AStreamingEventDispatcher::SetEventEnemyName_Implementation(const FString& NewEnemyName) {
}
bool AStreamingEventDispatcher::SetEventEnemyName_Validate(const FString& NewEnemyName) {
    return true;
}

void AStreamingEventDispatcher::SetEventEnemy_Implementation(AGbxCharacter* Enemy) {
}
bool AStreamingEventDispatcher::SetEventEnemy_Validate(AGbxCharacter* Enemy) {
    return true;
}

void AStreamingEventDispatcher::SendUpdatedSessionStats_Implementation(const FOakInteractiveSessionStats Updated) const {
}

void AStreamingEventDispatcher::PlayerDied_Implementation() const {
}

void AStreamingEventDispatcher::OnVehicleExited(const UPawnAttachSlotComponent* PawnAttachSlotComponent) {
}

void AStreamingEventDispatcher::OnVehicleEntered(const UPawnAttachSlotComponent* PawnAttachSlotComponent) {
}

void AStreamingEventDispatcher::OnRep_ValidEnemyActorSpawned() {
}

void AStreamingEventDispatcher::OnPlayerInjured() {
}

void AStreamingEventDispatcher::OnPlayerDead() {
}

void AStreamingEventDispatcher::OnPlayerCausedDeath(const UDamageComponent* Damaged, const FCausedDeathDetails& Details) {
}

void AStreamingEventDispatcher::OnPlayerCausedDamage(AActor* DamageInstigator, float Damage, const UGbxDamageType* DamageType, const UDamageSource* DamageSource, AActor* DamagedActor, FCausedDamageDetails Details) {
}

void AStreamingEventDispatcher::OnLegendarySpawned(bool bNewVal) {
}

void AStreamingEventDispatcher::OnEnemySuspend(USpawnerComponent* SpawnerComponent, AActor* Actor) {
}

void AStreamingEventDispatcher::OnEnemySpawned(USpawnerComponent* SpawnerComponent, AActor* Actor) {
}

void AStreamingEventDispatcher::OnEnemyDied(USpawnerComponent* SpawnerComponent, AActor* Actor) {
}

void AStreamingEventDispatcher::HookToEnemySpawnEvent_Implementation(UOakStreamingInteractionEvent_EnemySpawn* EnemySpawnEvent, const TArray<USpawnerComponent*>& AllValidSpawners) {
}
bool AStreamingEventDispatcher::HookToEnemySpawnEvent_Validate(UOakStreamingInteractionEvent_EnemySpawn* EnemySpawnEvent, const TArray<USpawnerComponent*>& AllValidSpawners) {
    return true;
}

void AStreamingEventDispatcher::GetUpdatedSessionStats_Implementation() {
}
bool AStreamingEventDispatcher::GetUpdatedSessionStats_Validate() {
    return true;
}

void AStreamingEventDispatcher::ExecutePollAction_Implementation(FSoftObjectPath PollActionClassPath, UObject* Context, float Value) {
}
bool AStreamingEventDispatcher::ExecutePollAction_Validate(FSoftObjectPath PollActionClassPath, UObject* Context, float Value) {
    return true;
}

void AStreamingEventDispatcher::CleanEventEnemy_Implementation() {
}
bool AStreamingEventDispatcher::CleanEventEnemy_Validate() {
    return true;
}

void AStreamingEventDispatcher::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStreamingEventDispatcher, SpawnedEnemy);
}

AStreamingEventDispatcher::AStreamingEventDispatcher() {
    this->EventEnemy = NULL;
    this->EnemyWaypoint = NULL;
    this->EnemyUIName = NULL;
    this->PlayerOwner = NULL;
    this->EnemySpawnEventRef = NULL;
    this->SpawnedEnemy = NULL;
}

