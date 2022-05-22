#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SmartObjectActionSet.generated.h"

USTRUCT(BlueprintType)
struct FSmartObjectActionSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer Actions;
    
    GBXAI_API FSmartObjectActionSet();
};

