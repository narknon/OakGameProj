#pragma once
#include "CoreMinimal.h"
#include "GbxGFxPooledGridList.h"
#include "GbxGFxListCellUpdateInfo.h"
#include "GFxItemInspectionPartList.generated.h"

UCLASS(NonTransient)
class OAKGAME_API UGFxItemInspectionPartList : public UGbxGFxPooledGridList {
    GENERATED_BODY()
public:
    UGFxItemInspectionPartList();
private:
    UFUNCTION()
    void OnCellChanged(const FGbxGFxListCellUpdateInfo& UpdateInfo);
    
};

