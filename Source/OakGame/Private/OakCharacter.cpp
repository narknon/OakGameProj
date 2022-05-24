#include "OakCharacter.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "OakStatusEffectManagerComponent.h"
#include "WadingEffectsComponent.h"
#include "OakDamageComponent.h"
#include "OakCharacterMovementComponent.h"
#include "GameResourcePoolManagerComponent.h"
#include "OakDamageCauserComponent.h"

class AOakVehicle;
class AWeapon;
class UHealthTypeData;
class UWeaponSlotData;
class AOakCharacter;
class UParticleSystem;
class UInventorySlotData;
class UGbxAction_CoordinatedEffect;
class UOakAIActionComponent;
class UWorld;
class UWeaponTrinketPartData;
class UInventoryCategoryData;
class AActor;
class AInventoryItemPickup;
class UImpactData;
class UWwiseEvent;
class UCharacterSoundTag;
class AOakPlayerController;
class AOakAIController;
class UInventoryListComponent;
class USkeletalMeshComponent;
class UAnimNotify;
class UGameResourcePoolData;
class UItemPoolListData;
class UItemPoolData;

void AOakCharacter::WeaponReloadStarted(AWeapon* Weapon, bool bAuto) {
}

void AOakCharacter::WeaponReloadEnded(AWeapon* Weapon, bool bCompleted) {
}

void AOakCharacter::WeaponPutDown(AWeapon* PutDownWeapon) {
}

void AOakCharacter::WeaponPrev() {
}

void AOakCharacter::WeaponNext() {
}

void AOakCharacter::WeaponEquipped() {
}

bool AOakCharacter::WantsToZoom() const {
    return false;
}

bool AOakCharacter::WantsToUseWeapon(UWeaponSlotData* Slot) const {
    return false;
}

void AOakCharacter::UpdatePreToggleWeaponMode() {
}

void AOakCharacter::UnlockActiveWeaponActions(FName Reason, int32 ChannelsMask, bool bReplicate) {
}

void AOakCharacter::TryDetachFromAttachSlot(bool bInstant) {
}

void AOakCharacter::TriggerResurrectEvent_Implementation(int32 CashLost) {
}

void AOakCharacter::ToggleWeaponMode() {
}

void AOakCharacter::ToggleFirstPersonClothSimulation(bool TurnOn) {
}

void AOakCharacter::ToggleCrouch() {
}

void AOakCharacter::TeleportPawnAndAssociatedVehicle_Implementation(FVector StartLoc, FRotator StartRot, bool bDisableClientCameraUpdates, bool bIsFastTravel) {
}

void AOakCharacter::StopZooming(bool bForcedStop, bool bSkipTransitions) {
}

void AOakCharacter::StopWantingToStartSprinting() {
}

void AOakCharacter::StopUsingWeapon(UWeaponSlotData* SlotToUse) {
}

void AOakCharacter::StopReload(UWeaponSlotData* SlotToUse) {
}

void AOakCharacter::StartZooming() {
}

void AOakCharacter::StartUsingWeapon(UWeaponSlotData* SlotToUse) {
}

AWeapon* AOakCharacter::SpawnDefaultWeapon_Implementation() {
    return NULL;
}

void AOakCharacter::SetWantsToSprint(bool bNewWantsToSprint) {
}

void AOakCharacter::SetWantsToSlide(bool bNewWantsToSlide) {
}

void AOakCharacter::SetInventoryProxy(AOakCharacter* Proxy) {
}

void AOakCharacter::SetDead(EDeathType InDeathType) {
}

void AOakCharacter::SetCurrentWeapon(AWeapon* NewWeapon, UWeaponSlotData* NewWeaponSlot, EWeaponPutDownType PutDownType, EWeaponEquipType EquipType) {
}

void AOakCharacter::SetCurrentEquippedWeapon(UInventorySlotData* EquippedInventorySlot, UWeaponSlotData* NewWeaponSlot, EWeaponPutDownType PutDownType, EWeaponEquipType EquipType) {
}

void AOakCharacter::SetCorpseRemovalOverride(float RemovelTime, TSubclassOf<UGbxAction_CoordinatedEffect> DissolveAction) {
}

void AOakCharacter::SetCharacterRooted(bool bRooted, FName Reason) {
}

void AOakCharacter::SetCARVehicle(AOakVehicle* Vehicle) {
}

