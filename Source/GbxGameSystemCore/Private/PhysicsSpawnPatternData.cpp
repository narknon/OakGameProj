#include "PhysicsSpawnPatternData.h"

UPhysicsSpawnPatternData::UPhysicsSpawnPatternData() {
    this->bEnableSpeedRange = false;
    this->bEnableAngularSpeedRange = false;
    this->bApplySpeedAsImpulse = true;
    this->bApplyAngularSpeedAsImpulse = true;
    this->bPickRandomPointInActorBounds = false;
    this->bScaleSpeedByIncomingImpulse = false;
    this->Speed = 400.00f;
    this->MaxSpeed = 600.00f;
    this->AngularSpeed = 540.00f;
    this->MaxAngularSpeed = 720.00f;
}

