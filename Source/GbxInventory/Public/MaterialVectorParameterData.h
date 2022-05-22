#pragma once
#include "CoreMinimal.h"
#include "MaterialParameterData.h"
#include "UObject/NoExportTypes.h"
#include "MaterialVectorParameterData.generated.h"

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FMaterialVectorParameterData : public FMaterialParameterData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FLinearColor Vector;
    
    FMaterialVectorParameterData();
};

