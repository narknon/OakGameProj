#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListConfig.h"
#include "GbxGFxPooledGridListConfig.h"
#include "GbxGFxPooledGridListFullConfig.generated.h"

USTRUCT(BlueprintType)
struct GBXUI_API FGbxGFxPooledGridListFullConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxGFxListConfig BaseListConfig;
    
    UPROPERTY(EditAnywhere)
    FGbxGFxPooledGridListConfig PoolListConfig;
    
    FGbxGFxPooledGridListFullConfig();
};

