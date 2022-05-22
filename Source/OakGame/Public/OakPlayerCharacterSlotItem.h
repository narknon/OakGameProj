#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "OakPlayerCharacterSlotItem.generated.h"

class UPlayerCharacterComponentSlotData;
class UPlayerCharacterComponentAugmentData;

USTRUCT(BlueprintType)
struct FOakPlayerCharacterSlotItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UPlayerCharacterComponentSlotData* SlotData;
    
    UPROPERTY()
    UPlayerCharacterComponentAugmentData* AugmentData;
    
public:
    OAKGAME_API FOakPlayerCharacterSlotItem();
};

