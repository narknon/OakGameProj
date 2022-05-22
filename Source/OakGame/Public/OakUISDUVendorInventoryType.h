#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "EInventoryListType.h"
#include "OakUISDUVendorInventoryType.generated.h"

UCLASS()
class UOakUISDUVendorInventoryType : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EInventoryListType InventoryType;
    
    UPROPERTY(EditAnywhere)
    FString ItemCardIconFrameName;
    
    UOakUISDUVendorInventoryType();
};

