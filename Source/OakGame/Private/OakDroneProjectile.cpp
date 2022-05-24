#include "OakDroneProjectile.h"
#include "OakDamageComponent.h"
#include "Components/SphereComponent.h"
#include "OakDroneProjectileMovementComponent.h"
#include "TargetableComponent.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"

class AActor;

void AOakDroneProjectile::SetMovementTarget(AActor* MovementTarget) {
}

AActor* AOakDroneProjectile::GetMovementTarget() const {
    return NULL;
}

AOakDroneProjectile::AOakDroneProjectile() {
    this->Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
    this->DroneMovement = CreateDefaultSubobject<UOakDroneProjectileMovementComponent>(TEXT("DroneMovement"));
    this->OakDamage = CreateDefaultSubobject<UOakDamageComponent>(TEXT("OakDamage"));
    this->Targetable = CreateDefaultSubobject<UTargetableComponent>(TEXT("Targetable"));
    this->Targeting = NULL;
    this->AIPerceptionStimuliSource = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSource"));
    this->bUseTargetOfMovementTarget = false;
    this->PlayerAlertType = EPlayerAlertType::Neutral;
}

