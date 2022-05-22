#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "QuietTimePredicate.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class UQuietTimePredicate : public UObject {
    GENERATED_BODY()
public:
    UQuietTimePredicate();
};

