#pragma once
#include "CoreMinimal.h"
#include "OptionalName.h"
#include "OptionalTextureLODGroup.generated.h"

USTRUCT(BlueprintType)
struct FOptionalTextureLODGroup : public FOptionalName {
    GENERATED_BODY()
public:
    GBXTEST_API FOptionalTextureLODGroup();
};

