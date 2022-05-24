#include "OakVehicle.h"
#include "Net/UnrealNetwork.h"
#include "GameResourcePoolManagerComponent.h"
#include "VehicleSeatComponent.h"
#include "VehicleEffectsComponent.h"
#include "OakMinimapIconComponent.h"
#include "TargetableComponent.h"
#include "OakVehicleDamageComponent.h"
#include "OakDamageCauserComponent.h"
#include "OakStatusEffectManagerComponent.h"
#include "VehicleAudioProviderComponent.h"

class UHavokPathFindingData;
class UFeedbackData;
class AVehicleSeatPawn;
class UVehiclePartData;
class UObject;
class UHealthTypeData;
class UWeaponSlotData;
class AActor;
class UItemPoolData;
class AOakVehicle;
class UDamageComponent;
class UDamageCauserComponent;
class AController;
class APawn;
class AWeapon;
class UOakDamageComponent;
class AOakAIController;
class APlayerController;

void AOakVehicle::UnlockWorldTravel(FName Reason) {
}

void AOakVehicle::TestTeleportFailSafeLocation() {
}

void AOakVehicle::TeleportVehicle_Implementation(FVector Location, FRotator Rotation) {
}

void AOakVehicle::StopZooming(bool bForcedStop) {
}

void AOakVehicle::StopUsingWeapon(UWeaponSlotData* Slot, uint8 InputChannel) {
}

void AOakVehicle::StopUsingSecondaryWeapons() {
}

void AOakVehicle::StopUsingSecondarySeatWeapon() {
}

void AOakVehicle::StopUsingPrimaryWeapons(uint8 InputChannel) {
}

void AOakVehicle::StopReload(UWeaponSlotData* Slot) {
}

void AOakVehicle::StopHover() {
}

void AOakVehicle::StopHornSequence() {
}

void AOakVehicle::StopHorn_Implementation() {
}
bool AOakVehicle::StopHorn_Validate() {
    return true;
}

void AOakVehicle::StopFeedbackOnOccupants(UFeedbackData* FeedbackData, bool bOnlyLocalPlayers) {
}

void AOakVehicle::StopEffects(EVehicleEffectEvent EffectType) {
}

void AOakVehicle::StopEBrakeFeedback() {
}

void AOakVehicle::StopEBrake(bool bTriggerPowerSlide) {
}

void AOakVehicle::StopBoost_Implementation(bool bForce) {
}
bool AOakVehicle::StopBoost_Validate(bool bForce) {
    return true;
}

void AOakVehicle::StartZooming() {
}

void AOakVehicle::StartUsingWeapon(UWeaponSlotData* Slot, uint8 InputChannel) {
}

void AOakVehicle::StartUsingSecondaryWeapons() {
}

bool AOakVehicle::StartUsingSecondarySeatWeapon() {
    return false;
}

void AOakVehicle::StartUsingPrimaryWeapons(uint8 InputChannel) {
}

void AOakVehicle::StartHover() {
}

void AOakVehicle::StartHornSequence(TArray<FHornSequenceEntry> HornSequenceIn) {
}

void AOakVehicle::StartHorn_Implementation() {
}
bool AOakVehicle::StartHorn_Validate() {
    return true;
}

void AOakVehicle::StartEBrake(bool bTriggerPowerSlide) {
}

void AOakVehicle::StartBoost_Implementation() {
}
bool AOakVehicle::StartBoost_Validate() {
    return true;
}

AOakVehicle* AOakVehicle::SpawnVehicleFromItemPool(UObject* WorldContextObject, UItemPoolData* ItemPoolData, const FVector& Position, const FRotator& Rotation) {
    return NULL;
}

void AOakVehicle::SetVehicleSpawnByCatchARideOwner(AActor* NewCAROwner) {
}

void AOakVehicle::SetVehicleDisable(bool bDisable, bool bEvictOccupant) {
}

void AOakVehicle::SetThrottleInput(float Throttle) {
}

void AOakVehicle::SetSteeringInput(float Steering) {
}

