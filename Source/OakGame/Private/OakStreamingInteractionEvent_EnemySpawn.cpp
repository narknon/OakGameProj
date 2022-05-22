#include "OakStreamingInteractionEvent_EnemySpawn.h"

class AActor;
class AGbxCharacter;
class USpawnerComponent;

void UOakStreamingInteractionEvent_EnemySpawn::SetEnemy(AGbxCharacter* Enemy) {
}

void UOakStreamingInteractionEvent_EnemySpawn::OnPlayerDead() {
}

void UOakStreamingInteractionEvent_EnemySpawn::OnEnemySuspend(USpawnerComponent* SpawnerComponent, AActor* Actor) {
}

void UOakStreamingInteractionEvent_EnemySpawn::OnEnemySpawned(USpawnerComponent* SpawnerComponent, AActor* Actor) {
}

void UOakStreamingInteractionEvent_EnemySpawn::OnEnemyDied(USpawnerComponent* SpawnerComponent, AActor* Actor) {
}

UOakStreamingInteractionEvent_EnemySpawn::UOakStreamingInteractionEvent_EnemySpawn() {
    this->NbOfKillsBeforeActivation = 100;
    this->MaxEventDuration = 900.00f;
    this->JoinTimerDuration = 30.00f;
    this->EnemyInfoUpdateTimer = 2.00f;
    this->EnemyWorldIconData = NULL;
    this->PollTimerDuration = 15.00f;
    this->TimeBetweenPollsTimerDuration = 3.00f;
    this->MaxItemInPoll = 4;
    this->NbSpawner = 0;
    this->LastActivationKillCount = 0;
    this->EventEnemy = NULL;
    this->PollID = 0;
}

