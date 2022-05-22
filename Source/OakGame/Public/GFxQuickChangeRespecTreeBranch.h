#pragma once
#include "CoreMinimal.h"
#include "QuickChangeRespecTreeBranchRow.h"
#include "GbxGFxObject.h"
#include "GFxQuickChangeRespecTreeBranch.generated.h"

class UGbxTextField;
class UOakPlayerAbilityTreeBranchData;
class UGbxGFxProgressBar;

UCLASS(NonTransient)
class OAKGAME_API UGFxQuickChangeRespecTreeBranch : public UGbxGFxObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FQuickChangeRespecTreeBranchRow> Rows;
    
    UPROPERTY(Transient)
    UGbxTextField* ProgressText;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* BackgroundFill;
    
    UPROPERTY(Transient)
    UOakPlayerAbilityTreeBranchData* CachedBranchData;
    
    UGFxQuickChangeRespecTreeBranch();
};

