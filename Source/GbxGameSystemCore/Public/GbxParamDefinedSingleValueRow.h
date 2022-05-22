#pragma once
#include "CoreMinimal.h"
#include "AttributeDefinedValueRow.h"
#include "GbxParam.h"
#include "GbxParamDefinedSingleValueRow.generated.h"

USTRUCT()
struct FGbxParamDefinedSingleValueRow : public FAttributeDefinedValueRow {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxParam Value;
    
    GBXGAMESYSTEMCORE_API FGbxParamDefinedSingleValueRow();
};

