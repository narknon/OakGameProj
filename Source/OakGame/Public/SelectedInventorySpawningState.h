#pragma once
#include "CoreMinimal.h"
#include "SelectedInventoryInfo.h"
#include "InventoryBalanceStateInitializationData.h"
#include "SelectedInventorySpawningState.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FSelectedInventorySpawningState {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSelectedInventoryInfo SeletedInventoryInfo;
    
    UPROPERTY()
    FInventoryBalanceStateInitializationData InitData;
    
    FSelectedInventorySpawningState();
};

