#include "EnvQueryGenerator_AINodes.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryGenerator_AINodes::UEnvQueryGenerator_AINodes() {
    this->SearchCenter = UEnvQueryContext_Querier::StaticClass();
    this->bUseAllowedTypes = false;
    this->bUseDisallowedTypes = false;
}

