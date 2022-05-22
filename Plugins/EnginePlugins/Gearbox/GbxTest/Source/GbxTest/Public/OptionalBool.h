#pragma once
#include "CoreMinimal.h"
#include "OptionalValue.h"
#include "OptionalBool.generated.h"

USTRUCT(BlueprintType)
struct FOptionalBool : public FOptionalValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Value;
    
    GBXTEST_API FOptionalBool();
};

