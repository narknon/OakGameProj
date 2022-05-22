#pragma once
#include "CoreMinimal.h"
#include "OakPlayerAbilityTreeItemData_GbxDataAsset.h"
#include "OakPlayerAbilityTreeItemData_ActionAbilityAugment.generated.h"

class UOakActionAbilityAugmentData;

UCLASS(EditInlineNew)
class UOakPlayerAbilityTreeItemData_ActionAbilityAugment : public UOakPlayerAbilityTreeItemData_GbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UOakActionAbilityAugmentData* AugmentData;
    
public:
    UOakPlayerAbilityTreeItemData_ActionAbilityAugment();
};

