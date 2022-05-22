#pragma once
#include "CoreMinimal.h"
#include "TrackedFirstPersonComponent.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FTrackedFirstPersonComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USceneComponent* Component;
    
    GBXGAMESYSTEMCORE_API FTrackedFirstPersonComponent();
};

