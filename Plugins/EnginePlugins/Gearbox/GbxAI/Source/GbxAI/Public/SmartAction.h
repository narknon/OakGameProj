#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SmartAction.generated.h"

class AActor;

USTRUCT()
struct GBXAI_API FSmartAction {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<AActor> SmartObject;
    
    UPROPERTY()
    FGameplayTag ActionTag;
    
    FSmartAction();
};

