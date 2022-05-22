#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "WindVectorField.generated.h"

USTRUCT(BlueprintType)
struct FWindVectorField {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FIntVector VectorFieldSize;
    
    UPROPERTY(VisibleAnywhere)
    FBox Bounds;
    
    OAKGAME_API FWindVectorField();
};

