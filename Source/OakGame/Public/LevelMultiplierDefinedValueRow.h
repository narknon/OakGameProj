#pragma once
#include "CoreMinimal.h"
#include "AttributeDefinedValueRow.h"
#include "AttributeInitializationData.h"
#include "LevelMultiplierDefinedValueRow.generated.h"

USTRUCT(BlueprintType)
struct FLevelMultiplierDefinedValueRow : public FAttributeDefinedValueRow {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Multiplier;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Level;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Offset;
    
public:
    OAKGAME_API FLevelMultiplierDefinedValueRow();
};

