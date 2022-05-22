#pragma once
#include "CoreMinimal.h"
#include "OakAbilitySlotSaveGameData.generated.h"

class UOakPlayerAbility;
class UOakPlayerAbilitySlotData;

USTRUCT(BlueprintType)
struct FOakAbilitySlotSaveGameData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UOakPlayerAbility> AbilityClassPath;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakPlayerAbilitySlotData> SlotAssetPath;
    
public:
    OAKGAME_API FOakAbilitySlotSaveGameData();
};

