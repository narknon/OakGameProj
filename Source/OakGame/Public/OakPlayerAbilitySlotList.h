#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "OakPlayerAbilitySlot.h"
#include "OakPlayerAbilitySlotList.generated.h"

class UOakPlayerAbilityManagerComponent;

USTRUCT(BlueprintType)
struct FOakPlayerAbilitySlotList : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UOakPlayerAbilityManagerComponent* Owner;
    
    UPROPERTY()
    TArray<FOakPlayerAbilitySlot> Items;
    
public:
    OAKGAME_API FOakPlayerAbilitySlotList();
};

