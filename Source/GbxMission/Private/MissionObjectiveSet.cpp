#include "MissionObjectiveSet.h"

UMissionObjectiveSet::UMissionObjectiveSet() {
    this->BreadcrumbLinkedObjective = NULL;
    this->DisplayedBreadcrumbLinkedObjective = NULL;
    this->NextSet = NULL;
    this->bCanCompleteMission = false;
    this->bAutoAdvanceToNextSet = false;
    this->bOutOfMapWaypoints = true;
    this->bContainsRequiredObjectives = false;
    this->bContainsClearIfNotCompleteObjectives = false;
}

