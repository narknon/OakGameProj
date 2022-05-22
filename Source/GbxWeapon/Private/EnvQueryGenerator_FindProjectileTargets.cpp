#include "EnvQueryGenerator_FindProjectileTargets.h"

UEnvQueryGenerator_FindProjectileTargets::UEnvQueryGenerator_FindProjectileTargets() {
    this->TargetSkipRangeCheckCondition = NULL;
    this->bAllowHostiles = true;
    this->bAllowFriendlies = false;
    this->bAllowNeutrals = false;
    this->bAlsoFindTargetableComponents = false;
    this->bIgnoreNonHostileAttachedParent = true;
}

