#include "OakCharacter_Player.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "OakCustomizationComponent.h"
#include "Components/CapsuleComponent.h"

class AActor;
class UInventorySlotData;
class AGrenade;
class UOakCustomizationData;
class UOakSDUData;
class UOakHUDSkillIconWidget;
class UGbxAction;
class UEchoLogData;
class UInventoryCategoryData;
class AEchoDevice;

void AOakCharacter_Player::UpdateFriendStatusSystemOfInventoryChange(AActor* InInventory, UInventorySlotData* SlotData) {
}

void AOakCharacter_Player::UnlockPlayerFFYLGrenadeRestriction(FName Reason) {
}

void AOakCharacter_Player::UnequipEchoDevice(bool bInstant, FName Reason, bool bReplicate) {
}

bool AOakCharacter_Player::TryThrowGrenade() {
    return false;
}

void AOakCharacter_Player::TickFriendlyTarget(float DeltaSeconds) {
}

AGrenade* AOakCharacter_Player::SpawnAndThrowGrenade() {
    return NULL;
}

AGrenade* AOakCharacter_Player::SpawnAmmoOptionalGrenadeFromSource(AActor* SourceActor, bool bUseAmmo, FName ThrowSocketName) {
    return NULL;
}

AGrenade* AOakCharacter_Player::SpawnAmmoOptionalGrenade(bool bUseAmmo) {
    return NULL;
}

void AOakCharacter_Player::ShowDisconnectEffect_Implementation() {
}

void AOakCharacter_Player::ShowConnectEffect_Implementation() {
}

void AOakCharacter_Player::SetFriendlyTarget(AActor* NewFriendly) {
}

void AOakCharacter_Player::SetEchoDeviceIdleScreen(FName NewScreenName) {
}

void AOakCharacter_Player::ServerUnequipEchoDevice_Implementation(bool bInstant) {
}
bool AOakCharacter_Player::ServerUnequipEchoDevice_Validate(bool bInstant) {
    return true;
}

void AOakCharacter_Player::ServerTryThrowGrenade_Implementation() {
}
bool AOakCharacter_Player::ServerTryThrowGrenade_Validate() {
    return true;
}

void AOakCharacter_Player::ServerTryInitiateDuel_Implementation() {
}
bool AOakCharacter_Player::ServerTryInitiateDuel_Validate() {
    return true;
}

void AOakCharacter_Player::ServerTryExitPhotoMode_Implementation() {
}
bool AOakCharacter_Player::ServerTryExitPhotoMode_Validate() {
    return true;
}

void AOakCharacter_Player::ServerTryEnterPhotoMode_Implementation() {
}
bool AOakCharacter_Player::ServerTryEnterPhotoMode_Validate() {
    return true;
}

void AOakCharacter_Player::ServerSetHasMenuOpen_Implementation(bool bNewValue) {
}
bool AOakCharacter_Player::ServerSetHasMenuOpen_Validate(bool bNewValue) {
    return true;
}

void AOakCharacter_Player::ServerSetEquippedEmote_Implementation(uint32 Slot, UOakCustomizationData* EmoteData) {
}
bool AOakCharacter_Player::ServerSetEquippedEmote_Validate(uint32 Slot, UOakCustomizationData* EmoteData) {
    return true;
}

void AOakCharacter_Player::ServerPlayTeleportEffectsOnly_Implementation() {
}
bool AOakCharacter_Player::ServerPlayTeleportEffectsOnly_Validate() {
    return true;
}

void AOakCharacter_Player::ServerPlayEchoDeviceScreen_Implementation(FName NewScreenName) {
}
bool AOakCharacter_Player::ServerPlayEchoDeviceScreen_Validate(FName NewScreenName) {
    return true;
}

void AOakCharacter_Player::ServerNotifyPhotoModeFailed_Implementation() {
}
bool AOakCharacter_Player::ServerNotifyPhotoModeFailed_Validate() {
    return true;
}

