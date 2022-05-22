#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "OakPlayerAbilityHUDItem.h"
#include "OakPlayerAbilityHUDItemList.generated.h"

class UOakPlayerAbilityManagerComponent;

USTRUCT(BlueprintType)
struct FOakPlayerAbilityHUDItemList : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UOakPlayerAbilityManagerComponent* Owner;
    
    UPROPERTY()
    TArray<FOakPlayerAbilityHUDItem> Items;
    
public:
    OAKGAME_API FOakPlayerAbilityHUDItemList();
};

