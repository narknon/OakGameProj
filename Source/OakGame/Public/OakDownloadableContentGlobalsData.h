#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OakDownloadableEntitlementCurrencyType.h"
#include "OakDownloadableContentGlobalsData.generated.h"

class UDownloadableEntitlementSourceData;

UCLASS()
class OAKGAME_API UOakDownloadableContentGlobalsData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FOakDownloadableEntitlementCurrencyType> Currencies;
    
    UPROPERTY(EditDefaultsOnly)
    UDownloadableEntitlementSourceData* SparkEntitlementSourceData;
    
    UPROPERTY(EditDefaultsOnly)
    UDownloadableEntitlementSourceData* DLCEntitlementSourceData;
    
    UPROPERTY(EditDefaultsOnly)
    UDownloadableEntitlementSourceData* DebugEntitlementSourceData;
    
public:
    UOakDownloadableContentGlobalsData();
};