void AOakVehicle::SetNavPainterLayerEnabled(ENavPainterLayer Layer, bool bEnable) {
}

void AOakVehicle::SetLockSeatForPlayers(bool bIsSeatLock) {
}

void AOakVehicle::SetInSiegeMode(bool bWantedInSiegeMode) {
}

void AOakVehicle::SetHoverInput(FVector WantedInput) {
}

void AOakVehicle::SetHijackProtectionEnabled(bool bEnable) {
}

void AOakVehicle::SetHandbrake(bool bHandBrake) {
}

void AOakVehicle::SetDrivingInputDisabled(bool bDrivingInputDisabled) {
}

void AOakVehicle::SetDead(EVehicleDeathType InDeathType) {
}

void AOakVehicle::SetBoost(bool bBoosting) {
}

void AOakVehicle::SetAirControlInput(float PitchInput, float RollInput) {
}

void AOakVehicle::SetAIPathFindingData(UHavokPathFindingData* PathFindingData) {
}

void AOakVehicle::ServerStopEBrake_Implementation(bool bTriggerPowerSlide) {
}
bool AOakVehicle::ServerStopEBrake_Validate(bool bTriggerPowerSlide) {
    return true;
}

void AOakVehicle::ServerStartEBrake_Implementation(bool bTriggerPowerSlide) {
}
bool AOakVehicle::ServerStartEBrake_Validate(bool bTriggerPowerSlide) {
    return true;
}

void AOakVehicle::ResetAIPathFindingData() {
}

void AOakVehicle::Reload(UWeaponSlotData* Slot) {
}

void AOakVehicle::RegisterSeatComponent(UVehicleSeatComponent* SeatComponent) {
}








void AOakVehicle::PlayEffects(EVehicleEffectEvent EffectType) {
}

void AOakVehicle::PerformFeedbackOnOccupants(UFeedbackData* FeedbackData, float Scale, bool bLoop, bool bOnlyLocalPlayers) {
}




void AOakVehicle::OnRep_VehicleTeamCollisionChannel() {
}

void AOakVehicle::OnRep_SpawnByCatchARide() {
}

void AOakVehicle::OnRep_Seats() {
}

void AOakVehicle::OnRep_IsEBraking() {
}

void AOakVehicle::OnRep_HealthState() {
}

void AOakVehicle::OnRep_DrivingInputDisabled() {
}

void AOakVehicle::OnRep_Color() {
}

void AOakVehicle::OnReceivedElementalEffect(AActor* Receiver, const FStatusEffectSpec& Spec, EOakElementalType ElementalType) {
}

void AOakVehicle::OnPrimaryOccupantLevelChange(const int32 OldExperienceLevel, const int32 NewExperienceLevel) {
}

void AOakVehicle::OnLanded(float TimeSpentInAir, float LandAngle, int32 NumWheelsOnGround, bool bAllWheelsLanded) {
}

void AOakVehicle::OnHealthResourceDepleted(UDamageComponent* DamageReceiver, UDamageCauserComponent* DamageCauser) {
}


void AOakVehicle::OnDriverAttachStateChanged() {
}

void AOakVehicle::OnBoostEnd() {
}

void AOakVehicle::OnBecameAirborn() {
}

void AOakVehicle::LockWorldTravel(FName Reason) {
}

void AOakVehicle::LockAllSeat(bool bLock) {
}




bool AOakVehicle::IsWorldTravelLocked() const {
    return false;
}

bool AOakVehicle::IsVehicleScannable() {
    return false;
}

bool AOakVehicle::IsVehicleOwnedSolelyBy(AActor* Actor) const {
    return false;
}

bool AOakVehicle::IsVehicleOwnedByPlayer() const {
    return false;
}

bool AOakVehicle::IsVehicleOwnedBy(AActor* Actor) const {
    return false;
}

bool AOakVehicle::IsVehicleOwned() const {
    return false;
}

bool AOakVehicle::IsVehicleOccupant(APawn* Occupant, bool bIncludeDetaching) const {
    return false;
}

