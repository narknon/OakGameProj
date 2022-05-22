#pragma once
#include "CoreMinimal.h"
#include "OptionalValue.h"
#include "OptionalInt32.generated.h"

USTRUCT(BlueprintType)
struct FOptionalInt32 : public FOptionalValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Value;
    
    GBXTEST_API FOptionalInt32();
};

