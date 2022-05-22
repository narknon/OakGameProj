#include "OakBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

class UObject;
class AActor;
class UEchoLogData;
class UStaticMesh;
class APlayerController;
class UViewAttachmentComponent;
class ADroppedInventoryItemPickup;
class ULootSpawnPatternData;
class UItemPoolListInterface;
class UInventoryBalanceStateComponent;
class ASpawner;
class UInventoryGenericPartData;
class UAIAction;
class UGbxDialogComponent;
class AOakCharacter_Player;
class UItemPoolData;
class UAttributeInitializer;
class UZoneMapData;
class AOakTravelStationTracker;
class UOakDialogBlackboard;
class APawn;
class UGameStatData;
class AOakPlayerController;
class UOakNavComponent;
class USceneComponent;

void UOakBlueprintLibrary::UnregisterModifier(UObject* WorldContextObject, const FString& ModifierName) {
}

void UOakBlueprintLibrary::UnregisterAllModifiers(UObject* WorldContextObject) {
}

void UOakBlueprintLibrary::UnlockPhotoMode(AActor* Actor, FName Reason) {
}

void UOakBlueprintLibrary::UnlockEchoLogForAllPlayers(UObject* WorldContextObject, UEchoLogData* EchoLog) {
}

void UOakBlueprintLibrary::StartCameraFadeAuthoritative(APlayerController* PlayerController, float FromAlpha, float ToAlpha, float Duration, FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished) {
}

ADroppedInventoryItemPickup* UOakBlueprintLibrary::SpawnPickupFromClass(AActor* ContextActor, TSubclassOf<ADroppedInventoryItemPickup> PickupClass, FName SocketName, const ULootSpawnPatternData* SpawnPattern, bool bAttachPickup) {
    return NULL;
}

int32 UOakBlueprintLibrary::SpawnLootAsync(AActor* ContextActor, FSpawnDroppedPickupLootRequest Request) {
    return 0;
}

void UOakBlueprintLibrary::SpawnLoot(AActor* ContextActor, UItemPoolListInterface* ItemPools, FName SocketName, const ULootSpawnPatternData* SpawnPattern, TArray<ADroppedInventoryItemPickup*>& AllDroppedPickups, float TimeToSpawnLootOver, bool AttachLoot) {
}

void UOakBlueprintLibrary::SetTickableWhenPausedOnHierarchy(AActor* RootActor, bool bTickWhenPaused) {
}

void UOakBlueprintLibrary::SetTerritory(AActor* AIActor, AActor* TerritoryActor) {
}

void UOakBlueprintLibrary::SetHandIkToSocket(AActor* Actor, bool bLeftHandWorld, bool bRightHandWorld, FName LeftHandSocket, FName RightHandSocket) {
}

void UOakBlueprintLibrary::SetEnableTrueTrialsEvent(UObject* WorldContextObject, bool bSetEnabled) {
}

void UOakBlueprintLibrary::SetCoordinatedEffectSwitchState(AActor* Actor, uint8 State) {
}

void UOakBlueprintLibrary::SetCoordinatedEffectSwitch(AActor* Actor, FName State) {
}

void UOakBlueprintLibrary::SetAnimationStyle(AActor* Actor, uint8 NewStyle) {
}

void UOakBlueprintLibrary::ResourceUnlockWeaponsRestricted(AActor* Actor, FName Reason) {
}

void UOakBlueprintLibrary::ResourceUnlockSprinting(AActor* Actor, FName Reason) {
}

void UOakBlueprintLibrary::ResourceUnlockPlayerInfiniteAmmo(AActor* Actor, FName Reason) {
}

void UOakBlueprintLibrary::ResourceUnlockPlayerGrenadeThrow(AActor* Actor, FName Reason) {
}

void UOakBlueprintLibrary::ResourceUnlockMelee(AActor* Actor, FName Reason) {
}

void UOakBlueprintLibrary::ResourceUnlockForcedSlide(AActor* Actor, FName Reason) {
}

void UOakBlueprintLibrary::ResourceUnlockAllPlayersWeaponsRestricted(UObject* WorldContextObject, FName Reason) {
}

void UOakBlueprintLibrary::ResourceUnlockAllPlayersInfiniteAmmo(UObject* WorldContextObject, FName Reason) {
}

void UOakBlueprintLibrary::ResourceLockWeaponsRestricted(AActor* Actor, FName Reason) {
}

void UOakBlueprintLibrary::ResourceLockSprinting(AActor* Actor, FName Reason) {
}

void UOakBlueprintLibrary::ResourceLockPlayerInfiniteAmmo(AActor* Actor, FName Reason) {
}

void UOakBlueprintLibrary::ResourceLockPlayerGrenadeThrow(AActor* Actor, FName Reason) {
}