bool AOakVehicle::IsPrimarySeatOccupied(bool bIncludeDetaching) const {
    return false;
}

bool AOakVehicle::IsPreviewModel() const {
    return false;
}

bool AOakVehicle::IsPhysicsDisabled() const {
    return false;
}

bool AOakVehicle::IsPartEquipped(TSoftObjectPtr<UVehiclePartData> PartData) const {
    return false;
}

bool AOakVehicle::IsInSiegeMode() const {
    return false;
}

bool AOakVehicle::IsInPowerSlideBoost() const {
    return false;
}

bool AOakVehicle::IsHovering() const {
    return false;
}

bool AOakVehicle::IsEBraking() const {
    return false;
}

bool AOakVehicle::IsDrivingInputDisabled() const {
    return false;
}

bool AOakVehicle::IsDrifting() const {
    return false;
}

bool AOakVehicle::IsDigiThrusting() const {
    return false;
}

bool AOakVehicle::IsControllerInVehicle(const AController* ControllerToCheck) {
    return false;
}

bool AOakVehicle::IsBraking() const {
    return false;
}

bool AOakVehicle::IsBoosting() const {
    return false;
}

void AOakVehicle::InterpolateToGround(float InterpolationSpeed) {
}

void AOakVehicle::IgnoreVehicleCollision(AActor* TargetToIgnore, bool AllChilds) {
}

bool AOakVehicle::HasShieldEquipped() {
    return false;
}

bool AOakVehicle::HasPlayerOccupants() const {
    return false;
}

bool AOakVehicle::HasOccupants(bool bIncludeDetaching) const {
    return false;
}

bool AOakVehicle::HasHealthOfType(UHealthTypeData* HealthTypeToFind) {
    return false;
}

bool AOakVehicle::HasFriendySeatReserved() const {
    return false;
}

bool AOakVehicle::HasAnyDuelingOccupants() const {
    return false;
}

AWeapon* AOakVehicle::GetVehicleWeapon(UWeaponSlotData* WantedSlot) const {
    return NULL;
}

float AOakVehicle::GetThrottleInput() const {
    return 0.0f;
}

TEnumAsByte<ETeamAttitude::Type> AOakVehicle::GetTeamAttitudeTowardsActor(AActor* Actor) {
    return ETeamAttitude::Friendly;
}

FVector AOakVehicle::GetTargetActorLocation() const {
    return FVector{};
}

float AOakVehicle::GetSteeringInput() const {
    return 0.0f;
}

float AOakVehicle::GetSpeedInMPH() const {
    return 0.0f;
}

float AOakVehicle::GetSpeedInKPH() const {
    return 0.0f;
}

AVehicleSeatPawn* AOakVehicle::GetSecondaryWeaponSeatPawn(bool bMustBeUnoccupied) const {
    return NULL;
}

FRotator AOakVehicle::GetSeatWeaponRotation(int32 Slot, bool bWorldSpace) const {
    return FRotator{};
}

APawn* AOakVehicle::GetSeatOccupant(int32 SeatSlot, bool bIncludeDetaching) const {
    return NULL;
}

int32 AOakVehicle::GetSeatCountUse() const {
    return 0;
}

int32 AOakVehicle::GetSeatCount() const {
    return 0;
}

UVehicleSeatComponent* AOakVehicle::GetSeatComponent(int32 Slot) const {
    return NULL;
}

FRotator AOakVehicle::GetRotationDelta() const {
    return FRotator{};
}

APawn* AOakVehicle::GetPrimaryOccupant(bool bIncludeDetaching) const {
    return NULL;
}

float AOakVehicle::GetPlanarSpeedInMPH() const {
    return 0.0f;
}

int32 AOakVehicle::GetOccupantSeatSlot(APawn* Occupant, bool bIncludeDetaching) const {
    return 0;
}

UVehicleSeatComponent* AOakVehicle::GetOccupantSeat(APawn* Occupant, bool bIncludeDetaching) const {
    return NULL;
}

UOakDamageComponent* AOakVehicle::GetOakDamageComponent() {
    return NULL;
}

