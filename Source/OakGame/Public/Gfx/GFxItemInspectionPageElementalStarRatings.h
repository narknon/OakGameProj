#pragma once
#include "CoreMinimal.h"
#include "GFxItemInspectionPageElementalStarRatings.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxItemInspectionPageElementalStarRatings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float VsFlesh;
    
    UPROPERTY(EditAnywhere)
    float VsShield;
    
    UPROPERTY(EditAnywhere)
    float VsArmor;
    
    FGFxItemInspectionPageElementalStarRatings();
};

