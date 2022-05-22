#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AIActionSettings_Plan.generated.h"

class UAIPlanData;

USTRUCT(BlueprintType)
struct GBXAI_API FAIActionSettings_Plan {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UAIPlanData*> PlansAlwaysAvailableToMe;
    
    UPROPERTY(EditAnywhere)
    TArray<FGameplayTag> RoleTags;
    
    FAIActionSettings_Plan();
};

