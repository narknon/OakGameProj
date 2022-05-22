#include "ScreenParticleInitParams.h"

FScreenParticleInitParams::FScreenParticleInitParams() {
    this->Template = NULL;
    this->bHideWhenFinished = false;
    this->bDestroyWhenFinished = false;
    this->bOnlyOwnerSee = false;
    this->bAlwaysVisible = false;
    this->bAllowMultipleInstances = false;
    this->bTickEvenWhenPaused = false;
    this->bHideDuringInGameMenu = false;
    this->bDepthPriorityWorld = false;
    this->ParticleDepth = 0.00f;
    this->ScalingMode = EScreenParticleScalingMode::FitToHorizontal;
    this->OwnerOverride = NULL;
}

