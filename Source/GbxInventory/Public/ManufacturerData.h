#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GbxDataAsset.h"
#include "InventorySerialNumberAssetInterface.h"
#include "AttributeInitializationData.h"
#include "ManufacturerData.generated.h"

class UDialogEnumValue;
class UUIStatData;

UCLASS()
class GBXINVENTORY_API UManufacturerData : public UGbxDataAsset, public IInventorySerialNumberAssetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData MinGameStage;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData MaxGameStage;
    
    UPROPERTY(EditAnywhere)
    FText ManufacturerName;
    
    UPROPERTY(EditAnywhere)
    FText Blurb;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UUIStatData*> UIStats;
    
    UPROPERTY()
    FGuid AssetGuid;
    
    UPROPERTY(EditAnywhere)
    FString ManufacturerLogoFrameName;
    
public:
    UPROPERTY(EditAnywhere)
    UDialogEnumValue* ManufacturerDialogEnumValue;
    
    UManufacturerData();
    
    // Fix for true pure virtual functions not being implemented
};

