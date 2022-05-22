#include "FeedbackData.h"

class UFeedbackData;
class UObject;
class APlayerController;

void UFeedbackData::StopFeedbackForAll(UFeedbackData* FeedbackData, UObject* WorldContextObject) {
}

void UFeedbackData::StopFeedback(UFeedbackData* FeedbackData, APlayerController* Controller) {
}

void UFeedbackData::StopDefaultFeedbackForAll(FFeedbackTableRowHandle Feedback, UObject* WorldContextObject) {
}

void UFeedbackData::StopDefaultFeedback(FFeedbackTableRowHandle Feedback, APlayerController* Controller) {
}

void UFeedbackData::PerformFeedbackForAllAtLocation(UFeedbackData* FeedbackData, FVector SourceLocation, const FRangedDistanceOverrides RangedDistanceOverrides, bool bLoop, UObject* WorldContextObject, UObject* SourceContext, APlayerController* ControllerToIgnore, UFeedbackData* OverrideControllerFeedback) {
}

void UFeedbackData::PerformFeedbackForAll(UFeedbackData* FeedbackData, float Scale, bool bLoop, UObject* WorldContextObject, UObject* SourceContext, APlayerController* ControllerToIgnore, UFeedbackData* OverrideControllerFeedback) {
}

void UFeedbackData::PerformFeedbackAtLocation(UFeedbackData* FeedbackData, APlayerController* Controller, FVector SourceLocation, const FRangedDistanceOverrides RangedDistanceOverrides, bool bLoop, UObject* SourceContext, APlayerController* ControllerToIgnore, UFeedbackData* OverrideControllerFeedback) {
}

void UFeedbackData::PerformFeedback(UFeedbackData* FeedbackData, APlayerController* Controller, float Scale, bool bLoop, UObject* SourceContext) {
}

void UFeedbackData::PerformDefaultFeedbackForAllAtLocation(FFeedbackTableRowHandle Feedback, FVector SourceLocation, const FRangedDistanceOverrides RangedDistanceOverrides, bool bLoop, UObject* WorldContextObject, UObject* SourceContext, APlayerController* ControllerToIgnore, UFeedbackData* OverrideControllerFeedback) {
}

void UFeedbackData::PerformDefaultFeedbackForAll(FFeedbackTableRowHandle Feedback, float Scale, bool bLoop, UObject* WorldContextObject, UObject* SourceContext, APlayerController* ControllerToIgnore, UFeedbackData* OverrideControllerFeedback) {
}

void UFeedbackData::PerformDefaultFeedbackAtLocation(FFeedbackTableRowHandle Feedback, APlayerController* Controller, FVector SourceLocation, const FRangedDistanceOverrides RangedDistanceOverrides, bool bLoop, UObject* SourceContext, APlayerController* ControllerToIgnore, UFeedbackData* OverrideControllerFeedback) {
}

void UFeedbackData::PerformDefaultFeedback(FFeedbackTableRowHandle Feedback, APlayerController* Controller, float Scale, bool bLoop, UObject* SourceContext) {
}

float UFeedbackData::GetFeedbackDuration(UFeedbackData* FeedbackData) {
    return 0.0f;
}

void UFeedbackData::GetFeedbackDataRange(UFeedbackData* FeedbackData, float& MinRange, float& MaxRange) {
}

UFeedbackData::UFeedbackData() {
    this->FeedbackType = 0;
    this->bAbsoluteControllerRumbleScale = false;
    this->CameraShakeClass = NULL;
    this->CameraShakeClassNegativeXAxis = NULL;
    this->CameraShakeClassYAxis = NULL;
    this->CameraShakeClassNegativeYAxis = NULL;
    this->OscillationDuration = 0.00f;
    this->OscillationBlendInTime = 0.00f;
    this->OscillationBlendOutTime = 0.00f;
    this->RandomShakeInterval = 0.10f;
    this->MaxRandomShakeScalar = 1.00f;
    this->MinRandomShakeScalar = 0.00f;
    this->FirstPersonImpulseType = EFeedbackDataFirstPersonImpulseType::None;
    this->ParticleSystem = NULL;
    this->bHideWhenFinished = false;
    this->ParticleDepth = 100.00f;
    this->ScalingMode = EScreenParticleScalingMode::FitToViewport;
    this->bOnlyOwnerSee = true;
    this->bAlwaysVisible = true;
    this->bTickParticleEvenWhenPaused = false;
    this->bLetSystemFinishAfterStopping = false;
    this->bLooping = false;
    this->EffectFalloffMinDistance = 0.00f;
    this->EffectFalloffMaxDistance = 0.00f;
    this->bUpdateSourceLocation = false;
    this->bScaleDownOverTime = false;
    this->bUseScaleOverTimeCurve = false;
    this->bUseContinuousAttributeScale = false;
    this->bPlayRadialBlur = false;
    this->bOverrideRadialBlurCenter = false;
    this->RadialBlurMaxDistance = -1.00f;
}

