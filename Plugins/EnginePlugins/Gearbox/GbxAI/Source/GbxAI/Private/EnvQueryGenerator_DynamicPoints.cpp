#include "EnvQueryGenerator_DynamicPoints.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryGenerator_DynamicPoints::UEnvQueryGenerator_DynamicPoints() {
    this->bUseLayers = false;
    this->NumberOfPointsMin = 3;
    this->NumberOfPointsMax = 120;
    this->bDefineArc = false;
    this->Center = UEnvQueryContext_Querier::StaticClass();
}

