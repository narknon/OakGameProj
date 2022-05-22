#pragma once
#include "CoreMinimal.h"
#include "EnvQueryGenerator_TargetableActors.h"
#include "EnvQueryGenerator_PlayerTarget.generated.h"

UCLASS(EditInlineNew)
class OAKGAME_API UEnvQueryGenerator_PlayerTarget : public UEnvQueryGenerator_TargetableActors {
    GENERATED_BODY()
public:
    UEnvQueryGenerator_PlayerTarget();
};

