#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ActorPartSelectionData.h"
#include "InventorySerialNumberAssetInterface.h"
#include "InventoryManufacturerBalanceData.h"
#include "RuntimeGenericPartListData.h"
#include "UObject/NoExportTypes.h"
#include "InventoryBalanceData.generated.h"

class UInventoryData;
class UInventoryBalanceStateComponent;
class UInventoryBalanceData;
class UInventoryRarityData;
class UGearBuilderCategoryData;
class UDownloadableInventorySetData;

UCLASS()
class GBXINVENTORY_API UInventoryBalanceData : public UActorPartSelectionData, public IInventorySerialNumberAssetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UInventoryBalanceStateComponent> InventoryBalanceStateClass;
    
    UPROPERTY()
    UInventoryBalanceData* BaseBalanceData;
    
    UPROPERTY(EditAnywhere)
    UInventoryData* InventoryData;
    
    UPROPERTY(EditAnywhere)
    UInventoryRarityData* RarityData;
    
    UPROPERTY(EditAnywhere)
    TArray<FInventoryManufacturerBalanceData> Manufacturers;
    
    UPROPERTY()
    FRuntimeGenericPartListData RuntimeGenericPartList;
    
    UPROPERTY(EditAnywhere)
    uint8 bIsGearBuildable: 1;
    
    UPROPERTY(EditAnywhere)
    UGearBuilderCategoryData* GearBuilderCategory;
    
    UPROPERTY(EditAnywhere)
    int32 MaxNumPrefixes;
    
    UPROPERTY(EditAnywhere)
    UDownloadableInventorySetData* DlcInventorySetData;
    
    UPROPERTY()
    bool bMigratedToActorPartSelectionData;
    
    UPROPERTY()
    FGuid AssetGuid;
    
public:
    UPROPERTY(EditAnywhere)
    uint8 bDisableVisibilityAndCollision: 1;
    
    UInventoryBalanceData();
    
    // Fix for true pure virtual functions not being implemented
};

