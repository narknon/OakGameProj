#pragma once
#include "CoreMinimal.h"
#include "OptionalValue.h"
#include "OptionalName.generated.h"

USTRUCT(BlueprintType)
struct FOptionalName : public FOptionalValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Value;
    
    GBXTEST_API FOptionalName();
};

