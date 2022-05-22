#pragma once
#include "CoreMinimal.h"
#include "AbilityTreeBranch.generated.h"

class UOakPlayerAbilityTree;
class UOakPlayerAbilityTreeBranchData;

USTRUCT(BlueprintType)
struct FAbilityTreeBranch {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UOakPlayerAbilityTree* Owner;
    
    UPROPERTY(Transient)
    UOakPlayerAbilityTreeBranchData* BranchData;
    
    OAKGAME_API FAbilityTreeBranch();
};

