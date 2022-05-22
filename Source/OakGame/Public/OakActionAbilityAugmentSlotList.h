#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "OakActionAbilityAugmentSlot.h"
#include "OakActionAbilityAugmentSlotList.generated.h"

class UOakPlayerAbilityManagerComponent;

USTRUCT(BlueprintType)
struct FOakActionAbilityAugmentSlotList : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UOakPlayerAbilityManagerComponent* Owner;
    
    UPROPERTY()
    TArray<FOakActionAbilityAugmentSlot> Items;
    
public:
    OAKGAME_API FOakActionAbilityAugmentSlotList();
};

