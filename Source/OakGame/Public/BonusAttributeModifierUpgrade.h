#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "BonusAttributeModifierUpgrade.generated.h"

USTRUCT(BlueprintType)
struct FBonusAttributeModifierUpgrade {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 GradeToApplyAt;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData BonusUpgrade;
    
    OAKGAME_API FBonusAttributeModifierUpgrade();
};

