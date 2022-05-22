#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "EyesOfDeathComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEyesOfDeathComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UEyesOfDeathComponent();
};

