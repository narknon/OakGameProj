#include "FightForYourLifeComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;
class UGbxAttributeData;
class UWwiseEvent;
class UGbxDamageType;
class UHUDNotificationAsset;
class UDamageSource;

void UFightForYourLifeComponent::UpdatePreGiveUp() {
}

void UFightForYourLifeComponent::ServerGivingUpState_Stop_Implementation() {
}
bool UFightForYourLifeComponent::ServerGivingUpState_Stop_Validate() {
    return true;
}

void UFightForYourLifeComponent::ServerGivingUpState_Start_Implementation() {
}
bool UFightForYourLifeComponent::ServerGivingUpState_Start_Validate() {
    return true;
}

void UFightForYourLifeComponent::SecondWindTargetDied(AActor* DamageReceiver, AActor* DamageCauser) {
}

void UFightForYourLifeComponent::RevivingState_Stop(bool IsHealed) {
}

void UFightForYourLifeComponent::RevivingState_Start(AActor* ActorBeingRevived) {
}

void UFightForYourLifeComponent::ResurrectingState_Stop() {
}

void UFightForYourLifeComponent::ResurrectingState_Start() {
}

void UFightForYourLifeComponent::RestoreAttributeValue(UGbxAttributeData* CurrentValueAttribute, UGbxAttributeData* MaxValueAttribute, UGbxAttributeData* PercentAfterDeathAttribute) {
}

void UFightForYourLifeComponent::ReplenishHealthAndShield(float HealthPercent, float ShieldPercent, UWwiseEvent* WwiseEvent) {
}

void UFightForYourLifeComponent::PlayWwiseEventOnOwner(UWwiseEvent* EventToPlay) {
}

void UFightForYourLifeComponent::PauseDownStateTimer(bool PauseTimer) {
}

void UFightForYourLifeComponent::OnRep_RevivingParticleActive() {
}

void UFightForYourLifeComponent::OnRep_ReviveState(EReviveState OldREviveState) {
}

void UFightForYourLifeComponent::OnRep_DownStateExitReason() {
}

void UFightForYourLifeComponent::OnRep_CurrentDownState(EDownState OldDownState) {
}

void UFightForYourLifeComponent::OnRep_ActorToRevive() {
}

void UFightForYourLifeComponent::NotifyRespawnStart() {
}

void UFightForYourLifeComponent::MarkSecondWindTarget(AActor* DamagedActor) {
}

bool UFightForYourLifeComponent::IsReviving() {
    return false;
}

bool UFightForYourLifeComponent::IsResurrecting() {
    return false;
}

bool UFightForYourLifeComponent::IsLocalOwner() {
    return false;
}

bool UFightForYourLifeComponent::IsInDownState() {
    return false;
}

bool UFightForYourLifeComponent::IsCharacterAHealer(AActor* HealingActor) const {
    return false;
}

bool UFightForYourLifeComponent::IsBeingRevivedByPlayer() {
    return false;
}

bool UFightForYourLifeComponent::IsBeingRevived() {
    return false;
}

void UFightForYourLifeComponent::GivingUpState_Stop() {
}

void UFightForYourLifeComponent::GivingUpState_Start() {
}

float UFightForYourLifeComponent::GetReviveTimePercentage() {
    return 0.0f;
}

float UFightForYourLifeComponent::GetDownTimePercentage() {
    return 0.0f;
}

void UFightForYourLifeComponent::DownStateTimeExpired(FGameResourcePoolReference ResourcePool) {
}

void UFightForYourLifeComponent::DownStateCausedDamage(AActor* DamageInstigator, float Damage, const UGbxDamageType* DamageType, const UDamageSource* DamageSource, AActor* DamagedActor, FCausedDamageDetails Details) {
}

void UFightForYourLifeComponent::DownState_Stop(EExitDownStateReason Reason, FText CustomExitMessageText, UHUDNotificationAsset* CustomExitNotification) {
}

