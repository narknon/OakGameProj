#include "OakGameState.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class UObject;
class AOakCharacter;
class UMission;
class UGameStatData;

void AOakGameState::StaticUnregisterGlobalScreenParticle(UObject* WorldContextObject, FName Tag) {
}

void AOakGameState::StaticRegisterGlobalScreenParticle(UObject* WorldContextObject, FGlobalScreenParticleData ScreenParticle) {
}

void AOakGameState::SetMapTravelIDs(UObject* WorldContextObject, uint8 ZoneNameID, uint8 MapNameID, float MinWaitTime, FLatentActionInfo LatentInfo) {
}

void AOakGameState::RemoveNameTaggedCharacter(AOakCharacter* CharacterToRemove) {
}

void AOakGameState::OnRep_StartGameTimer() {
}

void AOakGameState::OnRep_ServerSkippedIntroMovie() {
}

void AOakGameState::OnRep_ServerMapLoadComplete() {
}

void AOakGameState::OnRep_SecondsBeforeShopsReset() {
}

void AOakGameState::OnRep_MicropatchSwitches(uint32 OldMicropatchSwitches) {
}

void AOakGameState::OnRep_MayhemModeState() {
}

void AOakGameState::OnRep_LastTraveledMapID() {
}

void AOakGameState::OnRep_EffectiveExpSyncLevel() {
}

void AOakGameState::OnRep_CurrentTutorialMessages() {
}

void AOakGameState::OnRep_CurrentHUDState() {
}

void AOakGameState::OnRep_BossBarData() {
}

void AOakGameState::OnRep_ActiveLeague() {
}

TArray<AOakCharacter*> AOakGameState::GetNameTaggedCharacters() const {
    return TArray<AOakCharacter*>();
}

bool AOakGameState::GetCurrentTravelIDs(UObject* WorldContextObject, FMapIDData& OutTravelIDs) {
    return false;
}

void AOakGameState::ClientMatchmakingStateChanged_Implementation(EMatchmakingState MatchmakingState) {
}

void AOakGameState::ClientMatchmakingBackup_Implementation() {
}

void AOakGameState::ClientBroadcastKilledEnemyFriendEvent_Implementation(EKilledEnemyFriendEventType KilledEnemyFriendEventType, uint32 EnemyUINameHash) {
}

void AOakGameState::ClientBroadcastFriendEvent_PropagateRareSpawnMission_Implementation(UObject* WorldContextObject, TSubclassOf<UMission> MissionClass, UGameStatData* StatData) {
}

void AOakGameState::ClearNameTaggedCharacters() {
}

void AOakGameState::BreakMapIDData(FMapIDData InMapIDData, uint8& ZoneNameID, uint8& MapNameID) {
}

void AOakGameState::AddNameTaggedCharacter(AOakCharacter* CharacterToAdd) {
}

void AOakGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOakGameState, MissionTracker);
    DOREPLIFETIME(AOakGameState, TravelStationTracker);
    DOREPLIFETIME(AOakGameState, DuelManager);
    DOREPLIFETIME(AOakGameState, ModifierManager);
    DOREPLIFETIME(AOakGameState, BossBarData);
    DOREPLIFETIME(AOakGameState, StartGameState);
    DOREPLIFETIME(AOakGameState, StartGameTimer);
    DOREPLIFETIME(AOakGameState, bServerMapLoadComplete);
    DOREPLIFETIME(AOakGameState, MayhemModeState);
    DOREPLIFETIME(AOakGameState, bSyncDamageToExpSyncLevel);
    DOREPLIFETIME(AOakGameState, MultiplayerLootMode);
    DOREPLIFETIME(AOakGameState, bPreventDestroyedItemsToLostLoot);
    DOREPLIFETIME(AOakGameState, CurrentGroupMode);
    DOREPLIFETIME(AOakGameState, EffectivePlayerCountData);
    DOREPLIFETIME(AOakGameState, EffectiveExpSyncLevel);
    DOREPLIFETIME(AOakGameState, ReplicatedSecondsBeforeShopsReset);
    DOREPLIFETIME(AOakGameState, CurrentHUDState);
    DOREPLIFETIME(AOakGameState, bServerSkippedIntroMovie);
    DOREPLIFETIME(AOakGameState, bServerFinishedRockNRollIntro);
    DOREPLIFETIME(AOakGameState, ActiveLeague);
    DOREPLIFETIME(AOakGameState, ActiveLeagueInstance);
    DOREPLIFETIME(AOakGameState, CurrentPlayThrough);
    DOREPLIFETIME(AOakGameState, PlayerTargetingActors);
    DOREPLIFETIME(AOakGameState, bInfiniteAmmo);
    DOREPLIFETIME(AOakGameState, PlayerGlobalInputLocks);
    DOREPLIFETIME(AOakGameState, NameTaggedCharacters);
    DOREPLIFETIME(AOakGameState, CurrentTutorialMessages);
    DOREPLIFETIME(AOakGameState, LastTraveledMapID);
    DOREPLIFETIME(AOakGameState, bClientJoining);
    DOREPLIFETIME(AOakGameState, MicropatchSwitches);
}

AOakGameState::AOakGameState() {
    this->MissionTracker = NULL;
    this->TravelStationTracker = NULL;
    this->DuelManager = NULL;
    this->ModifierManager = NULL;
    this->MusicProvider = NULL;
    this->ElementalInteractionManager = NULL;
    this->StartGameState = ENewGameState::None;
    this->StartGameTimer = 0;
    this->bServerMapLoadComplete = false;
    this->bForceDisableLevelSync = false;
    this->bSyncDamageToExpSyncLevel = false;
    this->MultiplayerLootMode = EMultiplayerLootMode::Standard;
    this->bPreventDestroyedItemsToLostLoot = false;
    this->CurrentGroupMode = EOakGameStateUIGroupMode::Cooperation;
    this->InventoryShopResetPeriod = 1200.00f;
    this->EffectiveExpSyncLevel = 0;
    this->ReplicatedSecondsBeforeShopsReset = -1.00f;
    this->LocalSecondsBeforeShopsReset = -1.00f;
    this->CurrentHUDState = NULL;
    this->bServerSkippedIntroMovie = false;
    this->bServerFinishedRockNRollIntro = false;
    this->ActiveLeague = OL_None;
    this->ActiveLeagueInstance = 0;
    this->CurrentPlayThrough = 1;
    this->bInfiniteAmmo = false;
    this->bPlayerWeaponsRestricted = false;
    this->PlayerGlobalInputLocks = 0;
    this->CleanupPickupTriggerCount = 400;
    this->CleanupPickupRemainderCount = 350;
    this->CachedNumProjectilesForQuickPop = 0;
    this->bClientJoining = false;
    this->MicropatchSwitches = 0;
}

