#pragma once
#include "CoreMinimal.h"
#include "PawnInterpolationInfo.generated.h"

USTRUCT(BlueprintType)
struct FPawnInterpolationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float TranslationTime;
    
    UPROPERTY(EditAnywhere)
    float RotationTime;
    
    OAKGAME_API FPawnInterpolationInfo();
};

