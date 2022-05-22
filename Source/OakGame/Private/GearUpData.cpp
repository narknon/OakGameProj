#include "GearUpData.h"

UClass* UGearUpData::GetRequiredInterface() {
    return NULL;
}

bool UGearUpData::EnabledConditionRequiresNativeClass() {
    return false;
}

UGearUpData::UGearUpData() {
    this->DeathCircleMesh = NULL;
    this->DeathCircleMaterial = NULL;
    this->DeathCircleWaypointClass = NULL;
    this->NextDeathCircleWaypointClass = NULL;
    this->DeathCircleScreenParticle = NULL;
    this->FogParticle = NULL;
    this->OutOfCircleDamageData = NULL;
    this->DeathCircleWaypointCondition = NULL;
    this->WallAudioLoopStart = NULL;
    this->DistanceToWallRtpc = NULL;
    this->WallOrientationXRtpc = NULL;
    this->WallOrientationYRtpc = NULL;
    this->AudioTransitionToOmni = 1000.00f;
    this->AudioFadeTimeOnExit = 3.00f;
    this->PlayerEnteredStormAudioEvent = NULL;
    this->PlayerExitedStormAudioEvent = NULL;
    this->EnemyStatusEffect = NULL;
    this->PlayerStatusEffect = NULL;
    this->ModeStatusEffect = NULL;
    this->AllowableBankOverfill = 10;
    this->DlcPackageData = NULL;
    this->ExtractedGearStat = NULL;
    this->ExtractedGearAchievement = EOakAchievements::DLC5_Extract100PiecesOfGear;
    this->ExtractedGearAchievementCount = 100;
}

