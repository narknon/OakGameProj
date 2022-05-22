#pragma once
#include "CoreMinimal.h"
#include "OakActionAbilityAugmentConfigurationSaveGameData.generated.h"

class UOakActionAbilityAugmentSlotData;
class UOakActionAbilityAugmentData;
class UOakActionAbility;

USTRUCT(BlueprintType)
struct FOakActionAbilityAugmentConfigurationSaveGameData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UOakActionAbility> AbilityClassPath;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakActionAbilityAugmentData> AugmentAssetPath;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakActionAbilityAugmentSlotData> ModSlotAssetPath;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakActionAbilityAugmentData> ModAssetPath;
    
public:
    OAKGAME_API FOakActionAbilityAugmentConfigurationSaveGameData();
};

