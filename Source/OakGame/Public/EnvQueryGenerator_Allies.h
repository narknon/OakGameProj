#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "OakPlayerAbilityAllyQuerySpec.h"
#include "EnvQueryGenerator_Allies.generated.h"

UCLASS(EditInlineNew)
class OAKGAME_API UEnvQueryGenerator_Allies : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FOakPlayerAbilityAllyQuerySpec Spec;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIncludeSelf;
    
public:
    UEnvQueryGenerator_Allies();
};

