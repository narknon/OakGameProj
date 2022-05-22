#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "OakPlayerAbilityTreeTierData.generated.h"

class UOakPlayerAbilityTreeItemData;

UCLASS(EditInlineNew, Within=OakPlayerAbilityTreeBranchData)
class UOakPlayerAbilityTreeTierData : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    int32 BranchPointsToUnlock;
    
    UPROPERTY(EditDefaultsOnly, Export)
    TArray<UOakPlayerAbilityTreeItemData*> Items;
    
    UPROPERTY(EditDefaultsOnly, Export)
    TArray<UOakPlayerAbilityTreeItemData*> WingItems;
    
public:
    UOakPlayerAbilityTreeTierData();
};

