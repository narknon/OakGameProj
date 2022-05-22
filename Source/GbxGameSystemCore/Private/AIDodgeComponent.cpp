#include "AIDodgeComponent.h"

class UObject;
class AActor;

void UAIDodgeComponent::TriggerZoneDodge(UObject* WorldContextObject, AActor* TargetActor, const FVector& ZoneLoc, const FVector& ZoneVel, AActor* ActorRef) {
}

void UAIDodgeComponent::TriggerGrenadeDodge(UObject* WorldContextObject, const FVector& GrenadeLoc, AActor* Instigator, float ExtraDelay) {
}

bool UAIDodgeComponent::TriggerDodge(EAIDodgeType Type, const FVector& SourceLoc, AActor* SourceActor, float ExtraDelay, bool bForced) {
    return false;
}

void UAIDodgeComponent::TriggerBulletDodge(UObject* WorldContextObject, const FVector& MuzzleLoc, const FVector& BulletVel, AActor* Instigator) {
}

UAIDodgeComponent::UAIDodgeComponent() {
    this->IsDodging = false;
    this->TeamComponent = NULL;
    this->ActionComponent = NULL;
    this->BlackboardComponent = NULL;
    this->BrainComponent = NULL;
    this->NavComponent = NULL;
    this->MovementComponent = NULL;
}

