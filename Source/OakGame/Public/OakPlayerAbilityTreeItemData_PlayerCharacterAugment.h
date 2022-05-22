#pragma once
#include "CoreMinimal.h"
#include "OakPlayerAbilityTreeItemData_GbxDataAsset.h"
#include "OakPlayerAbilityTreeItemData_PlayerCharacterAugment.generated.h"

class UPlayerCharacterComponentAugmentData;

UCLASS(EditInlineNew)
class UOakPlayerAbilityTreeItemData_PlayerCharacterAugment : public UOakPlayerAbilityTreeItemData_GbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UPlayerCharacterComponentAugmentData* AugmentData;
    
public:
    UOakPlayerAbilityTreeItemData_PlayerCharacterAugment();
};

