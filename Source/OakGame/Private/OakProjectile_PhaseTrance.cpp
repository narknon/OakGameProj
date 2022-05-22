#include "OakProjectile_PhaseTrance.h"
#include "Net/UnrealNetwork.h"

class UPrimitiveComponent;
class AActor;




void AOakProjectile_PhaseTrance::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult) {
}


void AOakProjectile_PhaseTrance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOakProjectile_PhaseTrance, ActivationComboData);
}

AOakProjectile_PhaseTrance::AOakProjectile_PhaseTrance() {
    this->bWantsOverlappedEvents = false;
    this->bWantsOverlappedEnemyEvents = false;
    this->bWantsOverlappedFriendlyEvents = false;
    this->bWantsOverlappedNeutralEvents = false;
}

