#include "OakStreamingInteractionEvent_Lootable.h"

class USpawnerComponent;
class ALootableObject;
class AActor;

void UOakStreamingInteractionEvent_Lootable::OnThumbnailLoaded() {
}

void UOakStreamingInteractionEvent_Lootable::OnLootableSpawned(USpawnerComponent* SpawnerComponent, AActor* Actor) {
}

void UOakStreamingInteractionEvent_Lootable::OnLootableObjectEventOpened(ALootableObject* LootableObject) {
}

void UOakStreamingInteractionEvent_Lootable::OnLootableDied(USpawnerComponent* SpawnerComponent, AActor* Actor) {
}

UOakStreamingInteractionEvent_Lootable::UOakStreamingInteractionEvent_Lootable() {
    this->SweepstakesDuration = 15.00f;
    this->PrizeSelectionDuration = 30.00f;
    this->FallbackTimerAdditionalTime = 15.00f;
    this->bEnabledInGearUpGameMode = false;
    this->UIGlobals = NULL;
    this->ThumbnailMgr = NULL;
    this->ThumbnailGenerationIdx = -1;
}

