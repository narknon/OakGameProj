#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "EnumerateTelemetryCommandlet.generated.h"

UCLASS(NonTransient)
class GBXSPARK_API UEnumerateTelemetryCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UEnumerateTelemetryCommandlet();
};