void AOakCharacter::ServerUnlockActiveWeaponActions_Implementation(FName Reason, int32 ChannelsMask) {
}
bool AOakCharacter::ServerUnlockActiveWeaponActions_Validate(FName Reason, int32 ChannelsMask) {
    return true;
}

void AOakCharacter::ServerUnequipInventorySlot_Implementation(const UInventorySlotData* SlotToEquip) {
}
bool AOakCharacter::ServerUnequipInventorySlot_Validate(const UInventorySlotData* SlotToEquip) {
    return true;
}

void AOakCharacter::ServerStopWeaponActions_Implementation(uint8 Slot, int32 ChannelsMask, bool bClearInput) {
}
bool AOakCharacter::ServerStopWeaponActions_Validate(uint8 Slot, int32 ChannelsMask, bool bClearInput) {
    return true;
}

void AOakCharacter::ServerSpawnDroppedPickup_Implementation(const FSelectedInventoryInfo& SelectedInventoryInfo, UWorld* World, const FVector& Location, const FVector& LinearVelocity, const FVector& AngularVelocity) {
}
bool AOakCharacter::ServerSpawnDroppedPickup_Validate(const FSelectedInventoryInfo& SelectedInventoryInfo, UWorld* World, const FVector& Location, const FVector& LinearVelocity, const FVector& AngularVelocity) {
    return true;
}

void AOakCharacter::ServerSetEquippedTrinket_Implementation(UInventorySlotData* SlotToEquip, UWeaponTrinketPartData* Trinket) {
}
bool AOakCharacter::ServerSetEquippedTrinket_Validate(UInventorySlotData* SlotToEquip, UWeaponTrinketPartData* Trinket) {
    return true;
}

void AOakCharacter::ServerSetCurrentWeapon_Implementation(AWeapon* NewWeapon, uint8 Slot, EWeaponPutDownType PutDownType, EWeaponEquipType EquipType) {
}
bool AOakCharacter::ServerSetCurrentWeapon_Validate(AWeapon* NewWeapon, uint8 Slot, EWeaponPutDownType PutDownType, EWeaponEquipType EquipType) {
    return true;
}

void AOakCharacter::ServerSelectInventoryItem_Implementation(const UInventoryCategoryData* SelectedCategory, const FInventoryListEntryHandle& SelectedHandle) {
}
bool AOakCharacter::ServerSelectInventoryItem_Validate(const UInventoryCategoryData* SelectedCategory, const FInventoryListEntryHandle& SelectedHandle) {
    return true;
}

void AOakCharacter::ServerLockActiveWeaponActions_Implementation(FName Reason, int32 ChannelsMask, bool bStopActions, bool bClearInput) {
}
bool AOakCharacter::ServerLockActiveWeaponActions_Validate(FName Reason, int32 ChannelsMask, bool bStopActions, bool bClearInput) {
    return true;
}

void AOakCharacter::ServerEquipInventorySlot_Implementation(const UInventorySlotData* SlotToEquip, const FInventoryListEntryHandle& SelectedHandle, bool bSwapSlots) {
}
bool AOakCharacter::ServerEquipInventorySlot_Validate(const UInventorySlotData* SlotToEquip, const FInventoryListEntryHandle& SelectedHandle, bool bSwapSlots) {
    return true;
}

void AOakCharacter::SafeRemoveCorpse() {
}

void AOakCharacter::ResetCharacterInventory() {
}

void AOakCharacter::ReplaceInventoryItem_Implementation(AActor* OldInventoryItem, AActor* NewInventoryItem) {
}
bool AOakCharacter::ReplaceInventoryItem_Validate(AActor* OldInventoryItem, AActor* NewInventoryItem) {
    return true;
}

void AOakCharacter::RemovingFromInventory(const UInventoryCategoryData* RemovedCategory, AActor* RemovedActor, const FInventoryListEntryHandle& RemovedHandle) {
}

void AOakCharacter::RemoveInWorldIcon(const FHUDInWorldIconTargetInfo& TargetInfo) {
}

void AOakCharacter::RemoveInventoryItem(const FInventoryListEntryHandle& SelectedHandle) {
}

void AOakCharacter::RemoveHealthTypeAtIndex(int32 Index, FHealthType& ReturnType) {
}

