#include "EnvQueryGenerator_Cover.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryGenerator_Cover::UEnvQueryGenerator_Cover() {
    this->SearchCenter = UEnvQueryContext_Querier::StaticClass();
    this->SlotType = NULL;
}

