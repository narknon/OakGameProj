#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ActiveAmbientUpdater.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class UActiveAmbientUpdater : public UObject {
    GENERATED_BODY()
public:
    UActiveAmbientUpdater();
};