void AOakCharacter::Reload(UWeaponSlotData* SlotToUse, bool bAutoReload) {
}

void AOakCharacter::RebuildInventory() {
}

bool AOakCharacter::PreInventoryItemPickupCheck_Implementation(AActor* PickupActor, int32 Quantity, bool UsedByInstigator, AInventoryItemPickup* WorldPickupActor) {
    return false;
}

void AOakCharacter::PreAddToFullInventory(const UInventoryCategoryData* Category, AActor* NewActor, int32 Flags, int32 DesiredSlot) {
}

void AOakCharacter::PerformMeleeImpact(float MeleeRange, UImpactData* ImpactData) {
}

void AOakCharacter::OnZoomedNotifyActions(EZoomEventType IsZooming) {
}

void AOakCharacter::OnWeaponResumeUse(UWeaponSlotData* AttachedSlot) {
}

void AOakCharacter::OnTrinketUnequippedFromSlot(UWeaponTrinketPartData* InUnequippedTrinket, UInventorySlotData* SlotData) {
}

void AOakCharacter::OnTrinketEquippedOnSlot(UWeaponTrinketPartData* InEquippedTrinket, UInventorySlotData* SlotData) {
}

void AOakCharacter::OnStartSprinting() {
}

void AOakCharacter::OnRep_OverrideVisibleCorpseRemovalTime() {
}

void AOakCharacter::OnRep_Mech() {
}

void AOakCharacter::OnRep_HolsteredWeapon() {
}

void AOakCharacter::OnRep_HealthState() {
}

void AOakCharacter::OnRep_DeadRagdollReplicationData() {
}

void AOakCharacter::OnRep_Customization() {
}

void AOakCharacter::OnRep_CoordinatedEffectSwitch() {
}

void AOakCharacter::OnRecentlyEquippedWeaponInSprintTimerEnd() {
}

void AOakCharacter::OnInventoryUnequippedFromSlot(AActor* InUnequippedInventory, UInventorySlotData* SlotData) {
}

void AOakCharacter::OnInventoryItemReplaced(const FInventoryListEntryHandle& UpdatedItemHandle, AActor* OldInventoryActor) {
}

void AOakCharacter::OnInventoryEquippedOnSlot(AActor* InEquippedInventory, UInventorySlotData* SlotData) {
}

void AOakCharacter::OnFirstPersonCreated(bool bCreatedArms) {
}

void AOakCharacter::OnEndSprinting() {
}

void AOakCharacter::OnDodged(EAIDodgeType DodgeType) {
}

void AOakCharacter::OnCryoThawing() {
}

void AOakCharacter::OnCryoFreezing() {
}

void AOakCharacter::OnCharacterTransported(bool bTransportStarted) {
}

void AOakCharacter::OnAIUncloaked() {
}

void AOakCharacter::OnAICloaked() {
}

void AOakCharacter::NetMulticast_BroadcastPickedUpShieldBoost_Implementation(UWwiseEvent* PickupAudioEvent, UParticleSystem* ScreenEffect, float ModifierDuration) {
}

void AOakCharacter::NetMulticast_BroadcastCharacterSoundTag_Implementation(const UCharacterSoundTag* Tag) {
}

void AOakCharacter::LockActiveWeaponActions(FName Reason, int32 ChannelsMask, bool bStopActions, bool bClearInput, bool bReplicate) {
}

bool AOakCharacter::K2_CanWeaponZoom_Implementation() const {
    return false;
}

bool AOakCharacter::K2_CanPerformWeaponAction_Implementation(EWeaponActionChannel Channel) const {
    return false;
}

bool AOakCharacter::IsUsingWeapon(UWeaponSlotData* Slot) const {
    return false;
}

bool AOakCharacter::IsSprinting() const {
    return false;
}

bool AOakCharacter::IsSlotOpenInventoryCategory(UInventoryCategoryData* PickupCategory) {
    return false;
}

bool AOakCharacter::IsSlotEnabledForInventoryCategory(UInventoryCategoryData* PickupCategory) {
    return false;
}

bool AOakCharacter::IsShowingCrosshair(uint8 Slot) const {
    return false;
}

bool AOakCharacter::IsPerformingGroundSlam() const {
    return false;
}

bool AOakCharacter::IsLeaping() const {
    return false;
}

