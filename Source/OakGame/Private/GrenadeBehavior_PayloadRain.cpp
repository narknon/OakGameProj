#include "GrenadeBehavior_PayloadRain.h"

UGrenadeBehavior_PayloadRain::UGrenadeBehavior_PayloadRain() {
    this->RainShotHeight = 400.00f;
    this->RainShotAudioEvent = NULL;
    this->RainSplitSpeed = 2500.00f;
    this->RainSplitAcceleration = 2500.00f;
    this->RainSplitDelay = 0.70f;
    this->RainChildExplosionRadiusScale = 0.75f;
    this->RainSplitAngleOffset = 45.00f;
    this->RainSplitShotDelay = 0.30f;
    this->RainSplitShotSpawnDistanceFromSource = 10.00f;
    this->RainSplitAudioEvent = NULL;
    this->RainSplitEndAudioEvent = NULL;
}

