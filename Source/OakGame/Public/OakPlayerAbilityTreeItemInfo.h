#pragma once
#include "CoreMinimal.h"
#include "OakPlayerAbilityTreeItemInfo.generated.h"

class UOakPlayerAbilityTreeItemData;
class UOakPlayerAbilityTreeBranchData;

USTRUCT()
struct FOakPlayerAbilityTreeItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UOakPlayerAbilityTreeItemData* ItemData;
    
    UPROPERTY()
    UOakPlayerAbilityTreeBranchData* BranchData;
    
    OAKGAME_API FOakPlayerAbilityTreeItemInfo();
};

