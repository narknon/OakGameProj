#pragma once
#include "CoreMinimal.h"
#include "AttributeDefinedValueRow.h"
#include "AttributeInitializationData.h"
#include "AttributeDefinedSingleValueRow.generated.h"

USTRUCT()
struct FAttributeDefinedSingleValueRow : public FAttributeDefinedValueRow {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Value;
    
    GBXGAMESYSTEMCORE_API FAttributeDefinedSingleValueRow();
};

