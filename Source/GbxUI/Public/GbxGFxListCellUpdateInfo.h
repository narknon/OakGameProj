#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCellUpdateInfo.generated.h"

class UGbxGFxListCell;

USTRUCT(BlueprintType)
struct GBXUI_API FGbxGFxListCellUpdateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxGFxListCell* Cell;
    
    UPROPERTY(Transient)
    int32 ListIndex;
    
    UPROPERTY(Transient)
    bool bIsSelected;
    
    UPROPERTY(Transient)
    bool bIsNewSelection;
    
    UPROPERTY(Transient)
    bool bIsNewInView;
    
    FGbxGFxListCellUpdateInfo();
};

