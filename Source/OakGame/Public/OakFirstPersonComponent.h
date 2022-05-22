#pragma once
#include "CoreMinimal.h"
#include "FirstPersonComponent.h"
#include "OakFirstPersonComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakFirstPersonComponent : public UFirstPersonComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float CenterCrosshairAdjustedZ;
    
    UOakFirstPersonComponent();
};

