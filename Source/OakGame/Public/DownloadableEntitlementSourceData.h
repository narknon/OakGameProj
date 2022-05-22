#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DownloadableEntitlementSourceData.generated.h"

class UDownloadableEntitlementSourceData;

UCLASS()
class UDownloadableEntitlementSourceData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FText DisplayName;
    
    UPROPERTY(EditDefaultsOnly)
    FName SourceName;
    
    UPROPERTY(EditDefaultsOnly)
    UDownloadableEntitlementSourceData* ParentSourceData;
    
public:
    UDownloadableEntitlementSourceData();
};

