#include "EnvQueryGenerator_FindPerch.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryGenerator_FindPerch::UEnvQueryGenerator_FindPerch() {
    this->PerchType = NULL;
    this->SearchCenter = UEnvQueryContext_Querier::StaticClass();
}

