#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EUIStatValueStyle.h"
#include "WeightedWeaponUIStat.generated.h"

class UGbxAttributeData;

USTRUCT(BlueprintType)
struct OAKGAME_API FWeightedWeaponUIStat {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatInterval NormalizationRange;
    
    UPROPERTY(EditAnywhere)
    UGbxAttributeData* Attribute;
    
    UPROPERTY(EditAnywhere)
    EUIStatValueStyle ValueStyle;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
    UPROPERTY()
    float PreviewPercentWeight;
    
    FWeightedWeaponUIStat();
};

