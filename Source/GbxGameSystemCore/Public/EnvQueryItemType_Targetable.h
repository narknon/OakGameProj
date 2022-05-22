#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"
#include "EnvQueryItemType_Targetable.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API UEnvQueryItemType_Targetable : public UEnvQueryItemType_Actor {
    GENERATED_BODY()
public:
    UEnvQueryItemType_Targetable();
};

