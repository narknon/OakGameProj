#pragma once
#include "CoreMinimal.h"
#include "OakPlayerAbilityTreeBranchInfo.generated.h"

class UOakPlayerAbilityTreeBranchData;

USTRUCT()
struct FOakPlayerAbilityTreeBranchInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UOakPlayerAbilityTreeBranchData* BranchData;
    
    OAKGAME_API FOakPlayerAbilityTreeBranchInfo();
};

