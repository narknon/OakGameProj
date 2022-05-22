#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=DownloadableContentLicenseData -FallbackName=DownloadableContentLicenseData
#include "InventorySerialNumberAssetInterface.h"
#include "UObject/NoExportTypes.h"
#include "OakDownloadableContentLicenseData.generated.h"

UCLASS()
class UOakDownloadableContentLicenseData : public UDownloadableContentLicenseData, public IInventorySerialNumberAssetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(DuplicateTransient, VisibleAnywhere)
    FGuid AssetGuid;
    
public:
    UOakDownloadableContentLicenseData();
    
    // Fix for true pure virtual functions not being implemented
};