bool AOakCharacter::IsInventoryItemEquipped(AActor* InventoryItem) {
    return false;
}

bool AOakCharacter::IsFrozenToDeath() const {
    return false;
}

bool AOakCharacter::IsEquippingWeapon(UWeaponSlotData* SlotToUse) const {
    return false;
}

bool AOakCharacter::IsEchoDeviceActive() const {
    return false;
}

bool AOakCharacter::IsCharacterSliding() const {
    return false;
}

bool AOakCharacter::IsCharacterRooted() const {
    return false;
}

bool AOakCharacter::IsAttachedToSlot() {
    return false;
}

bool AOakCharacter::IsAttachedToSeat() const {
    return false;
}

bool AOakCharacter::IsAttached() const {
    return false;
}

bool AOakCharacter::HasShieldEquipped() {
    return false;
}

bool AOakCharacter::HasRecentlyEquippedWeaponInSprint() const {
    return false;
}

bool AOakCharacter::HasInfiniteAmmo() const {
    return false;
}

bool AOakCharacter::HasHealthOfType(UHealthTypeData* HealthTypeToFind) {
    return false;
}

void AOakCharacter::GoFromInjuredToHealed(AOakPlayerController* HealedByPlayer) {
}

void AOakCharacter::GoFromInjuredToDead() {
}

void AOakCharacter::GoFromDeadToHealed() {
}

bool AOakCharacter::GetZoomToggle() const {
    return false;
}

FRotator AOakCharacter::GetWeaponOffsetRotation() const {
    return FRotator{};
}

FVector AOakCharacter::GetWeaponOffsetLocation() const {
    return FVector{};
}

AWeapon* AOakCharacter::GetWeapon(UWeaponSlotData* SlotToGet) const {
    return NULL;
}

bool AOakCharacter::GetWantsToSprint() const {
    return false;
}

bool AOakCharacter::GetWantsToCrouch() const {
    return false;
}

FRotator AOakCharacter::GetViewModelOffsetRotation(int32 Index) const {
    return FRotator{};
}

FVector AOakCharacter::GetViewModelOffsetLocation(int32 Index) const {
    return FVector{};
}

AOakVehicle* AOakCharacter::GetVehicle() const {
    return NULL;
}

AOakVehicle* AOakCharacter::GetOwnedVehicle() const {
    return NULL;
}

AOakAIController* AOakCharacter::GetOakAIController() const {
    return NULL;
}

FVector AOakCharacter::GetMovementDirection(const TEnumAsByte<EAxis::Type> AXIS) const {
    return FVector{};
}

UInventoryListComponent* AOakCharacter::GetInventoryComponent() const {
    return NULL;
}

FHealthType AOakCharacter::GetHealthInformationAtIndex(int32 Index, EValidIndex& Branch) {
    return FHealthType{};
}

bool AOakCharacter::GetFirstHealthInformationByType(UHealthTypeData* HealthTypeToFind, FHealthType& OutHealthType) {
    return false;
}

float AOakCharacter::GetFaceFXBlendWeight(float DeltaTime, float BlendTime, USkeletalMeshComponent* InSkelMeshComp) {
    return 0.0f;
}

AActor* AOakCharacter::GetEquippedInventoryForSlot(UInventorySlotData* InventorySlot) {
    return NULL;
}

AOakVehicle* AOakCharacter::GetCARVehicle() const {
    return NULL;
}

UInventoryListComponent* AOakCharacter::GetBankInventoryComponent() const {
    return NULL;
}

UOakAIActionComponent* AOakCharacter::GetAIActionComponent() const {
    return NULL;
}

AWeapon* AOakCharacter::GetActiveWeapon(uint8 Slot) const {
    return NULL;
}

void AOakCharacter::FillAllHealth() {
}

void AOakCharacter::ExitVehicle(bool bInstant) {
}

void AOakCharacter::ExitTurret(bool bInstant) {
}

void AOakCharacter::EquipInventorySlotDirect(const UInventorySlotData* SlotToEquip, AActor* SelectedActor, bool bSwapSlots) {
}

void AOakCharacter::EquipInventorySlot(const UInventorySlotData* SlotToEquip, const FInventoryListEntryHandle& SelectedHandle, bool bSwapSlots) {
}

void AOakCharacter::EnableInventorySlot(UInventorySlotData* InventorySlot, bool bEnabled) {
}

