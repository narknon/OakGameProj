#pragma once
#include "CoreMinimal.h"
#include "CarnivoraDamageZoneInfo.generated.h"

USTRUCT(BlueprintType)
struct FCarnivoraDamageZoneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float FrontDamageMultiplier;
    
    UPROPERTY(EditAnywhere)
    float SideDamageMultiplier;
    
    UPROPERTY(EditAnywhere)
    float BackDamageMultiplier;
    
    OAKGAME_API FCarnivoraDamageZoneInfo();
};

