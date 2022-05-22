#pragma once
#include "CoreMinimal.h"
#include "OakDownloadableEntitlementCurrencyType.generated.h"

class UDownloadableEntitlementPartData_Currency;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakDownloadableEntitlementCurrencyType {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName CurrencyName;
    
    UPROPERTY(EditDefaultsOnly)
    UDownloadableEntitlementPartData_Currency* CurrencyPartData;
    
    FOakDownloadableEntitlementCurrencyType();
};

