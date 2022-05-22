#pragma once
#include "CoreMinimal.h"
#include "VaultCardRewardData.h"
#include "VaultCardColumnData.generated.h"

USTRUCT(BlueprintType)
struct FVaultCardColumnData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FVaultCardRewardData> VaultCardRewardRows;
    
    OAKGAME_API FVaultCardColumnData();
};

