#include "EnvQueryGenerator_TargetableActors.h"

UEnvQueryGenerator_TargetableActors::UEnvQueryGenerator_TargetableActors() {
    this->TargetSkipDistanceCheckCondition = NULL;
    this->bAllowNonTargetableActors = false;
    this->bAllowDeadActors = false;
    this->bAllowQuerier = false;
    this->bAllowHostiles = true;
    this->bAllowFriendlies = false;
    this->bAllowNeutrals = false;
    this->TargetCondition = NULL;
    this->bUseAllowedTypes = false;
    this->bUseDisallowedTypes = false;
}