void UOakBlueprintLibrary::ResourceLockMelee(AActor* Actor, FName Reason) {
}

void UOakBlueprintLibrary::ResourceLockForcedSlide(AActor* Actor, FName Reason) {
}

void UOakBlueprintLibrary::ResourceLockAllPlayersWeaponsRestricted(UObject* WorldContextObject, FName Reason) {
}

void UOakBlueprintLibrary::ResourceLockAllPlayersInfiniteAmmo(UObject* WorldContextObject, FName Reason) {
}

UObject* UOakBlueprintLibrary::ResolveObjectFromPathString(const FString& ObjectPathString) {
    return NULL;
}

void UOakBlueprintLibrary::ResetTerritory(AActor* AIActor) {
}

AActor* UOakBlueprintLibrary::ReRollInventoryGenericParts(UInventoryBalanceStateComponent* InventoryBalanceState, const TArray<UInventoryGenericPartData*>& PreferredGenericParts) {
    return NULL;
}

void UOakBlueprintLibrary::ReplaceDefaultAITree(AActor* Target, TSubclassOf<UAIAction> AIAction) {
}

void UOakBlueprintLibrary::RemoveGlobalPlayerDemiGodLock(UObject* WorldContextObject, FName Reason) {
}

void UOakBlueprintLibrary::RemoveGlobalInputLock(UObject* WorldContextObject, EPlayerInputLockType InputLockType, FName Reason) {
}

void UOakBlueprintLibrary::RegisterModifier(UObject* WorldContextObject, const FString& ModifierName, const FOakModifierData& ModifierData) {
}

void UOakBlueprintLibrary::RegisterCustomModifier(UObject* WorldContextObject, const FString& ModifierName, const FString& TargetResolverName, const FString& StatusEffectName, const float Value) {
}

void UOakBlueprintLibrary::PlayEchoDialogForAllPlayers(UObject* WorldContextObject, UEchoLogData* EchoLog, UGbxDialogComponent* PlayOnSpeaker) {
}

void UOakBlueprintLibrary::LockPhotoMode(AActor* Actor, FName Reason) {
}

bool UOakBlueprintLibrary::IsSpawner(AActor* Spawner) {
    return false;
}

bool UOakBlueprintLibrary::IsPointInPlayerViewFrustum(APlayerController* PlayerController, FVector Point) {
    return false;
}

bool UOakBlueprintLibrary::IsInventoryFromLeague(UInventoryBalanceStateComponent* Inventory, TEnumAsByte<EOakLeague> RequiredLeague, bool bIncludeParts) {
    return false;
}

bool UOakBlueprintLibrary::IsHealthy(AActor* Actor) {
    return false;
}

bool UOakBlueprintLibrary::IsGameUsingInstancedLoot(UObject* WorldContextObject) {
    return false;
}

bool UOakBlueprintLibrary::IsAlive(AActor* Actor) {
    return false;
}

void UOakBlueprintLibrary::InstaKillAllPlayerCharacters(UObject* WorldContextObject, FVector SourceLocation, float Range) {
}

void UOakBlueprintLibrary::InitializeNonAugmentBoosterPickup(ADroppedInventoryItemPickup* Pickup, float ShieldChargeModifierValue, AActor* ManagedActorOwner) {
}

void UOakBlueprintLibrary::GiveRewardItem(AOakCharacter_Player* OakPlayer, AActor* ContextActor, UItemPoolData* ItemPool, TSubclassOf<UAttributeInitializer> LootGameStageVarianceFormula) {
}

UZoneMapData* UOakBlueprintLibrary::GetZoneMapForLevel(const FString& LevelName, UObject* WorldContextObject) {
    return NULL;
}

AOakTravelStationTracker* UOakBlueprintLibrary::GetTravelStationTracker(UObject* WorldContextObject) {
    return NULL;
}

AOakCharacter_Player* UOakBlueprintLibrary::GetRandomPlayerCharacter(UObject* WorldContextObject) {
    return NULL;
}

bool UOakBlueprintLibrary::GetPlayerShieldInfo(APlayerController* Controller, FHealthType& OutHealthType) {
    return false;
}

void UOakBlueprintLibrary::GetKnownZoneMapDisplayList(TArray<FZoneMapDisplayInfo>& DisplayList, UObject* WorldContextObject) {
}

bool UOakBlueprintLibrary::GetEffectiveLevelDifference(AActor* ActorA, AActor* ActorB, bool bIncludeLevelSync, int32& OutLevelDifference) {
    return false;
}

UOakDialogBlackboard* UOakBlueprintLibrary::GetDialogBlackboard(UObject* WorldContextObject) {
    return NULL;
}

uint8 UOakBlueprintLibrary::GetCoordinatedEffectSwitchState(AActor* Actor) {
    return 0;
}

