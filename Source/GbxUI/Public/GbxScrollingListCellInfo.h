#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxScrollingListCellInfo.generated.h"

class UGbxGFxListCell;

USTRUCT(BlueprintType)
struct GBXUI_API FGbxScrollingListCellInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FString LibraryName;
    
    UPROPERTY(Transient)
    TSubclassOf<UGbxGFxListCell> CellClass;
    
    UPROPERTY(Transient)
    UGbxGFxListCell* Cell;
    
    FGbxScrollingListCellInfo();
};

