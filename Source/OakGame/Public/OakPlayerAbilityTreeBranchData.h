#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "BranchColorInfo.h"
#include "OakPlayerAbilityTreeBranchData.generated.h"

class UOakPlayerAbilityTreeTierData;

UCLASS(BlueprintType)
class OAKGAME_API UOakPlayerAbilityTreeBranchData : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FText BranchName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FBranchColorInfo BranchColorInfo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export, meta=(AllowPrivateAccess=true))
    TArray<UOakPlayerAbilityTreeTierData*> Tiers;
    
public:
    UOakPlayerAbilityTreeBranchData();
};

