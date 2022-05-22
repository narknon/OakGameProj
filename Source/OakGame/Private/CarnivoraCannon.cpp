#include "CarnivoraCannon.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"

class AActor;

AActor* ACarnivoraCannon::GetCannon() {
    return NULL;
}

void ACarnivoraCannon::FireCannon() {
}

ACarnivoraCannon::ACarnivoraCannon() {
    this->CannonMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkullCannon"));
    this->Shell = NULL;
    this->ShellComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shell"));
    this->Cannon = NULL;
    this->Carnivora = NULL;
    this->SplineFollower = NULL;
    this->AimingAngle = 0.00f;
    this->ProjectileClass = NULL;
    this->ShellClass = NULL;
    this->NumberOfProjectile = 3;
    this->FrontStartingDistance = 6000.00f;
    this->HorizontalDispersionAngle = 15.00f;
    this->VerticalToHorizontalDispersionRatio = 0.25f;
    this->ProjectileSpreadAngle = 7.50f;
    this->ProjectileSpeed = 10000.00f;
    this->ShellLinearVelocity = 5000.00f;
    this->TargetDistanceAheadOnSpline = 35000.00f;
}

