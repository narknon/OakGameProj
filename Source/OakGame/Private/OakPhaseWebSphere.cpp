#include "OakPhaseWebSphere.h"
#include "Net/UnrealNetwork.h"

class UPrimitiveComponent;
class AActor;
class UOakActionAbility_PhaseTrance;

void AOakPhaseWebSphere::RemoveAllWebTargets() {
}



void AOakPhaseWebSphere::OnEndActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AOakPhaseWebSphere::OnBeginActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

TArray<FOakPhaseWebSphereLinkedTargetItem> AOakPhaseWebSphere::GetWebTargets() const {
    return TArray<FOakPhaseWebSphereLinkedTargetItem>();
}


UOakActionAbility_PhaseTrance* AOakPhaseWebSphere::GetOwnerActionAbilityPhaseTrance() const {
    return NULL;
}



void AOakPhaseWebSphere::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOakPhaseWebSphere, ActivationComboData);
    DOREPLIFETIME(AOakPhaseWebSphere, LinkedTargetList);
}

AOakPhaseWebSphere::AOakPhaseWebSphere() {
    this->SapDamageReturnRate = 1.00f;
    this->SphereOutOfBoundsBuffer = 50.00f;
    this->CachedOwnerActionAbilityPhaseTrance = NULL;
    this->OwnerTeam = NULL;
}

