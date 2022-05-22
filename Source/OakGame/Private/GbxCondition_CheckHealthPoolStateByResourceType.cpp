#include "GbxCondition_CheckHealthPoolStateByResourceType.h"

UGbxCondition_CheckHealthPoolStateByResourceType::UGbxCondition_CheckHealthPoolStateByResourceType() {
    this->ResourceType = NULL;
    this->ResourcePoolState = EGameResourcePoolState::RPS_Depleted;
}

