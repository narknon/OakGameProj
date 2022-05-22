#pragma once
#include "CoreMinimal.h"
#include "CohtmlComponent.h"
#include "HummingbirdComponent.generated.h"

UCLASS(EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHummingbirdComponent : public UCohtmlComponent {
    GENERATED_BODY()
public:
    UHummingbirdComponent();
};

