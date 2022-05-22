#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TrailVectorParam.generated.h"

USTRUCT(BlueprintType)
struct FTrailVectorParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    UPROPERTY(EditAnywhere)
    FVector Value;
    
    OAKGAME_API FTrailVectorParam();
};

