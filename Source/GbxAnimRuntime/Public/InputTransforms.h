#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputTransforms.generated.h"

USTRUCT(BlueprintType)
struct FInputTransforms {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTransform> Transforms;
    
    GBXANIMRUNTIME_API FInputTransforms();
};

