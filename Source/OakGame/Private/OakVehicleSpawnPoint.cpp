#include "OakVehicleSpawnPoint.h"

class USpawnPointComponent;
class AActor;

void AOakVehicleSpawnPoint::TriggerOnVehicleSpawned(USpawnPointComponent* SpawnerComponent, AActor* Actor) {
}

void AOakVehicleSpawnPoint::PostSpawnIntro(AActor* Actor) {
}

AOakVehicleSpawnPoint::AOakVehicleSpawnPoint() {
    this->bDigistructOnSpawn = false;
    this->bSpawnAttached = false;
    this->bAllowInterpolationToGround = false;
    this->IntroSpline = NULL;
    this->IntroSplineOffset = 0.00f;
    this->IntroSplineAIAction = NULL;
    this->PatrolSpline = NULL;
    this->PatrolSplineOffset = 0.00f;
    this->bPatrolSpline = false;
    this->PatrolSplineAIAction = NULL;
    this->ReplaceDefaultAITree = NULL;
    this->RubberbandWantedSpeed = -1.00f;
    this->bApplyRubberbandOnIntro = false;
}

