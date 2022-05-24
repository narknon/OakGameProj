#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/NetSerialization.h"
#include "OakPlayerAbilitySlot.generated.h"

class UOakPlayerAbility;
class UOakPlayerAbilitySlotData;

USTRUCT(BlueprintType)
struct FOakPlayerAbilitySlot : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UOakPlayerAbilitySlotData* SlotData;
    
    UPROPERTY()
    TSubclassOf<UOakPlayerAbility> AbilityClass;
    
public:
    OAKGAME_API FOakPlayerAbilitySlot();
};

