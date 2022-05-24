#pragma once
#include "CoreMinimal.h"
#include "GbxGFxGridScrollingList.h"
#include "GbxGFxPooledGridListConfig.h"
#include "GbxGFxListCellUpdateDelegateDelegate.h"
#include "GbxGFxPooledGridPoolInfo.h"
#include "GbxGFxPooledGridList.generated.h"

UCLASS(NonTransient)
class GBXUI_API UGbxGFxPooledGridList : public UGbxGFxGridScrollingList {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FGbxGFxListCellUpdateDelegate CellChangedDelegate;
    
    UPROPERTY(Transient)
    FGbxGFxListCellUpdateDelegate CellFocusedDelegate;
    
    UPROPERTY(Transient)
    FGbxGFxListCellUpdateDelegate CellClickedDelegate;
    
protected:
    UPROPERTY(EditAnywhere)
    FGbxGFxPooledGridListConfig PooledConfig;
    
    UPROPERTY(Transient)
    float HelperDataDirDim;
    
    UPROPERTY(Transient)
    int32 HelperDataItemsInDir;
    
    UPROPERTY(Transient)
    int32 HelperDataItemsPerDir;
    
    UPROPERTY(Transient)
    int32 HelperDataFirstItemIndex;
    
    UPROPERTY(Transient)
    int32 HelperDataNumVisibleItems;
    
    UPROPERTY(Transient)
    float HelperDataScrollOffset;
    
    UPROPERTY(Transient)
    TArray<FGbxGFxPooledGridPoolInfo> MasterCellPool;
    
public:
    UGbxGFxPooledGridList();
};

