#include "MissionObjective.h"

UMissionObjective::UMissionObjective() {
    this->ObjectiveCount = 0;
    this->GameStat = NULL;
    this->bRememberIndividualState = false;
    this->bAllOrNothing = false;
    this->bClearIfActiveSetNotComplete = false;
    this->bAutoUpdateIfActivatedInMissionLevel = false;
    this->bInvisible = false;
    this->bBreadcrumb = false;
    this->bBreadcrumbNoClear = false;
    this->bBreadcrumbLinked = false;
    this->bOptional = false;
    this->bPauseObjectiveChain = false;
    this->bAdvanceChainOnLevelLoad = false;
    this->bWantsPlanetTravel = false;
    this->bGrantsStarterGear = false;
    this->bOnlyActiveIfAnyPlayerInVehicle = false;
    this->bOnlyActiveIfNoPlayersInVehicle = false;
    this->bOnlyActiveIfMissionVehicleNotSpawned = false;
    this->bOnlyActiveIfTravelIdActive = false;
    this->bOnlyActiveIfTravelIdNotActive = false;
    this->bOnlyActiveIfMissionWeaponWielded = false;
    this->bOnlyActiveIfMissionWeaponNotWielded = false;
    this->bOnlyActiveIfStateStable = false;
    this->bOnlyActiveIfStateTransitioning = false;
    this->bAutoClearWhenNoLongerDormant = false;
    this->bObjectiveChainHead = false;
    this->bObjectiveChainMember = false;
    this->bRequiredForObjectiveSetAdvance = false;
    this->bSuppressEmptyCheckbox = false;
    this->OptionalRewardData = NULL;
}

