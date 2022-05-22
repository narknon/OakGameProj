#pragma once
#include "CoreMinimal.h"
#include "MayhemCoreModifierSet.h"
#include "MayhemModeTwoLevelOverride.generated.h"

class UMayhemModifierSlotInterface;

USTRUCT(BlueprintType)
struct OAKGAME_API FMayhemModeTwoLevelOverride {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 LevelRangeMin;
    
    UPROPERTY(EditAnywhere)
    int32 LevelRangeMax;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideCoreModifierSet;
    
    UPROPERTY(EditAnywhere)
    FMayhemCoreModifierSet CoreModifierSetOverride;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideRandomModifiersSlots;
    
    UPROPERTY(EditAnywhere)
    TArray<UMayhemModifierSlotInterface*> RandomModifierSlotsOverride;
    
    FMayhemModeTwoLevelOverride();
};

