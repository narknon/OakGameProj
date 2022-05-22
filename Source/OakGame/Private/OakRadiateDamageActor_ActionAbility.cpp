#include "OakRadiateDamageActor_ActionAbility.h"

class UPrimitiveComponent;
class AActor;


void AOakRadiateDamageActor_ActionAbility::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


AOakRadiateDamageActor_ActionAbility::AOakRadiateDamageActor_ActionAbility() {
    this->CollisionPrimitive = NULL;
    this->bBlocksActionAbilityShutdown = false;
    this->bIsShuttingDown = false;
    this->OwnerTeam = NULL;
}

