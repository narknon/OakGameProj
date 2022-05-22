#pragma once
#include "CoreMinimal.h"
#include "OakPlayerAbilityTreeItemData_GbxDataAsset.h"
#include "OakPlayerAbilityTreeItemData_ActionAbilityAugmentSlot.generated.h"

class UOakActionAbilityAugmentSlotData;

UCLASS(EditInlineNew)
class UOakPlayerAbilityTreeItemData_ActionAbilityAugmentSlot : public UOakPlayerAbilityTreeItemData_GbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UOakActionAbilityAugmentSlotData* AugmentSlotData;
    
public:
    UOakPlayerAbilityTreeItemData_ActionAbilityAugmentSlot();
};

