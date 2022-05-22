#pragma once
#include "CoreMinimal.h"
#include "DownloadableEntitlementPartData.h"
#include "DownloadableEntitlementPartData_Currency.generated.h"

class UInventoryCategoryData;

UCLASS()
class UDownloadableEntitlementPartData_Currency : public UDownloadableEntitlementPartData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UInventoryCategoryData* CurrencyCategory;
    
public:
    UDownloadableEntitlementPartData_Currency();
};

