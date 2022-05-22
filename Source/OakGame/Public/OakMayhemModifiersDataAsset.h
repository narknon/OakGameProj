#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "MayhemModifierDifficultyLevel.h"
#include "OakMayhemModifiersDataAsset.generated.h"

UCLASS(Deprecated, NotPlaceable)
class OAKGAME_API UDEPRECATED_OakMayhemModifiersDataAsset : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FMayhemModifierDifficultyLevel> ModifierDifficultyLevels;
    
    UPROPERTY()
    int32 DifficultyLevelBaseIndex;
    
    UPROPERTY()
    TArray<FName> MapsToExclude;
    
    UDEPRECATED_OakMayhemModifiersDataAsset();
};

