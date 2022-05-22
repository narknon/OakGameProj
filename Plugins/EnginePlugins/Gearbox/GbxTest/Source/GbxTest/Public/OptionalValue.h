#pragma once
#include "CoreMinimal.h"
#include "OptionalValue.generated.h"

USTRUCT(BlueprintType)
struct FOptionalValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnabled;
    
    GBXTEST_API FOptionalValue();
};

