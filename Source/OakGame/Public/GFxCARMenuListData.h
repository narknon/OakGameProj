#pragma once
#include "CoreMinimal.h"
#include "GbxGFxPooledGridListFullConfig.h"
#include "GFxCARMenuListData.generated.h"

class UGbxGFxPooledGridList;

USTRUCT(BlueprintType)
struct FGFxCARMenuListData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString ListClipName;
    
    UPROPERTY(EditAnywhere)
    FGbxGFxPooledGridListFullConfig ListConfig;
    
    UPROPERTY(EditAnywhere)
    FGbxGFxPooledGridListFullConfig ListConfigSplitScreen;
    
    UPROPERTY(Transient)
    UGbxGFxPooledGridList* List;
    
    OAKGAME_API FGFxCARMenuListData();
};