void AOakCharacter::DropCurrentWeapon() {
}

void AOakCharacter::DelayWeaponsUse(float DelayTime, bool bForceUseAfterDelay) {
}

void AOakCharacter::ControlMech(AOakCharacter* TheMech) {
}

void AOakCharacter::ClientUnlockActiveWeaponActions_Implementation(FName Reason, int32 ChannelsMask) {
}

void AOakCharacter::ClientStopWeaponActions_Implementation(uint8 Slot, int32 ChannelsMask, bool bClearInput) {
}

void AOakCharacter::ClientLockActiveWeaponActions_Implementation(FName Reason, int32 ChannelsMask, bool bStopActions, bool bClearInput) {
}

bool AOakCharacter::CanEquipInventoryItem(AActor* InInventoryToEquip) const {
    return false;
}

bool AOakCharacter::AttemptGroundSlam() {
    return false;
}

void AOakCharacter::AttachedItemPickedUp_Implementation(AInventoryItemPickup* InventoryItemPickedUp, AActor* PickedUpBy) {
}

void AOakCharacter::AnimNotify_BossClosedCaption(const UAnimNotify* IncomingNotify) {
}

void AOakCharacter::AddInWorldIcon(const FHUDInWorldIconTargetInfo& TargetInfo) {
}

void AOakCharacter::AddHealthTypeAtIndex(UHealthTypeData* HealthTypeData, UGameResourcePoolData* HealthPoolData, int32 Index, EHealthAdded& Branch) {
}

void AOakCharacter::AddHealthType(UHealthTypeData* HealthTypeData, UGameResourcePoolData* HealthPoolData, EHealthAdded& Branch) {
}

void AOakCharacter::AddedToInventory(const UInventoryListComponent* InventoryList, const UInventoryCategoryData* AddedCategory, AActor* AddedActor, const FInventoryListEntryHandle& AddedHandle, int32 Flags, int32 DesiredSlot) {
}

void AOakCharacter::AddDefaultItemPoolsToInventory(TArray<FItemPoolInfo>& ItemPools, bool SingleEquippedItem, bool ClearInventory, bool EquipIfNoInventory) {
}

void AOakCharacter::AddDefaultItemPoolListInventory(UItemPoolListData* DefaultItemPoolList, bool ClearInventory, bool EquipIfNoInventory) {
}

void AOakCharacter::AddDefaultItemPoolInventory(UItemPoolData* DefaultItemPoolData, bool ClearInventory, bool EquipIfNoInventory) {
}

void AOakCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOakCharacter, HealthState);
    DOREPLIFETIME(AOakCharacter, DeathType);
    DOREPLIFETIME(AOakCharacter, IsDeadAttached);
    DOREPLIFETIME(AOakCharacter, bIsDeadInSeatedTurret);
    DOREPLIFETIME(AOakCharacter, bCanUseWeaponWhileSprinting);
    DOREPLIFETIME(AOakCharacter, DeadRagdollReplicationData);
    DOREPLIFETIME(AOakCharacter, EquippedInventory);
    DOREPLIFETIME(AOakCharacter, HolsteredWeapon);
    DOREPLIFETIME(AOakCharacter, WeaponSwapTimeScale);
    DOREPLIFETIME(AOakCharacter, bWeaponsRestricted);
    DOREPLIFETIME(AOakCharacter, InventoryProxy);
    DOREPLIFETIME(AOakCharacter, Mech);
    DOREPLIFETIME(AOakCharacter, OverrideVisibleCorpseRemovalTime);
    DOREPLIFETIME(AOakCharacter, CorpseRemovalActionOverride);
    DOREPLIFETIME(AOakCharacter, CustomizationSeed);
    DOREPLIFETIME(AOakCharacter, CoordinatedEffectSwitch);
    DOREPLIFETIME(AOakCharacter, AnimStyleCurrent);
}

