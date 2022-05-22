#pragma once
#include "CoreMinimal.h"
#include "InventoryAspectData.h"
#include "PassiveAbilityBuffData.h"
#include "OakPassiveAbilityBuffAspectData.generated.h"

UCLASS(EditInlineNew)
class OAKGAME_API UOakPassiveAbilityBuffAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FPassiveAbilityBuffData> Buffs;
    
public:
    UOakPassiveAbilityBuffAspectData();
};

