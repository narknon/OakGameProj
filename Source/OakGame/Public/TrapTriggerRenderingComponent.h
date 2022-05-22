#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TrapTriggerRenderingComponent.generated.h"

class AInteractiveObject;

UCLASS(Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTrapTriggerRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<AInteractiveObject*> TrapLinks;
    
public:
    UTrapTriggerRenderingComponent();
};

