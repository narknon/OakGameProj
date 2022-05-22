#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "AttributeConditionalValue.generated.h"

class UGbxCondition;

USTRUCT(BlueprintType)
struct FAttributeConditionalValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ValueIfAllConditionsAreTrue;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UGbxCondition*> Conditions;
    
    GBXGAMESYSTEMCORE_API FAttributeConditionalValue();
};

