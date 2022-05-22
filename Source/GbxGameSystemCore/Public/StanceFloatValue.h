#pragma once
#include "CoreMinimal.h"
#include "EStanceValueOverrideType.h"
#include "StanceFloatValue.generated.h"

USTRUCT(BlueprintType)
struct FStanceFloatValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EStanceValueOverrideType ValueType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Value;
    
    GBXGAMESYSTEMCORE_API FStanceFloatValue();
};

