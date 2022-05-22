#include "EnvQueryTest_DigicloneTrace.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_DigicloneTrace::UEnvQueryTest_DigicloneTrace() {
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->Radius = 45.00f;
}

