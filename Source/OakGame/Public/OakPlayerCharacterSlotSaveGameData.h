#pragma once
#include "CoreMinimal.h"
#include "OakPlayerCharacterAugmentSaveGameData.h"
#include "OakPlayerCharacterSlotSaveGameData.generated.h"

USTRUCT(BlueprintType)
struct FOakPlayerCharacterSlotSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FOakPlayerCharacterAugmentSaveGameData> AugmentSlotList;
    
    OAKGAME_API FOakPlayerCharacterSlotSaveGameData();
};

