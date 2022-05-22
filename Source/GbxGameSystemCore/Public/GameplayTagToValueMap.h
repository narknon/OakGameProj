#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "GameplayTagContainer.h"
#include "GameplayTagToValueMap.generated.h"

USTRUCT(BlueprintType)
struct FGameplayTagToValueMap {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag Tag;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ValueIfContextHasTag;
    
    GBXGAMESYSTEMCORE_API FGameplayTagToValueMap();
};

