#include "EnvQueryGenerator_TargetActorInfo.h"

UEnvQueryGenerator_TargetActorInfo::UEnvQueryGenerator_TargetActorInfo() {
    this->MaxAge = 0.00f;
    this->bAllowHostiles = true;
    this->bAllowFriendlies = false;
    this->bAllowNeutrals = false;
    this->bUseAllowedTypes = false;
}

