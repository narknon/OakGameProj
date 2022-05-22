#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "AttributeBaseValueData.generated.h"

class UGbxAttributeData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FAttributeBaseValueData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGbxAttributeData* AttributeToSetBaseValueOf;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData BaseValue;
    
    FAttributeBaseValueData();
};

