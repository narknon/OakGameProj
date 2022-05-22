#pragma once
#include "CoreMinimal.h"
#include "RebindContextAndDescription.h"
#include "GamepadStickTypeToSchemes.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FGamepadStickTypeToSchemes {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FRebindContextAndDescription> SchemesWithStickType;
    
    FGamepadStickTypeToSchemes();
};

