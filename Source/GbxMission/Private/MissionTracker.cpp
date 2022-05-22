#include "MissionTracker.h"
#include "Net/UnrealNetwork.h"

class AActor;
class UGameStatData;

void AMissionTracker::OnStatIncrement(AActor* StatContext, UGameStatData* StatId, int32 Amount) {
}

void AMissionTracker::OnRep_LevelLoadEventsIssued() {
}

void AMissionTracker::OnRep_ActiveIcons() {
}

void AMissionTracker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMissionTracker, DefendTarget);
    DOREPLIFETIME(AMissionTracker, bLevelLoadEventsIssued);
    DOREPLIFETIME(AMissionTracker, ActiveIcons);
}

AMissionTracker::AMissionTracker() {
    this->DebugActivatedMission = NULL;
    this->JumpedTooObjectiveSet = NULL;
    this->bLevelLoadEventsIssued = false;
}

