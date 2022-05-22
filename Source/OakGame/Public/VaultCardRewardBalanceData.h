#pragma once
#include "CoreMinimal.h"
#include "InventoryBalanceData.h"
#include "AttributeInitializationData.h"
#include "VaultCardRewardBalanceData.generated.h"

UCLASS()
class UVaultCardRewardBalanceData : public UInventoryBalanceData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 ColumnIndex;
    
    UPROPERTY(EditAnywhere)
    int32 RowIndex;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData AlternateKeyReward;
    
    UVaultCardRewardBalanceData();
};

