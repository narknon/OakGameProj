#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "OakPlayerAbilityTreeData.generated.h"

class UOakPlayerAbilityTreeBranchData;
class UOakActionAbility;

UCLASS()
class OAKGAME_API UOakPlayerAbilityTreeData : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    int32 GradePointsToUnlockFirstTier;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UOakPlayerAbilityTreeBranchData*> Branches;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUsesTreeActionAbility;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UOakActionAbility> TreeActionAbilityClass;
    
public:
    UOakPlayerAbilityTreeData();
};

