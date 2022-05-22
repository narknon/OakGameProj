#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "GbxGFxPooledGridListConfig.generated.h"

class UGbxGFxListCell;

USTRUCT(BlueprintType)
struct GBXUI_API FGbxGFxPooledGridListConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxGFxListCell> ItemNativeClass;
    
    UPROPERTY(EditAnywhere)
    FString ItemASClass;
    
    UPROPERTY(EditAnywhere)
    FVector2D ItemSize;
    
    UPROPERTY(EditAnywhere)
    FVector2D ItemRootOffset;
    
    UPROPERTY(EditAnywhere)
    int32 VisibleRows;
    
    UPROPERTY(EditAnywhere)
    int32 VisibleCols;
    
    FGbxGFxPooledGridListConfig();
};

