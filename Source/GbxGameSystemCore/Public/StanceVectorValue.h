#pragma once
#include "CoreMinimal.h"
#include "EStanceValueOverrideType.h"
#include "UObject/NoExportTypes.h"
#include "StanceVectorValue.generated.h"

USTRUCT()
struct FStanceVectorValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EStanceValueOverrideType ValueType;
    
    UPROPERTY(EditAnywhere)
    FVector Value;
    
    GBXGAMESYSTEMCORE_API FStanceVectorValue();
};

