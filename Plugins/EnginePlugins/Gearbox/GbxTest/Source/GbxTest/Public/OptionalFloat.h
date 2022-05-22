#pragma once
#include "CoreMinimal.h"
#include "OptionalValue.h"
#include "OptionalFloat.generated.h"

USTRUCT(BlueprintType)
struct FOptionalFloat : public FOptionalValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    GBXTEST_API FOptionalFloat();
};

