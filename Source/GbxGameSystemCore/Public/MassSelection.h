#pragma once
#include "CoreMinimal.h"
#include "EMassSelection.h"
#include "MassSelection.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FMassSelection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EMassSelection Selection;
    
    UPROPERTY(EditAnywhere)
    FName Preset;
    
    UPROPERTY(EditAnywhere)
    float Mass;
    
    FMassSelection();
};

