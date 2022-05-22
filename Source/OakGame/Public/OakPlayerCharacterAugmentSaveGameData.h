#pragma once
#include "CoreMinimal.h"
#include "OakPlayerCharacterAugmentSaveGameData.generated.h"

class UPlayerCharacterComponentSlotData;
class UPlayerCharacterComponentAugmentData;

USTRUCT(BlueprintType)
struct FOakPlayerCharacterAugmentSaveGameData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<UPlayerCharacterComponentSlotData> SlotAssetPath;
    
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<UPlayerCharacterComponentAugmentData> AugmentAssetPath;
    
public:
    OAKGAME_API FOakPlayerCharacterAugmentSaveGameData();
};

