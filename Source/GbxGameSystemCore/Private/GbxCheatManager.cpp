#include "GbxCheatManager.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UGbxCheatManager::TestGameStage(int32 GameStageOverride) {
}

void UGbxCheatManager::StartPlayerInit() {
}

void UGbxCheatManager::ShowProjectileImpacts(float Size, float LifeTime) {
}

void UGbxCheatManager::SetDebugActorByName(const FString& ActorName) {
}

void UGbxCheatManager::SetDebugActor(AActor* Actor, int32 ControllerIndex) {
}

void UGbxCheatManager::Server_TogglePlayersOnly_Implementation() {
}
bool UGbxCheatManager::Server_TogglePlayersOnly_Validate() {
    return true;
}

void UGbxCheatManager::Server_DamageTarget_Implementation(float DamageAmount) {
}
bool UGbxCheatManager::Server_DamageTarget_Validate(float DamageAmount) {
    return true;
}

void UGbxCheatManager::PlayFeedbackRangedFromThere(const FString& FeedbackData) {
}

void UGbxCheatManager::PlayFeedbackDirectional(const FString& FeedbackData, float DirectionAngle) {
}

void UGbxCheatManager::PlayFeedback(const FString& FeedbackData, float Scale) {
}

void UGbxCheatManager::LogQatalystInfo() const {
}

void UGbxCheatManager::DebugNextAI() {
}

void UGbxCheatManager::DamageAreaDebug() const {
}

void UGbxCheatManager::ClearPlayerInit() {
}

void UGbxCheatManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGbxCheatManager, bHLQNoClipActive);
}

UGbxCheatManager::UGbxCheatManager() {
    this->bHLQNoClipActive = false;
}