void AOakCharacter_Player::ServerInterruptEmote_Implementation() {
}
bool AOakCharacter_Player::ServerInterruptEmote_Validate() {
    return true;
}

void AOakCharacter_Player::ServerEquipEchoDevice_Implementation(EWeaponEquipType EquipType) {
}
bool AOakCharacter_Player::ServerEquipEchoDevice_Validate(EWeaponEquipType EquipType) {
    return true;
}

void AOakCharacter_Player::ResumeFriendlyTargeting() {
}

void AOakCharacter_Player::PlayEquippedEmote_Implementation(uint32 Slot) {
}
bool AOakCharacter_Player::PlayEquippedEmote_Validate(uint32 Slot) {
    return true;
}

void AOakCharacter_Player::PlayEchoDeviceScreen(FName NewScreenName) {
}

void AOakCharacter_Player::OnStartDead() {
}

void AOakCharacter_Player::OnSDUListUpdated(UOakSDUData* InSDUData, int32 InSDULevel) {
}

void AOakCharacter_Player::OnRep_EchoDeviceRepState() {
}

void AOakCharacter_Player::OnRep_bSanctuaryZeroGravity() {
}

void AOakCharacter_Player::OnMaxHealthChanged(float OldValue, float NewValue) {
}

void AOakCharacter_Player::OnLevelUp(const int32 OldExperienceLevel, const int32 NewExperienceLevel) {
}


void AOakCharacter_Player::OnCinematicStopped_RetryTeleportEffects() {
}

void AOakCharacter_Player::NotifyPickedUpEchoDeviceLog(AActor* EchoActor) {
}

void AOakCharacter_Player::NotifyHitFriendly(const FHitFriendlyEventDetails& Details) {
}

void AOakCharacter_Player::NotifyEchoPutDownFinished() {
}

void AOakCharacter_Player::NotifyEchoEquipFinished() {
}

void AOakCharacter_Player::Multicast_PlayEchoDeviceInsert_Implementation(TSubclassOf<UGbxAction> InsertAction, UEchoLogData* EchoLogData) {
}

void AOakCharacter_Player::LockPlayerFFYLGrenadeRestriction(FName Reason) {
}

bool AOakCharacter_Player::IsPlayingEmote() const {
    return false;
}

void AOakCharacter_Player::InterruptFriendlyTargeting() {
}

void AOakCharacter_Player::InterruptEmote() {
}

void AOakCharacter_Player::InterruptAndPlayNewEmote_Implementation(UOakCustomizationData* EmoteData) {
}
bool AOakCharacter_Player::InterruptAndPlayNewEmote_Validate(UOakCustomizationData* EmoteData) {
    return true;
}

bool AOakCharacter_Player::HasProjectedShield() {
    return false;
}

bool AOakCharacter_Player::HasEnoughAmmoToThrowGrenade() const {
    return false;
}


int32 AOakCharacter_Player::GetSDULevel(UOakSDUData* InSDUData) {
    return 0;
}



bool AOakCharacter_Player::GetNextSDULevelInfo(UOakSDUData* InSDUData, int32& NextSDULevel, int32& OutSDUPrice, UInventoryCategoryData*& OutPriceCurrenty, float& ModifyAmount) {
    return false;
}

AEchoDevice* AOakCharacter_Player::GetEchoDevice() const {
    return NULL;
}

void AOakCharacter_Player::ExecuteTeleport() {
}

void AOakCharacter_Player::EquipEchoDevice(EWeaponEquipType EquipType, FName Reason, bool bOutsideOfMenu, bool bReplicate) {
}

void AOakCharacter_Player::EnableComboGuardianRankPerk(float DamageBonusPerShot, float Duration, int32 MaxStacks) {
}

void AOakCharacter_Player::DisableComboGuardianRankPerk() {
}

void AOakCharacter_Player::ClientNotifyVaultRewardGiven_Implementation(EVaultRewardType VaultRewardType) {
}

void AOakCharacter_Player::ClientExitPhotoMode_Implementation() {
}

