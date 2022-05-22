#include "EnvQueryGenerator_SmartAction.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryGenerator_SmartAction::UEnvQueryGenerator_SmartAction() {
    this->SearchCenter = UEnvQueryContext_Querier::StaticClass();
    this->TerritoryArea = ETerritoryType::Patrol;
    this->bUseTerritoryArea = false;
}

