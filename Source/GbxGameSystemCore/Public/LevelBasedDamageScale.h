#pragma once
#include "CoreMinimal.h"
#include "LevelBasedDamageScale.generated.h"

USTRUCT(BlueprintType)
struct FLevelBasedDamageScale {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 LevelDifference;
    
    UPROPERTY(EditAnywhere)
    float HigherLevelAttackerDmgScale;
    
    UPROPERTY(EditAnywhere)
    float LowerLevelAttackerDmgScale;
    
    GBXGAMESYSTEMCORE_API FLevelBasedDamageScale();
};

