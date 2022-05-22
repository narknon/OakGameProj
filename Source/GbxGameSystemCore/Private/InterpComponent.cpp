#include "InterpComponent.h"

void UInterpComponent::Stop() {
}

void UInterpComponent::SetUpdateVelocity(bool bNewUpdateVelocity) {
}

void UInterpComponent::SetRemoveOnCompletion(bool bRemove) {
}

void UInterpComponent::SetManualTick(bool bManual) {
}

void UInterpComponent::SetClearVelocity(bool bNewClearVelocity) {
}

void UInterpComponent::MatchRotationToVelocity(bool bInSetToInitialWhenFinished) {
}

void UInterpComponent::ManualTick(float DeltaTime) {
}

bool UInterpComponent::IsFinished() const {
    return false;
}

void UInterpComponent::InterpRotation(FRotator NewRot, float InterpTime, bool bLinear, bool bYawOnly, bool bInRelative) {
}

void UInterpComponent::InterpLocation(FVector NewLoc, float InterpTime, bool bLinear, bool bNoZ, bool bInRelative) {
}

void UInterpComponent::InterpDeltaRotation(FRotator DeltaRot, float InterpTime, bool bLinear, bool bYawOnly, bool bInRelative) {
}

void UInterpComponent::InterpDeltaLocation(FVector DeltaLoc, float InterpTime, bool bLinear, bool bNoZ, bool bInRelative) {
}

FVector UInterpComponent::InterpBallisticsByTime(FVector StartLoc, FVector EndLoc, float LeapTime, float LeapGravity) {
    return FVector{};
}

float UInterpComponent::InterpBallistics(FVector StartLoc, FVector EndLoc, float LeapSpeed, float LeapAngle) {
    return 0.0f;
}

UInterpComponent::UInterpComponent() {
    this->bRemoveOnCompletion = false;
    this->bUpdateVelocity = false;
    this->bClearVelocity = true;
    this->bManualTick = false;
    this->bInterpYawOnly = false;
    this->bBallistics = false;
    this->bMatchRotationToVelocity = false;
    this->bSetToInitialWhenFinished = false;
    this->bRelative = false;
    this->InterpActor = NULL;
    this->InterpController = NULL;
    this->InterpMoveComp = NULL;
    this->InterpLocMode = EInterpMode::None;
    this->InterpLocTime = 0.00f;
    this->InterpLocElapsedTime = 0.00f;
    this->InterpRotMode = EInterpMode::None;
    this->InterpRotTime = 0.00f;
    this->InterpRotElapsedTime = 0.00f;
    this->BallisticsGravity = 0.00f;
    this->BallisticsStartTime = 0.00f;
    this->BallisticsTotalTime = 0.00f;
}