void UFightForYourLifeComponent::DownState_Start(bool InstantDeath) {
}

void UFightForYourLifeComponent::DownState_Finish() {
}

void UFightForYourLifeComponent::DownAndExertingState_Stop() {
}

void UFightForYourLifeComponent::DownAndExertingState_Start() {
}

void UFightForYourLifeComponent::DisplayExitNotification() {
}

void UFightForYourLifeComponent::ClearSecondWindTarget() {
}

void UFightForYourLifeComponent::ClearDownStateExitReason() {
}

void UFightForYourLifeComponent::BeingRevivedTimeExpired(FGameResourcePoolReference ResourcePool) {
}

void UFightForYourLifeComponent::BeingRevivedState_Stop(bool IsHealed) {
}

bool UFightForYourLifeComponent::BeingRevivedState_Start(AActor* RevivingActor) {
    return false;
}

void UFightForYourLifeComponent::ActivateSecondWind() {
}

void UFightForYourLifeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFightForYourLifeComponent, DownTimeResourcePool);
    DOREPLIFETIME(UFightForYourLifeComponent, bRevivingParticleActive);
    DOREPLIFETIME(UFightForYourLifeComponent, BeingRevivedTimeResourcePool);
    DOREPLIFETIME(UFightForYourLifeComponent, RevivingTimeResourcePool);
    DOREPLIFETIME(UFightForYourLifeComponent, ActorToRevive);
    DOREPLIFETIME(UFightForYourLifeComponent, ActorsRevivingCount);
    DOREPLIFETIME(UFightForYourLifeComponent, bBeingRevivedByPlayer);
    DOREPLIFETIME(UFightForYourLifeComponent, CurrentDownState);
    DOREPLIFETIME(UFightForYourLifeComponent, ReviveState);
    DOREPLIFETIME(UFightForYourLifeComponent, bReviveSuccessful);
    DOREPLIFETIME(UFightForYourLifeComponent, DownStateExitReason);
    DOREPLIFETIME(UFightForYourLifeComponent, bSuppressWidget);
}

UFightForYourLifeComponent::UFightForYourLifeComponent() {
    this->DownStateTimeResourceData = NULL;
    this->ReviveTimeResourceData = NULL;
    this->MaximumRevivingActors = 3;
    this->GiveUpDownTimeConsumptionRate = 10.00f;
    this->StartDownStateTimePaused = false;
    this->DefaultExitNotificationAsset = NULL;
    this->ExitNotificationPriority = 0;
    this->BeingRevivedStatusEffectData = NULL;
    this->PostProcessTransitionCurve = NULL;
    this->PostProcessBleedOutCurve = NULL;
    this->DownstateStartAudio = NULL;
    this->DownstateStopAudio = NULL;
    this->DeathStartAudio = NULL;
    this->DeathWormholeAudio = NULL;
    this->InstantDeathWormholeAudio = NULL;
    this->ResurrectionStartAudio = NULL;
    this->ResurrectionStopAudio = NULL;
    this->OverrideHUDState = NULL;
    this->RevivingParticleTemplate = NULL;
    this->RevivingParticle = NULL;
    this->bRevivingParticleActive = false;
    this->RevivingTimeRateScalarFormula = NULL;
    this->ActorToRevive = NULL;
    this->ActorsRevivingCount = 0;
    this->bBeingRevivedByPlayer = false;
    this->CurrentDownState = EDownState::DownState_Healthy;
    this->ReviveState = EReviveState::ReviveState_None;
    this->bReviveSuccessful = false;
    this->bCinematicPause = false;
    this->StockDownTimeConsumptionRate = 0.00f;
    this->StockRevivingTimeConsumptionRate = 0.00f;
    this->CurrentSecondWindTargetComp = NULL;
    this->SecondWindTargetRetainTime = 1.00f;
    this->bSuppressWidget = false;
    this->RadiusExpansion = 16.00f;
    this->HalfHeightExpansion = 16.00f;
}

