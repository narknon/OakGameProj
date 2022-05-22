#pragma once
#include "CoreMinimal.h"
#include "ImpactResponseEffect.h"
#include "ImpactResponseInfo.h"
#include "ElementalSlideEffect.generated.h"

USTRUCT(BlueprintType)
struct FElementalSlideEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FImpactResponseEffect DefaultResponse;
    
    UPROPERTY(EditAnywhere)
    TArray<FImpactResponseInfo> ImpactResponses;
    
    OAKGAME_API FElementalSlideEffect();
};

