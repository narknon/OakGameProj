#pragma once
#include "CoreMinimal.h"
#include "MaterialArray.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMaterialArray {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UMaterialInterface*> Materials;
    
    GBXGAMESYSTEMCORE_API FMaterialArray();
};

