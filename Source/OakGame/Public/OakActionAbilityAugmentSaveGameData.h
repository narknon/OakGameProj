#pragma once
#include "CoreMinimal.h"
#include "OakActionAbilityAugmentSaveGameData.generated.h"

class UOakActionAbilityAugmentData;
class UOakActionAbilityAugmentSlotData;
class UOakActionAbility;

USTRUCT(BlueprintType)
struct FOakActionAbilityAugmentSaveGameData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UOakActionAbility> ActionAbilityClassPath;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakActionAbilityAugmentSlotData> SlotAssetPath;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakActionAbilityAugmentData> AugmentAssetPath;
    
public:
    OAKGAME_API FOakActionAbilityAugmentSaveGameData();
};

