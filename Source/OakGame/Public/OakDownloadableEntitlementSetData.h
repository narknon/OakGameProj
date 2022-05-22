#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=DownloadableContentData -FallbackName=DownloadableContentData
#include "DownloadableEntitlementSetItem.h"
#include "OakDownloadableEntitlementSetData.generated.h"

class UDownloadableEntitlementSourceData;

UCLASS()
class OAKGAME_API UOakDownloadableEntitlementSetData : public UDownloadableContentData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UDownloadableEntitlementSourceData* EntitlementSourceData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FDownloadableEntitlementSetItem> Entitlements;
    
public:
    UOakDownloadableEntitlementSetData();
};

