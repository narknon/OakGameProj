#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DownloadableEntitlementCategoryData.generated.h"

UCLASS()
class UDownloadableEntitlementCategoryData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FText CategoryName;
    
    UPROPERTY(EditDefaultsOnly)
    FText CategoryDescription;
    
public:
    UDownloadableEntitlementCategoryData();
};

