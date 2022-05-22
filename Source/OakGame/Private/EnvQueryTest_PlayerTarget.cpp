#include "EnvQueryTest_PlayerTarget.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_PlayerTarget::UEnvQueryTest_PlayerTarget() {
    this->SourceContext = UEnvQueryContext_Querier::StaticClass();
}

