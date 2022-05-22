#include "CharacterSlidingData.h"

UCharacterSlidingData::UCharacterSlidingData() {
    this->MinSprintSpeedPctToStartSliding = 0.90f;
    this->ControlledMove = NULL;
    this->FootBone = TEXT("L_Foot");
    this->FootImpact = NULL;
    this->FootImpact1st = NULL;
    this->WwiseEventStart = NULL;
    this->WwiseEventStop = NULL;
    this->BaseBone = TEXT("Root");
    this->SpeedParticleParameterName = TEXT("Speed");
    this->BaseImpact = NULL;
    this->LegsRotationSpeed = 10.00f;
    this->MinDesiredAngleRotationBetweenCameraAndLegsYaw = 10.00f;
    this->MaxAllowedAimOffset = 45.00f;
    this->FootCollisionDistance = 175.00f;
    this->FootTraceLateralOffset = 7.00f;
    this->FootCollisionStopAngle = 45.00f;
    this->FootCollisionStopAngleDot = -0.71f;
    this->FootCollisionStopSpeed = 100.00f;
    this->LegsCollisionInterpolationSpeed = 180.00f;
    this->MinSprintSpeedPctToTriggerSlideJump = 0.80f;
    this->JumpHorizontalSpeedScale = 1.00f;
    this->MinForceSlideFloorAngle = 30.00f;
    this->ForceSlideFloorZ = 0.87f;
    this->MinDownhillSpeedToStartForcedSlide = 100.00f;
    this->MaxDirectionDeviationFromDownhillAngle = 30.00f;
}

