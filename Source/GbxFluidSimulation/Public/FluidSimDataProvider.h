#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FluidSimDataProvider.generated.h"

UCLASS(Abstract, EditInlineNew)
class UFluidSimDataProvider : public UObject {
    GENERATED_BODY()
public:
    UFluidSimDataProvider();
};

