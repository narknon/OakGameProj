#pragma once
#include "CoreMinimal.h"
#include "OptionalName.h"
#include "OptionalTextureCompressionMethod.generated.h"

USTRUCT(BlueprintType)
struct FOptionalTextureCompressionMethod : public FOptionalName {
    GENERATED_BODY()
public:
    GBXTEST_API FOptionalTextureCompressionMethod();
};