AOakAIController* AOakVehicle::GetOakAIController() const {
    return NULL;
}

float AOakVehicle::GetMass() const {
    return 0.0f;
}

int32 AOakVehicle::GetLocalPlayer(TArray<APlayerController*>& Controllers) {
    return 0;
}

FVector AOakVehicle::GetLastFrameVelocity() const {
    return FVector{};
}

FVector AOakVehicle::GetGroundAjustement() const {
    return FVector{};
}

int32 AOakVehicle::GetGearsCount() {
    return 0;
}

bool AOakVehicle::GetFirstHealthInformationByType(UHealthTypeData* HealthTypeToFind, FHealthType& OutHealthType) {
    return false;
}

TArray<UVehicleSeatComponent*> AOakVehicle::GetAvailableSeatsForPlayers() const {
    return TArray<UVehicleSeatComponent*>();
}

TArray<APawn*> AOakVehicle::GetAllOccupants(bool bIncludeDetaching) const {
    return TArray<APawn*>();
}

AWeapon* AOakVehicle::GetActiveWeapon(uint8 Slot) const {
    return NULL;
}

void AOakVehicle::FlipOver(AActor* AwayFromActor) {
}

UVehicleSeatComponent* AOakVehicle::FindNearestSeatComponent(const AActor* SearchActor, float MaxDistance, bool bIsHostile, bool bSearchNearestSeat) const {
    return NULL;
}

AOakVehicle* AOakVehicle::FindAssociatedOakVehicle(UObject* Object) {
    return NULL;
}

void AOakVehicle::EnableVehiclePhysics(const FName& Reason) {
}

void AOakVehicle::EnableTransitionControl(bool bEnable) {
}

void AOakVehicle::EnableDoorTeleportFailSafe(FVector Offset, float TestDelay) {
}

void AOakVehicle::EnableAIUseSlot(bool bEnable) {
}

void AOakVehicle::EjectOccupants(bool bKillOccupants, bool bForceResurrectKilledPlayers, bool bInstantKill, bool bFellOutOfWorld, bool bInstantDetach) {
}

void AOakVehicle::DisableVehiclePhysics(const FName& Reason) {
}

void AOakVehicle::DigistructOutTeleport() {
}

void AOakVehicle::DigistructOutEffectOnly() {
}

void AOakVehicle::DigistructIn() {
}

void AOakVehicle::DebugBraking() {
}

void AOakVehicle::DamageReaction_DetachBreakable(const FDamageReactionEventSummary& Summary) {
}

void AOakVehicle::CopyVehicleInertiaTensor() {
}

void AOakVehicle::ClientVehicleSpawnedFromCatchARide() {
}

void AOakVehicle::ClearNavPainterLayer(ENavPainterLayer Layer) {
}

void AOakVehicle::ClearInputWithFilter(TEnumAsByte<EClearInputFilter> Filter) {
}

void AOakVehicle::ClearAllInput() {
}

bool AOakVehicle::CanVehicleBeControlled() const {
    return false;
}

bool AOakVehicle::CanHover() const {
    return false;
}

bool AOakVehicle::CanDrive() const {
    return false;
}

bool AOakVehicle::CanBeFlippedOver(bool bMustBeUnoccupied) const {
    return false;
}

void AOakVehicle::BroadcastHornStoppedEvent_Implementation() {
}

void AOakVehicle::BroadcastHornStartedEvent_Implementation() {
}

void AOakVehicle::BlendedRPMAttenuation() {
}


void AOakVehicle::AddVehicleForce(const FVector& ForceToAdd, const FName& ForceSource) {
}

void AOakVehicle::AddImpulseFromMelee(float ImpulseStrength, float UpRatio, AController* InstigatedBy) {
}

void AOakVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOakVehicle, SeatComponents);
    DOREPLIFETIME(AOakVehicle, HealthState);
    DOREPLIFETIME(AOakVehicle, DeathType);
    DOREPLIFETIME(AOakVehicle, VehicleSpawnByCatchARideOwner);
    DOREPLIFETIME(AOakVehicle, CatchARidePlatform);
    DOREPLIFETIME(AOakVehicle, CatchARideInterface);
    DOREPLIFETIME(AOakVehicle, bIsVehicleScannable);
    DOREPLIFETIME(AOakVehicle, bIsMissionVehicle);
    DOREPLIFETIME(AOakVehicle, UINameOverride);
    DOREPLIFETIME(AOakVehicle, VehicleTeamCollisionChannel);
    DOREPLIFETIME(AOakVehicle, bShouldClearInput);
    DOREPLIFETIME(AOakVehicle, bIsEBraking);
    DOREPLIFETIME(AOakVehicle, bIsFlipped);
    DOREPLIFETIME(AOakVehicle, bIsDrivingInputDisabled);
    DOREPLIFETIME(AOakVehicle, CustomColor);
    DOREPLIFETIME(AOakVehicle, DigistructingIn);
}

AOakVehicle::AOakVehicle() {
    this->TargetableComponent = CreateDefaultSubobject<UTargetableComponent>(TEXT("TargetableComponent"));
    this->DamageComponent = CreateDefaultSubobject<UOakVehicleDamageComponent>(TEXT("DamageComponent"));
    this->DamageCauserComponent = CreateDefaultSubobject<UOakDamageCauserComponent>(TEXT("DamageCauserComponent"));
    this->StatusEffectManagerComponent = CreateDefaultSubobject<UOakStatusEffectManagerComponent>(TEXT("StatusEffectManagerComponent"));
    this->MinimapIconComponent = CreateDefaultSubobject<UOakMinimapIconComponent>(TEXT("MinimapIconComponent"));
    this->ResourcePoolComponent = CreateDefaultSubobject<UGameResourcePoolManagerComponent>(TEXT("ResourcePoolComponent"));
    this->PrimarySeatComponent = CreateDefaultSubobject<UVehicleSeatComponent>(TEXT("PrimarySeatComponent"));
    this->InputComponentClass = NULL;
    this->ClassicModeInputComponentClass = NULL;
    this->VehicleEffectsComponent = CreateDefaultSubobject<UVehicleEffectsComponent>(TEXT("VehicleEffectsComponent"));
    this->WheeledMovementComponent = NULL;
    this->WheeledMovementComponentNW = NULL;
    this->VehicleAirControlComponent = NULL;
    this->VehicleHoverComponent = NULL;
    this->BoostComponent = NULL;
    this->DigiThrustComponent = NULL;
    this->PowerSlideComponent = NULL;
    this->WeaponsComponent = NULL;
    this->BodyWeaponHoldManager = NULL;
    this->SpeedometerMaxSpeedToDisplayMPH = 200.00f;
    this->SkelAndPSCompOptimDistance = 5000.00f;
    this->bDisableAIUseSlot = true;
    this->bDebugDrift = false;
    this->DriftSocketName = TEXT("F_R_Wheel_FX");
    this->MinSpeedToDrift = 100.00f;
    this->LeftDriftMinAngle = 18.00f;
    this->RightDriftMinAngle = 20.00f;
    this->KillStat = NULL;
    this->RPMCurve = NULL;
    this->MaxSpeed = 1500.00f;
    this->RPMCutoffIncreasePerSec = 0.25f;
    this->TimeDriftingToActivateRPMCutoff = 0.50f;
    this->bBypassAirborneBlendedRPM = false;
    this->RPMInAirBlendTime = 1.00f;
    this->RPMBlendTime = 1.00f;
    this->RPMTresholdStartBlend = 85.00f;
    this->OnBoostEndRPMDecreasePercent = 25.00f;
    this->TimeDrifting = 0.00f;
    this->RPMCutoffAddedValue = 0.00f;
    this->bIsInReverse = false;
    this->bIsUpsideDown = false;
    this->Speed = 0.00f;
    this->LateralSpeed = 0.00f;
    this->PlanarSpeed = 0.00f;
    this->RPM = 0.00f;
    this->BlendedRPM = 0.00f;
    this->CurrentGear = 0;
    this->Accel = 0.00f;
    this->bIsDriftingLeft = false;
    this->bIsDriftingRight = false;
    this->LastFrameSpeed = 0.00f;
    this->VehicleClassID = NULL;
    this->SteeringAngleInterpSpeed = 15.00f;
    this->SeatMeshOffset = 0.00f;
    this->bAllow360Shooting = false;
    this->HealthState = EVehicleHealthState::Healthy;
    this->DeathType = EVehicleDeathType::None;
    this->LowHealthPercent = 0.30f;
    this->VeryLowHealthPercent = 0.10f;
    this->bResetCameraAutoLook = false;
    this->VehicleSpawnByCatchARideOwner = NULL;
    this->CatchARidePlatform = NULL;
    this->CatchARideInterface = NULL;
    this->HUDInfo = NULL;
    this->DamageToApplyWhenVehicleIsDead = NULL;
    this->bDigistructOnSpawn = false;
    this->bIsVehicleScannable = true;
    this->bIsMissionVehicle = false;
    this->DigistructInActionClass = NULL;
    this->DigistructInCatchARideActionClass = NULL;
    this->UINameOverride = NULL;
    this->DigistructOutActionClass = NULL;
    this->DigistructTime = 2.00f;
    this->VehicleTeamCollisionChannel = ETeamCollisionChannel::Three;
    this->bShouldClearInput = false;
    this->LastThrottleInput = 0.00f;
    this->LastLookInputTime = 0.00f;
    this->MaxWeaponAimAdjustmentAngle = 2.00f;
    this->EBrakeFeedback = NULL;
    this->EBrakeFeedbackUpdateFrequency = 0.50f;
    this->FlippedThreshold = 0.20f;
    this->bCanBeFlippedOver = true;
    this->bCanEnterWhenFlipped = false;
    this->bEjectOccupantsWhenFlipped = true;
    this->FlippedEjectionTime = 1.50f;
    this->FlipOverLiftStrength = 600.00f;
    this->FlipOverTorqueStrength = 8000.00f;
    this->FlipOverAttemptFrequency = 2.00f;
    this->DrivingData = NULL;
    this->bIsEBraking = false;
    this->bIsFlipped = false;
    this->BalanceStateComponent = NULL;
    this->DefaultUIName = NULL;
    this->SightSenseConfig = NULL;
    this->SpawnerComponent = NULL;
    this->SpawnPointComponent = NULL;
    this->AIPathRadius = 250.00f;
    this->AIPathHeight = 150.00f;
    this->AISearchHeight = 400.00f;
    this->AIMaxSpeed = 1000.00f;
    this->AIMaxTurnAngle = 45.00f;
    this->AIPathFindingData = NULL;
    this->PermissiveAIPathFindingData = NULL;
    this->NavCorrectionSetting = ENavCorrectionSetting::Default;
    this->NavMeshPainterComponent = NULL;
    this->bCanSiege = false;
    this->bAlwaysHover = false;
    this->bCanDisableDrivingInput = true;
    this->RevolverWheelRadius = 160.00f;
    this->RevolverChassisWidthOffset = 0.00f;
    this->RevolverRaycastGroundOffset = 0.00f;
    this->bIsDrivingInputDisabled = false;
    this->bDespawnWhenNoOccupant = true;
    this->bKeepAssociatedToSpawner = false;
    this->DefaultVehicleDriverAction = NULL;
    this->DefaultVehicleTurretAction = NULL;
    this->DefaultVehiclePassengerAction = NULL;
    this->bCollisionPreventsActorsFromSpawning = true;
    this->AdditionalGroundOffset = 0.00f;
    this->HijackProtectionDamageToApply = NULL;
    this->VehicleAudioProvider = CreateDefaultSubobject<UVehicleAudioProviderComponent>(TEXT("VehicleAudioProviderComponent"));
    this->ZoneMapPOIMesh = NULL;
    this->DigistructingIn = false;
    this->AbilityManagerComponent = NULL;
}

