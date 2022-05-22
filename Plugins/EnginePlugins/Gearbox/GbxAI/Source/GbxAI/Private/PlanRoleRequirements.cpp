#include "PlanRoleRequirements.h"

FPlanRoleRequirements::FPlanRoleRequirements() {
    this->MinInstancesOfRole = 0;
    this->MaxInstancesOfRole = 0;
    this->AdditionalStartCondition = NULL;
    this->bAlsoUseStartConditionAsStopCondition = false;
    this->AdditionalStopCondition = NULL;
    this->MemberReplacementStrategy = EPlanMemberReplacement::AbandonPlanIfKilled;
}

