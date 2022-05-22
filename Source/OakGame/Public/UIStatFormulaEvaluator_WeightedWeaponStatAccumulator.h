#pragma once
#include "CoreMinimal.h"
#include "UIStatFormulaEvaluator.h"
#include "WeaponTypeAttributeStatWeighting.h"
#include "UIStatFormulaEvaluator_WeightedWeaponStatAccumulator.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class OAKGAME_API UUIStatFormulaEvaluator_WeightedWeaponStatAccumulator : public UUIStatFormulaEvaluator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bInvertPercent;
    
    UPROPERTY(EditAnywhere)
    FWeaponTypeAttributeStatWeighting DefaultWeighting;
    
    UPROPERTY(EditAnywhere)
    TArray<FWeaponTypeAttributeStatWeighting> WeaponTypeWeightings;
    
public:
    UUIStatFormulaEvaluator_WeightedWeaponStatAccumulator();
};