void AOakCharacter_Player::ClientEnterPhotoMode_Implementation() {
}

bool AOakCharacter_Player::CanStartThrowingGrenade() const {
    return false;
}

bool AOakCharacter_Player::CanCurrentlyThrowGrenades() const {
    return false;
}


void AOakCharacter_Player::AddSDU(UOakSDUData* InSDUData) {
}

UOakHUDSkillIconWidget* AOakCharacter_Player::AddHUDSkillIconWidget_Implementation() {
    return NULL;
}

void AOakCharacter_Player::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOakCharacter_Player, bSanctuaryZeroGravity);
    DOREPLIFETIME(AOakCharacter_Player, bHasMenuOpen_Replicated);
    DOREPLIFETIME(AOakCharacter_Player, bIsWeaponLowered);
    DOREPLIFETIME(AOakCharacter_Player, PlayerSDUs);
    DOREPLIFETIME(AOakCharacter_Player, EchoDeviceRepState);
    DOREPLIFETIME(AOakCharacter_Player, GrenadeFFYLRestrictionLock);
    DOREPLIFETIME(AOakCharacter_Player, ClientWeaponsRestrictedRestoreSlots);
    DOREPLIFETIME(AOakCharacter_Player, bCanWeaponZoomWhileInjured);
    DOREPLIFETIME(AOakCharacter_Player, EquippedInventoryForSaveGame);
    DOREPLIFETIME(AOakCharacter_Player, ActiveWeaponsForSaveGame);
}

AOakCharacter_Player::AOakCharacter_Player() {
    this->bSanctuaryZeroGravity = false;
    this->ConnectEffectTemplate = NULL;
    this->DisconnectEffectTemplate = NULL;
    this->PhotoModeController = NULL;
    this->PhotoModeView = NULL;
    this->AdditionalRoll = 0.00f;
    this->bIsRaidSpectating = false;
    this->bHasMenuOpen_Replicated = false;
    this->bInterruptFriendlyTargeting = false;
    this->bIsWeaponLowered = false;
    this->FriendlyTargetRange = 1000.00f;
    this->WeaponLowerDelay = 2.00f;
    this->WeaponRaiseDelay = 0.50f;
    this->FriendlyTarget = NULL;
    this->LadderCameraMode = TEXT("Ladder");
    this->LadderCameraBlendOutTime = 0.20f;
    this->LadderSlidingFeedback = NULL;
    this->LadderSlideLandingFeedback = NULL;
    this->LadderSlideAudioLoop = NULL;
    this->GrenadeThrowAction = NULL;
    this->GrenadeThrowCooldown = 1.00f;
    this->GrenadeResource = NULL;
    this->EquippedEmotes.AddDefaulted(4);
    this->DefaultEmotes.AddDefaulted(4);
    this->HeadCustomizationType = NULL;
    this->BodyCustomizationType = NULL;
    this->SkinCustomizationType = NULL;
    this->CustomizationComponent = CreateDefaultSubobject<UOakCustomizationComponent>(TEXT("CustomizationComponent"));
    this->PendingInsertPlayEchoLog = NULL;
    this->PlayerBalanceComponent = NULL;
    this->HavokNavObstacleComponent = NULL;
    this->PlayerAbilityManagerComponent = NULL;
    this->FFYLCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("FFYLCapsuleCollision"));
    this->ClientWeaponsRestrictedRestoreSlots = 0;
    this->SprintExhaustionStartThreshold = 9.00f;
    this->SprintExhaustionStopThreshold = 7.00f;
    this->HUDSkillIconWidgetClass = NULL;
    this->bTired = false;
    this->bUsesSecondaryActionSkill = false;
    this->bUsesActionSkillHoldOverrideAction = false;
    this->OakPlayerController = NULL;
    this->HUDSkillIconWidget = NULL;
    this->GrenadeAmmoAttribute = NULL;
    this->bCanWeaponZoomWhileInjured = false;
    this->TeleportAction = NULL;
}

