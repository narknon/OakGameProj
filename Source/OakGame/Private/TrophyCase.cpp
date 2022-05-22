#include "TrophyCase.h"
#include "Net/UnrealNetwork.h"

void ATrophyCase::OnRep_TrophyCaseReplicatedSets() {
}

void ATrophyCase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATrophyCase, TrophyCaseReplicatedSets);
}

ATrophyCase::ATrophyCase() {
}

