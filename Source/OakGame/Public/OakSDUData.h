#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "AttributeEffectData.h"
#include "OakSDUData.generated.h"

class UDataTable;
class UDataAsset;
class UManufacturerData;
class UInventoryCategoryData;

UCLASS(BlueprintType)
class UOakSDUData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDataTable* SDUBonusTable;
    
    UPROPERTY(EditAnywhere)
    FText SDUDisplayName;
    
    UPROPERTY(EditAnywhere)
    bool bProfileSDU;
    
    UPROPERTY(EditAnywhere)
    bool bClientSDU;
    
    UPROPERTY(EditAnywhere)
    bool bGrenadeSDU;
    
    UPROPERTY(EditAnywhere)
    UDataAsset* UIVendorContextData;
    
    UPROPERTY(EditAnywhere)
    UManufacturerData* ManufacturerData;
    
    UOakSDUData();
    UFUNCTION(BlueprintCallable)
    bool GetSDULevelInfo(int32 SDULevel, int32& OutSDUPrice, UInventoryCategoryData*& OutPriceCurrenty, FAttributeEffectData& OutAttributeModifyInfo);
    
};

