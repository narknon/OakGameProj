#pragma once
#include "CoreMinimal.h"
#include "OptionalName.h"
#include "OptionalLODGroup.generated.h"

USTRUCT(BlueprintType)
struct FOptionalLODGroup : public FOptionalName {
    GENERATED_BODY()
public:
    GBXTEST_API FOptionalLODGroup();
};

