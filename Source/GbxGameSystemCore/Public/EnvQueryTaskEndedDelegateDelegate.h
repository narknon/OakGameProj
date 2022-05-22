#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "UObject/NoExportTypes.h"
#include "EnvQueryTaskEndedDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEnvQueryTaskEndedDelegate, const FEnvQueryResult&, QueryResult, FVector, Location, AActor*, Actor);

