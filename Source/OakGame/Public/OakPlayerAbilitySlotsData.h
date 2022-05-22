#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "OakActionAbilitySlot.h"
#include "OakAbilitySlot.h"
#include "OakPlayerAbilitySlotsData.generated.h"

UCLASS()
class UOakPlayerAbilitySlotsData : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FOakActionAbilitySlot> ActionAbilitySlots;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FOakAbilitySlot> PassiveAbilitySlots;
    
public:
    UOakPlayerAbilitySlotsData();
};