TEnumAsByte<ETeamAttitude::Type> UOakBlueprintLibrary::GetAttitudeTowardPlayer(AActor* SourceActor) {
    return ETeamAttitude::Friendly;
}

TEnumAsByte<ETeamAttitude::Type> UOakBlueprintLibrary::GetAttitudeTowardActor(AActor* SourceActor, AActor* TargetActor) {
    return ETeamAttitude::Friendly;
}

ASpawner* UOakBlueprintLibrary::GetAssociatedSpawner(AActor* Target) {
    return NULL;
}

uint8 UOakBlueprintLibrary::GetAnimationStyle(AActor* Actor) {
    return 0;
}

void UOakBlueprintLibrary::GetAllPlayerPawns(UObject* WorldContextObject, TArray<APawn*>& Pawns) {
}

void UOakBlueprintLibrary::GetAllPlayerCharacters(UObject* WorldContextObject, bool bLocalOnly, TArray<AOakCharacter_Player*>& Characters) {
}

FProjectedMeshResults UOakBlueprintLibrary::GenerateProjectedMesh(AActor* Actor, const FTransform ProjectionTransform, const FTransform ComponentTransform, const FProjectedMeshOptions& Options) {
    return FProjectedMeshResults{};
}

UOakNavComponent* UOakBlueprintLibrary::FindOakNavComponent(AActor* Actor) {
    return NULL;
}

AOakCharacter_Player* UOakBlueprintLibrary::FindNearestPlayerCharacters(UObject* WorldContextObject, const FVector& Location) {
    return NULL;
}

AActor* UOakBlueprintLibrary::FindNearestActorSpawnedBy(const FVector& SourceLocation, AActor* Spawner) {
    return NULL;
}

AOakCharacter_Player* UOakBlueprintLibrary::FindFarthestPlayerCharacters(UObject* WorldContextObject, const FVector& Location) {
    return NULL;
}

void UOakBlueprintLibrary::EnterVehicle(AActor* Actor, AActor* Vehicle, int32 SeatIndex, bool bInstant) {
}

void UOakBlueprintLibrary::DetachProjectedShield(USceneComponent* Component) {
}

void UOakBlueprintLibrary::DestroyProjectedShield(USceneComponent* Component) {
}

void UOakBlueprintLibrary::DeactivateAllModifiers(UObject* WorldContextObject) {
}

UViewAttachmentComponent* UOakBlueprintLibrary::CreateViewAttachmentComponent(AActor* Owner, bool bUpdateLocation, bool bUpdateRotation, float PitchScale) {
    return NULL;
}

FOakProjectedShield UOakBlueprintLibrary::CreateProjectedShield(AActor* Owner, USceneComponent* OwnerComponent, UStaticMesh* Mesh, FName CollisionProfile, FTransform MeshRelativeTransform, FTransform ParticleSystemTransform) {
    return FOakProjectedShield{};
}

void UOakBlueprintLibrary::CancelCameraFadeAuthoritative(APlayerController* PlayerController) {
}

void UOakBlueprintLibrary::CancelAsyncLootSpawnRequest(UObject* WorldContextObject, int32 RequestID) {
}

bool UOakBlueprintLibrary::BuildPathTo(TArray<FVector>& OutPoints, AActor* Actor, const FVector& Destination, float SearchRadius, float AgentRadiusOverride) {
    return false;
}

bool UOakBlueprintLibrary::BuildPath(TArray<FVector>& OutPoints, AActor* Actor, const FVector& Start, const FVector& Destination, float SearchRadius, float AgentRadiusOverride) {
    return false;
}

void UOakBlueprintLibrary::BroadcastKilledEnemyFriendEvent(AActor* KilledActor, EKilledEnemyFriendEventType KilledEnemyFriendEventType, UGameStatData* KillStat, int32 KillCount) {
}

void UOakBlueprintLibrary::AwardKillExperienceToParty(AActor* ContextActor, AOakPlayerController* OptionalKiller) {
}

void UOakBlueprintLibrary::AttachProjectedShield(USceneComponent* Component, AActor* Owner, FName AttachSocket) {
}

bool UOakBlueprintLibrary::AreAllPlayerInRangeLookingAtActor(AActor* LookAtTarget, float MaxRange, float ConeAngle) {
    return false;
}

void UOakBlueprintLibrary::AddGlobalPlayerDemiGodLock(UObject* WorldContextObject, FName Reason) {
}

void UOakBlueprintLibrary::AddGlobalInputLock(UObject* WorldContextObject, EPlayerInputLockType InputLockType, FName Reason) {
}

void UOakBlueprintLibrary::ActivateAllModifiers(UObject* WorldContextObject) {
}

UOakBlueprintLibrary::UOakBlueprintLibrary() {
}

