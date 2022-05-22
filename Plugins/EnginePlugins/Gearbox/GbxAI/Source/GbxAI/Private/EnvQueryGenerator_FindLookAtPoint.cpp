#include "EnvQueryGenerator_FindLookAtPoint.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryGenerator_FindLookAtPoint::UEnvQueryGenerator_FindLookAtPoint() {
    this->LookAtPointType = ELookAtPointType::Interrupt;
    this->SearchCenter = UEnvQueryContext_Querier::StaticClass();
}

