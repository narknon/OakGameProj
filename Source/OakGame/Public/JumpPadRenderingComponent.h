#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "JumpPadRenderingComponent.generated.h"

UCLASS(Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UJumpPadRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UJumpPadRenderingComponent();
};

