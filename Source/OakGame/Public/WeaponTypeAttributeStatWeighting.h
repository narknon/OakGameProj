#pragma once
#include "CoreMinimal.h"
#include "WeightedWeaponUIStat.h"
#include "WeaponTypeAttributeStatWeighting.generated.h"

class UWeaponTypeData;

USTRUCT(BlueprintType)
struct OAKGAME_API FWeaponTypeAttributeStatWeighting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWeaponTypeData* WeaponType;
    
    UPROPERTY(EditAnywhere)
    TArray<FWeightedWeaponUIStat> WeightedStats;
    
    FWeaponTypeAttributeStatWeighting();
};

