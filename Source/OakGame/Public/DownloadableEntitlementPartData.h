#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "InventorySerialNumberAssetInterface.h"
#include "DownloadableEntitlementPartData.generated.h"

UCLASS(Abstract)
class UDownloadableEntitlementPartData : public UDataAsset, public IInventorySerialNumberAssetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(DuplicateTransient)
    FGuid AssetGuid;
    
public:
    UDownloadableEntitlementPartData();
    
    // Fix for true pure virtual functions not being implemented
};

