#include "OakStreamingInteractionManager.h"

class AOakPlayerController;
class UOakStreamingInteractionManager;

void UOakStreamingInteractionManager::OnThumbnailLoaded() {
}

void UOakStreamingInteractionManager::OnStreamingSessionStatsUpdated(const FOakInteractiveSessionStats& UpdatedSessionStats) {
}

UOakStreamingInteractionManager* UOakStreamingInteractionManager::GetStreamingInteractionManager() {
    return NULL;
}

void UOakStreamingInteractionManager::DisplayTimedMessageBPCall(const FText& Title, const FText& Description, const float Duration, AOakPlayerController* OwnerPC) {
}

void UOakStreamingInteractionManager::DebugStartStreamingInteraction() {
}

void UOakStreamingInteractionManager::DebugInitStreamingService(const FString& DebugExtensionClientID) {
}

void UOakStreamingInteractionManager::DebugFakeStreamingEventPoolResult(const FString& EventName, int32 ActionID, int32 ActionValue) {
}

void UOakStreamingInteractionManager::DebugFakeStreamingEvent(const FString& EventName) {
}

void UOakStreamingInteractionManager::DebugFakeIsStreaming(bool bFakeIsStreaming) {
}

UOakStreamingInteractionManager::UOakStreamingInteractionManager() {
    this->bMoxxiEventHardCooldown = false;
    this->GameInstance = NULL;
    this->StreamingInteractionDirector = NULL;
    this->StreamingEventDispatcher = NULL;
    this->ThumbnailMgr = NULL;
    this->ThumbnailGenerationIdx = -1;
    this->UIGlobals = NULL;
    this->StreamingGlobals = NULL;
    this->TimeBetweenCharacterProfileUpdateSteps = 0.00f;
    this->AddedTimeForUpdateStepsDuringEvents = 0.00f;
    this->MaxInventoryItemsPerUpdate = 0;
    this->CharacterProfileUpdateTimer = 0.00f;
    this->bIncreasedChanceForSubscribers = true;
    this->UpdateID = 0;
    this->InventoryUpdateID = 0;
    this->SkillTreeUpdateID = 0;
}

