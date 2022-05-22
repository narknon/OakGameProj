#pragma once
#include "CoreMinimal.h"
#include "AttributeDefinedValueRow.h"
#include "AttributeInitializationData.h"
#include "PlaythroughDefinedValueRow.generated.h"

USTRUCT(BlueprintType)
struct FPlaythroughDefinedValueRow : public FAttributeDefinedValueRow {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData PlaythroughOne;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData PlaythroughTwoAndBeyond;
    
public:
    OAKGAME_API FPlaythroughDefinedValueRow();
};

