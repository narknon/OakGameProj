#include "VehicleEffectsComponent.h"

class AActor;
class UMaterialInterface;
class UMaterialInstanceDynamic;

void UVehicleEffectsComponent::StopEffects(EVehicleEffectEvent Event) {
}

void UVehicleEffectsComponent::SetEffectVectorParameter(const FName& ParamName, const FVector& ParamValue, const FVehicleEffectQueryData& QueryData) {
}

void UVehicleEffectsComponent::SetEffectMaterialParameter(const FName& ParamName, UMaterialInterface* ParamValue, const FVehicleEffectQueryData& QueryData) {
}

void UVehicleEffectsComponent::SetEffectFloatParameter(const FName& ParamName, float ParamValue, const FVehicleEffectQueryData& QueryData) {
}

void UVehicleEffectsComponent::SetEffectColorParameter(const FName& ParamName, const FLinearColor& ParamValue, const FVehicleEffectQueryData& QueryData) {
}

void UVehicleEffectsComponent::PlayEffects(EVehicleEffectEvent Event) {
}

void UVehicleEffectsComponent::OnStopHorn() {
}

void UVehicleEffectsComponent::OnStatusEffectStarted(AActor* Receiver, const FStatusEffectSpec& Spec, EOakElementalType ElementalType) {
}

void UVehicleEffectsComponent::OnStatusEffectEnded(AActor* Receiver, const FStatusEffectSpec& Spec, EOakElementalType ElementalType) {
}

void UVehicleEffectsComponent::OnStartHorn() {
}

void UVehicleEffectsComponent::OnPrimarySeatStatusChanged() {
}

void UVehicleEffectsComponent::OnPreBeginFreeze(EFreezeType FreezeType) {
}

void UVehicleEffectsComponent::OnHoverStart() {
}

void UVehicleEffectsComponent::OnHoverEnd() {
}

void UVehicleEffectsComponent::OnHealthy() {
}

void UVehicleEffectsComponent::OnHealthVeryLow() {
}

void UVehicleEffectsComponent::OnHealthLow() {
}

void UVehicleEffectsComponent::OnGearShift(int32 Gear, bool bIsShiftingUp) {
}

void UVehicleEffectsComponent::OnDigitrustStart() {
}

void UVehicleEffectsComponent::OnDigitrustEnd() {
}

void UVehicleEffectsComponent::OnDead() {
}

void UVehicleEffectsComponent::OnCryoThawing() {
}

void UVehicleEffectsComponent::OnCryoThawed() {
}

void UVehicleEffectsComponent::OnCryoFrozen() {
}

void UVehicleEffectsComponent::OnCryoFreezing() {
}

void UVehicleEffectsComponent::OnBoostEnd() {
}

void UVehicleEffectsComponent::OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void UVehicleEffectsComponent::AnimateScalarParameterValueWithCallback(UMaterialInstanceDynamic* MaterialInstanceDynamic, FName ParameterName, FVector2D ValueRange, float Time, const FOnAnimateEnded& OnAnimateEnded) {
}

void UVehicleEffectsComponent::AnimateScalarParameterValue(UMaterialInstanceDynamic* MaterialInstanceDynamic, FName ParameterName, FVector2D ValueRange, float Time) {
}

UVehicleEffectsComponent::UVehicleEffectsComponent() {
    this->MinJumpVelocity = 50.00f;
    this->WheelAddStrength = 500.00f;
    this->WheelOverspin = 0.00f;
    this->SpeedLinesPS = NULL;
    this->SpeedLineCurve = NULL;
    this->ImpactThrottleThreshold = 0.10f;
    this->GrindingInPlaceMaxSpeed = 5.00f;
    this->bIsGrindingInPlace = false;
    this->ScreenParticleMgrComp = NULL;
    this->ImpactCooldownTime = 0.10f;
    this->LastActorHitResetTime = 0.35f;
    this->ImpactVelocityThresholdsInKPH[0] = 0.00f;
    this->ImpactVelocityThresholdsInKPH[1] = 0.00f;
    this->ImpactVelocityThresholdsInKPH[2] = 0.00f;
    this->ImpactVelocityThresholdsInKPH[3] = 0.00f;
    this->ImpactVelocityThresholdsInKPH[4] = 0.00f;
    this->ImpactVelocityThresholdsInKPH[5] = 0.00f;
    this->ImpactEffects.AddDefaulted(6);
    this->bTriggerBackfireInBoost = false;
    this->EndBoostBackfireDelay = 0.20f;
    this->LastHitActor = NULL;
}