AOakCharacter::AOakCharacter() {
    this->OwnerGbxAIController = NULL;
    this->AIActionComponent = NULL;
    this->OakCharacterMovement = CreateDefaultSubobject<UOakCharacterMovementComponent>(TEXT("CharMoveComp"));
    this->ResourcePoolComponent = CreateDefaultSubobject<UGameResourcePoolManagerComponent>(TEXT("ResourcePoolComponent"));
    this->OakDamageComponent = CreateDefaultSubobject<UOakDamageComponent>(TEXT("DefaultDamageComponent"));
    this->OakDamageCauserComponent = CreateDefaultSubobject<UOakDamageCauserComponent>(TEXT("DefaultDamageCauserComponent"));
    this->AbilityManagerComponent = NULL;
    this->StatusEffectManagerComponent = CreateDefaultSubobject<UOakStatusEffectManagerComponent>(TEXT("StatusEffectManagerComponent"));
    this->OakCharacterInventory = NULL;
    this->OakCharacterBankInventory = NULL;
    this->WadingEffectsComponent = CreateDefaultSubobject<UWadingEffectsComponent>(TEXT("WadingEffectsComponent"));
    this->CachedBodyWeaponHoldManager = NULL;
    this->AIWeaponUser = NULL;
    this->HealthState = EHealthState::Healthy;
    this->DeathType = EDeathType::None;
    this->IsDeadAttached = false;
    this->bIsDeadInSeatedTurret = false;
    this->CanGoToInjuredState = false;
    this->CameraModesSet = NULL;
    this->BalanceComponent = NULL;
    this->FFYLComponent = NULL;
    this->SprintInfo = NULL;
    this->bForcePenetrateOnSelf = false;
    this->DesiredNameplateType = ETargetedNameplateType::Standard;
    this->HUDInfo = NULL;
    this->StandInData = NULL;
    this->bEligibleForIgnoreCollisionWithPlayers = false;
    this->bPushOverlappingPlayersAway = false;
    this->bCanUseWeaponWhileSprinting = false;
    this->bAutoEquipWeapons = true;
    this->bIkOverride = false;
    this->bCanBeRooted = true;
    this->MusicThreatValue = 1.00f;
    this->bCopyPlayerCustomizationsFromInstigator = false;
    this->bUseCustomSlidingEyeHeight = false;
    this->SlidingEyeHeight = 0.00f;
    this->bBlockVehicle = false;
    this->VehicleCollisionResistanceFactor = 0.00f;
    this->DamageToVehicleFactor = 0.00f;
    this->DefaultWeaponClass = NULL;
    this->DefaultBalanceWeaponData = NULL;
    this->ActiveWeaponScale = 1.00f;
    this->bOverrideBalanceInventory = false;
    this->bDiscardInventoryOnDeath = true;
    this->bRebuildInventoryOnLevelChange = false;
    this->bCanShowHolsterableItemsOnBody = false;
    this->HideWeaponOnSpawnReason = TEXT("OnSpawn");
    this->bHideWeaponOnSpawn = false;
    this->WeaponItemType = NULL;
    this->CreditsItemType = NULL;
    this->HolsteredWeapon = NULL;
    this->PreferredHolsterWeaponSlot = NULL;
    this->bUseAccuracyPattern = false;
    this->bWeaponsRestricted = false;
    this->InventoryProxy = NULL;
    this->CurrentSlideModifier = NULL;
    this->RecentlyEquippedWeaponInSprintTime = 0.50f;
    this->BaseTransformsAnimation = NULL;
    this->Mech = NULL;
    this->OverrideVisibleCorpseRemovalTime = 0.00f;
    this->CorpseRemovalActionOverride = NULL;
    this->AudioRandomVariationValue = 0.00f;
    this->CachedDefaultAudioComponent = NULL;
    this->LastDamageSourceClass = NULL;
    this->KillerActor = NULL;
    this->CachedFaceFXComponent = NULL;
    this->bCanStomp = false;
    this->StompDivideModifier = 1.00f;
    this->VehicleClassIDBeforeDeath = NULL;
    this->VehicleSeatSlotBeforeDeath = 0;
    this->LastVehicleSeat = NULL;
    this->CurrentVehicleSeat = NULL;
    this->OwnedVehicle = NULL;
    this->CARVehicle = NULL;
    this->LastTurretSeat = NULL;
    this->CurrentTurretSeat = NULL;
    this->Gender = EOakGender::Random;
    this->bUseGender = false;
    this->CustomizationSeed = -1;
    this->bUseSocketsForIconPlacement = true;
    this->MainAIAction = NULL;
    this->AnimStyleEnum = NULL;
    this->AnimStyleInitial = 0;
    this->AnimStyleCurrent = 0;
    this->CloakComp = NULL;
}

