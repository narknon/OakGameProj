#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PlayerVaultCardLevelFormula.h"
#include "LevelBasedExpScale.h"
#include "GbxDataAsset.h"
#include "AttributeInitializationData.h"
#include "ExpAwardWeight.h"
#include "PlayerExperienceFormula.h"
#include "PlayerGuardianRankFormula.h"
#include "ExperienceGlobals.generated.h"

class UGbxAbility;

UCLASS()
class UExperienceGlobals : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData BaseEnemyExperienceFormula;
    
    UPROPERTY(EditAnywhere)
    TArray<FLevelBasedExpScale> ExpScaleByLevelDifference;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData VehicleVSCharacterExpModifier;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FExpAwardWeight> ExpAwardWeights;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAbility> GuardianRankAbilityClass;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData BaseScanVehicleExperienceFormula;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData BaseDiscoverAreaExperienceFormula;
    
protected:
    UPROPERTY(EditAnywhere)
    FPlayerExperienceFormula PlayerExperienceFormula;
    
    UPROPERTY(EditAnywhere)
    FPlayerGuardianRankFormula PlayerGuardianRankFormula;
    
public:
    UPROPERTY(EditAnywhere)
    FPlayerVaultCardLevelFormula PlayerVaultCardLevelFormula;
    
    UExperienceGlobals();
};

