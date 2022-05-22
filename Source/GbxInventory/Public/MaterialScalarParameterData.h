#pragma once
#include "CoreMinimal.h"
#include "MaterialParameterData.h"
#include "MaterialScalarParameterData.generated.h"

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FMaterialScalarParameterData : public FMaterialParameterData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Scalar;
    
    FMaterialScalarParameterData();
};

