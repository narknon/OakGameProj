#pragma once
#include "CoreMinimal.h"
#include "StandInLightComponentInstance.generated.h"

class ULightComponent;

USTRUCT(BlueprintType)
struct FStandInLightComponentInstance {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    ULightComponent* Component;
    
    OAKGAME_API FStandInLightComponentInstance();
};

