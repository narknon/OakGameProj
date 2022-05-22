#pragma once
#include "CoreMinimal.h"
#include "VaultCardRewardDataBase.generated.h"

USTRUCT()
struct FVaultCardRewardDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FText DisplayName;
    
    UPROPERTY(EditDefaultsOnly)
    FText Description;
    
    UPROPERTY(EditDefaultsOnly)
    FString PerkFrameName;
    
    UPROPERTY(EditAnywhere)
    int32 VaultCardRewardKeyCost;
    
    OAKGAME_API FVaultCardRewardDataBase();
};

