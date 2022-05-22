#include "GbxFeedbackData.h"

UGbxFeedbackData::UGbxFeedbackData() {
    this->FeedbackType = 0;
    this->bAbsoluteControllerRumbleScale = false;
    this->CameraShakeBase = NULL;
    this->CameraShakeDirectionalY = NULL;
    this->RandomShakeInterval = 0.10f;
    this->MaxRandomShakeScalar = 1.00f;
    this->MinRandomShakeScalar = 0.00f;
    this->bUnique = true;
    this->bUseContinuousAttributeScale = false;
    this->bScaleDownOverTime = false;
    this->bUseScaleOverTimeCurve = false;
    this->bPlayRadialBlur = false;
    this->bOverrideRadialBlurCenter = false;
    this->bUseContextAsWorldSpaceCenter = false;
    this->RadialBlurMaxDistance = -1.00f;
    this->ScreenParticles = NULL;
    this->bHideWhenFinished = false;
    this->ParticleDepth = 100.00f;
    this->ScalingMode = EScreenParticleScalingMode::FitToViewport;
    this->bOnlyOwnerSee = true;
    this->bAlwaysVisible = true;
    this->bTickParticleEvenWhenPaused = false;
    this->bLetSystemFinishAfterStopping = false;
}

