#include "PhaseTranceSingularityActor.h"
#include "Net/UnrealNetwork.h"

void APhaseTranceSingularityActor::OnRep_SingularityRadius() {
}


void APhaseTranceSingularityActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APhaseTranceSingularityActor, SingularityRadius);
}

APhaseTranceSingularityActor::APhaseTranceSingularityActor() {
    this->IgnoreActor = NULL;
    this->SingularityRadius = 0.00f;
}

