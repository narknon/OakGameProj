#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/NetSerialization.h"
#include "OakActionAbilityAugmentSlot.generated.h"

class UOakActionAbilityAugmentData;
class UOakActionAbilityAugmentSlotData;
class UOakActionAbility;

USTRUCT(BlueprintType)
struct FOakActionAbilityAugmentSlot : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TSubclassOf<UOakActionAbility> ActionAbilityClass;
    
    UPROPERTY()
    UOakActionAbilityAugmentSlotData* SlotData;
    
    UPROPERTY()
    UOakActionAbilityAugmentData* AugmentData;
    
public:
    OAKGAME_API FOakActionAbilityAugmentSlot();
};

