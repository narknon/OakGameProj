#pragma once
#include "CoreMinimal.h"
#include "OakAbilityTreeItemSaveGameData.h"
#include "OakAbilitySlotSaveGameData.h"
#include "OakActionAbilityAugmentSaveGameData.h"
#include "OakActionAbilityAugmentConfigurationSaveGameData.h"
#include "OakPlayerAbilitySaveGameData.generated.h"

USTRUCT(BlueprintType)
struct FOakPlayerAbilitySaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 TreeGrade;
    
    UPROPERTY(EditAnywhere)
    int32 AbilityPoints;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakAbilityTreeItemSaveGameData> TreeItemList;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakAbilitySlotSaveGameData> AbilitySlotList;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakActionAbilityAugmentSaveGameData> AugmentSlotList;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FOakActionAbilityAugmentConfigurationSaveGameData> AugmentConfigurationList;
    
    OAKGAME_API FOakPlayerAbilitySaveGameData();
};

