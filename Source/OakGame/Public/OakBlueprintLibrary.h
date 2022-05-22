#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ProjectedMeshOptions.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EKilledEnemyFriendEventType.h"
#include "SpawnDroppedPickupLootRequest.h"
#include "HealthType.h"
#include "EPlayerInputLockType.h"
#include "OakModifierData.h"
#include "EOakLeague.h"
#include "ZoneMapDisplayInfo.h"
#include "GenericTeamAgentInterface.h"
#include "ProjectedMeshResults.h"
#include "OakProjectedShield.h"
#include "UObject/NoExportTypes.h"
#include "OakBlueprintLibrary.generated.h"

class ULootSpawnPatternData;
class UInventoryBalanceStateComponent;
class UObject;
class AActor;
class UEchoLogData;
class UStaticMesh;
class APlayerController;
class UViewAttachmentComponent;
class ADroppedInventoryItemPickup;
class UItemPoolListInterface;
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
class AOakPlayerController;
class UGameStatData;
class UOakNavComponent;
class USceneComponent;

UCLASS(BlueprintType)
class OAKGAME_API UOakBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOakBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void UnregisterModifier(UObject* WorldContextObject, const FString& ModifierName);
    
    UFUNCTION(BlueprintCallable)
    static void UnregisterAllModifiers(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void UnlockPhotoMode(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void UnlockEchoLogForAllPlayers(UObject* WorldContextObject, UEchoLogData* EchoLog);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void StartCameraFadeAuthoritative(APlayerController* PlayerController, float FromAlpha, float ToAlpha, float Duration, FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static ADroppedInventoryItemPickup* SpawnPickupFromClass(AActor* ContextActor, TSubclassOf<ADroppedInventoryItemPickup> PickupClass, FName SocketName, const ULootSpawnPatternData* SpawnPattern, bool bAttachPickup);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static int32 SpawnLootAsync(AActor* ContextActor, FSpawnDroppedPickupLootRequest Request);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SpawnLoot(AActor* ContextActor, UItemPoolListInterface* ItemPools, FName SocketName, const ULootSpawnPatternData* SpawnPattern, TArray<ADroppedInventoryItemPickup*>& AllDroppedPickups, float TimeToSpawnLootOver, bool AttachLoot);
    
    UFUNCTION(BlueprintCallable)
    static void SetTickableWhenPausedOnHierarchy(AActor* RootActor, bool bTickWhenPaused);
    
    UFUNCTION(BlueprintCallable)
    static void SetTerritory(AActor* AIActor, AActor* TerritoryActor);
    
    UFUNCTION(BlueprintCallable)
    static void SetHandIkToSocket(AActor* Actor, bool bLeftHandWorld, bool bRightHandWorld, FName LeftHandSocket, FName RightHandSocket);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnableTrueTrialsEvent(UObject* WorldContextObject, bool bSetEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetCoordinatedEffectSwitchState(AActor* Actor, uint8 State);
    
    UFUNCTION(BlueprintCallable)
    static void SetCoordinatedEffectSwitch(AActor* Actor, FName State);
    
    UFUNCTION(BlueprintCallable)
    static void SetAnimationStyle(AActor* Actor, uint8 NewStyle);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockWeaponsRestricted(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockSprinting(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockPlayerInfiniteAmmo(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockPlayerGrenadeThrow(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockMelee(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockForcedSlide(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockAllPlayersWeaponsRestricted(UObject* WorldContextObject, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockAllPlayersInfiniteAmmo(UObject* WorldContextObject, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockWeaponsRestricted(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockSprinting(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockPlayerInfiniteAmmo(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockPlayerGrenadeThrow(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockMelee(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockForcedSlide(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockAllPlayersWeaponsRestricted(UObject* WorldContextObject, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockAllPlayersInfiniteAmmo(UObject* WorldContextObject, FName Reason);
    
    UFUNCTION(BlueprintPure)
    static UObject* ResolveObjectFromPathString(const FString& ObjectPathString);
    
    UFUNCTION(BlueprintCallable)
    static void ResetTerritory(AActor* AIActor);
    
    UFUNCTION(BlueprintCallable)
    static AActor* ReRollInventoryGenericParts(UInventoryBalanceStateComponent* InventoryBalanceState, const TArray<UInventoryGenericPartData*>& PreferredGenericParts);
    
    UFUNCTION(BlueprintCallable)
    static void ReplaceDefaultAITree(AActor* Target, TSubclassOf<UAIAction> AIAction);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveGlobalPlayerDemiGodLock(UObject* WorldContextObject, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveGlobalInputLock(UObject* WorldContextObject, EPlayerInputLockType InputLockType, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterModifier(UObject* WorldContextObject, const FString& ModifierName, const FOakModifierData& ModifierData);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterCustomModifier(UObject* WorldContextObject, const FString& ModifierName, const FString& TargetResolverName, const FString& StatusEffectName, const float Value);
    
    UFUNCTION(BlueprintCallable)
    static void PlayEchoDialogForAllPlayers(UObject* WorldContextObject, UEchoLogData* EchoLog, UGbxDialogComponent* PlayOnSpeaker);
    
    UFUNCTION(BlueprintCallable)
    static void LockPhotoMode(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintPure)
    static bool IsSpawner(AActor* Spawner);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPointInPlayerViewFrustum(APlayerController* PlayerController, FVector Point);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInventoryFromLeague(UInventoryBalanceStateComponent* Inventory, TEnumAsByte<EOakLeague> RequiredLeague, bool bIncludeParts);
    
    UFUNCTION(BlueprintPure)
    static bool IsHealthy(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static bool IsGameUsingInstancedLoot(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsAlive(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void InstaKillAllPlayerCharacters(UObject* WorldContextObject, FVector SourceLocation, float Range);
    
    UFUNCTION(BlueprintCallable)
    static void InitializeNonAugmentBoosterPickup(ADroppedInventoryItemPickup* Pickup, float ShieldChargeModifierValue, AActor* ManagedActorOwner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void GiveRewardItem(AOakCharacter_Player* OakPlayer, AActor* ContextActor, UItemPoolData* ItemPool, TSubclassOf<UAttributeInitializer> LootGameStageVarianceFormula);
    
    UFUNCTION(BlueprintCallable)
    static UZoneMapData* GetZoneMapForLevel(const FString& LevelName, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static AOakTravelStationTracker* GetTravelStationTracker(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static AOakCharacter_Player* GetRandomPlayerCharacter(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPlayerShieldInfo(APlayerController* Controller, FHealthType& OutHealthType);
    
    UFUNCTION(BlueprintCallable)
    static void GetKnownZoneMapDisplayList(TArray<FZoneMapDisplayInfo>& DisplayList, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool GetEffectiveLevelDifference(AActor* ActorA, AActor* ActorB, bool bIncludeLevelSync, int32& OutLevelDifference);
    
    UFUNCTION(BlueprintPure)
    static UOakDialogBlackboard* GetDialogBlackboard(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static uint8 GetCoordinatedEffectSwitchState(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static TEnumAsByte<ETeamAttitude::Type> GetAttitudeTowardPlayer(AActor* SourceActor);
    
    UFUNCTION(BlueprintPure)
    static TEnumAsByte<ETeamAttitude::Type> GetAttitudeTowardActor(AActor* SourceActor, AActor* TargetActor);
    
    UFUNCTION(BlueprintPure)
    static ASpawner* GetAssociatedSpawner(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static uint8 GetAnimationStyle(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllPlayerPawns(UObject* WorldContextObject, TArray<APawn*>& Pawns);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllPlayerCharacters(UObject* WorldContextObject, bool bLocalOnly, TArray<AOakCharacter_Player*>& Characters);
    
    UFUNCTION(BlueprintCallable)
    static FProjectedMeshResults GenerateProjectedMesh(AActor* Actor, const FTransform ProjectionTransform, const FTransform ComponentTransform, const FProjectedMeshOptions& Options);
    
    UFUNCTION(BlueprintPure)
    static UOakNavComponent* FindOakNavComponent(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static AOakCharacter_Player* FindNearestPlayerCharacters(UObject* WorldContextObject, const FVector& Location);
    
    UFUNCTION(BlueprintPure)
    static AActor* FindNearestActorSpawnedBy(const FVector& SourceLocation, AActor* Spawner);
    
    UFUNCTION(BlueprintPure)
    static AOakCharacter_Player* FindFarthestPlayerCharacters(UObject* WorldContextObject, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    static void EnterVehicle(AActor* Actor, AActor* Vehicle, int32 SeatIndex, bool bInstant);
    
    UFUNCTION(BlueprintCallable)
    static void DetachProjectedShield(USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyProjectedShield(USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static void DeactivateAllModifiers(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UViewAttachmentComponent* CreateViewAttachmentComponent(AActor* Owner, bool bUpdateLocation, bool bUpdateRotation, float PitchScale);
    
    UFUNCTION(BlueprintCallable)
    static FOakProjectedShield CreateProjectedShield(AActor* Owner, USceneComponent* OwnerComponent, UStaticMesh* Mesh, FName CollisionProfile, FTransform MeshRelativeTransform, FTransform ParticleSystemTransform);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void CancelCameraFadeAuthoritative(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void CancelAsyncLootSpawnRequest(UObject* WorldContextObject, int32 RequestID);
    
    UFUNCTION(BlueprintCallable)
    static bool BuildPathTo(TArray<FVector>& OutPoints, AActor* Actor, const FVector& Destination, float SearchRadius, float AgentRadiusOverride);
    
    UFUNCTION(BlueprintCallable)
    static bool BuildPath(TArray<FVector>& OutPoints, AActor* Actor, const FVector& Start, const FVector& Destination, float SearchRadius, float AgentRadiusOverride);
    
    UFUNCTION(BlueprintCallable)
    static void BroadcastKilledEnemyFriendEvent(AActor* KilledActor, EKilledEnemyFriendEventType KilledEnemyFriendEventType, UGameStatData* KillStat, int32 KillCount);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void AwardKillExperienceToParty(AActor* ContextActor, AOakPlayerController* OptionalKiller);
    
    UFUNCTION(BlueprintCallable)
    static void AttachProjectedShield(USceneComponent* Component, AActor* Owner, FName AttachSocket);
    
    UFUNCTION(BlueprintCallable)
    static bool AreAllPlayerInRangeLookingAtActor(AActor* LookAtTarget, float MaxRange, float ConeAngle);
    
    UFUNCTION(BlueprintCallable)
    static void AddGlobalPlayerDemiGodLock(UObject* WorldContextObject, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void AddGlobalInputLock(UObject* WorldContextObject, EPlayerInputLockType InputLockType, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ActivateAllModifiers(UObject* WorldContextObject);
    
};

