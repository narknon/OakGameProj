#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "Curves/CurveFloat.h"
#include "OakWeaponMayhemGlobalsData.generated.h"

UCLASS()
class OAKGAME_API UOakWeaponMayhemGlobalsData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FText LevelUIStatFormatText;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve ExperienceLevelBoostCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve PartMonetaryValueModifierCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve PartInventoryScoreModifierCurve;
    
    UOakWeaponMayhemGlobalsData();
};

