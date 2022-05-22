#pragma once
#include "CoreMinimal.h"
#include "MaterialParameterData.generated.h"

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FMaterialParameterData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    FMaterialParameterData();
};

