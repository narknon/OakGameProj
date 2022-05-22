#pragma once
#include "CoreMinimal.h"
#include "PremiumCurrencyData.h"
#include "PremiumCurrencyManager.generated.h"

class AOakPlayerController;

USTRUCT(BlueprintType)
struct FPremiumCurrencyManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FPremiumCurrencyData> Currencies;
    
    UPROPERTY(Transient)
    AOakPlayerController* Owner;
    
public:
    OAKGAME_API FPremiumCurrencyManager();
};

