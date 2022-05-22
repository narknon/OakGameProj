#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AIAspectSettings_Plan.generated.h"

class UAIPlanData;

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_Plan {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UAIPlanData*> PlansAlwaysAvailableToMe;
    
    UPROPERTY(EditAnywhere)
    TArray<FGameplayTag> RoleTags;
    
    FAIAspectSettings_Plan();
};

