#pragma once
#include "CoreMinimal.h"
#include "EscortPathValidation.generated.h"

USTRUCT(BlueprintType)
struct FEscortPathValidation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotateAngleToSearchPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ValidatePathAnticipationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ValidatePathFowardDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ValidatePathIteration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanGoIfValidationFailed;
    
    OAKGAME_API FEscortPathValidation();
};

