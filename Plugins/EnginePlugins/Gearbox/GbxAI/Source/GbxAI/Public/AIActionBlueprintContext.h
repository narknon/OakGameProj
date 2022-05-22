#pragma once
#include "CoreMinimal.h"
#include "AIActionBlueprintContext.generated.h"

class AGbxAIController;

USTRUCT(BlueprintType)
struct GBXAI_API FAIActionBlueprintContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AGbxAIController* Controller;
    
    FAIActionBlueprintContext();
};

