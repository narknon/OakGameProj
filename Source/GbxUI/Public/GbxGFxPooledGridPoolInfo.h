#pragma once
#include "CoreMinimal.h"
#include "GbxScrollingListCellInfo.h"
#include "GbxGFxPooledGridPoolInfo.generated.h"

class UGbxGFxPooledGridList;

USTRUCT(BlueprintType)
struct GBXUI_API FGbxGFxPooledGridPoolInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FGbxScrollingListCellInfo CellInfo;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxGFxPooledGridList> OwningList;
    
    UPROPERTY(Transient)
    int32 ListIndex;
    
    UPROPERTY(Transient)
    int32 VisibleIndexOffset;
    
    FGbxGFxPooledGridPoolInfo();
};

