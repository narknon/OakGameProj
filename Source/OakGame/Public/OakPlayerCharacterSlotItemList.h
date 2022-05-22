#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "OakPlayerCharacterSlotItem.h"
#include "OakPlayerCharacterSlotItemList.generated.h"

class UPlayerCharacterComponent;

USTRUCT(BlueprintType)
struct FOakPlayerCharacterSlotItemList : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UPlayerCharacterComponent* Owner;
    
    UPROPERTY()
    TArray<FOakPlayerCharacterSlotItem> Items;
    
public:
    OAKGAME_API FOakPlayerCharacterSlotItemList();
};

