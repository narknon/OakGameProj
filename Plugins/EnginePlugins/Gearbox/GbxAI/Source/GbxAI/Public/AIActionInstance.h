#pragma once
#include "CoreMinimal.h"
#include "AIActionInstance.generated.h"

class UGameplayTask;
class UAIAction;

USTRUCT(BlueprintType)
struct FAIActionInstance {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGameplayTask* ScriptedGameplayTask;
    
    UPROPERTY()
    UAIAction* Action;
    
    GBXAI_API FAIActionInstance();
};

