#pragma once
#include "CoreMinimal.h"
#include "BoneFatigueParams.generated.h"

USTRUCT(BlueprintType)
struct FBoneFatigueParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float CurrentFatigue;
    
    UPROPERTY(EditAnywhere)
    float FatigueDissipationRate;
    
    GBXGAMESYSTEMCORE_API FBoneFatigueParams();
};

