#pragma once
#include "CoreMinimal.h"
#include "InventoryBalanceStateInitializationData.generated.h"

class UInventoryData;
class UInventoryBalanceData;
class UManufacturerData;
class UInventoryCustomizationPartData;
class UInventoryPartData;
class UInventoryGenericPartData;

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FInventoryBalanceStateInitializationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 GameStage;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    UInventoryData* InventoryData;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    UInventoryBalanceData* InventoryBalanceData;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    UManufacturerData* ManufacturerData;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<UInventoryPartData*> PartList;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<UInventoryGenericPartData*> GenericPartList;
    
    UPROPERTY()
    TArray<uint8> AdditionalData;
    
    UPROPERTY()
    TArray<UInventoryCustomizationPartData*> CustomizationPartList;
    
    UPROPERTY()
    uint8 ReRollCount;
    
    UPROPERTY()
    bool bDroppedFromAI;
    
    FInventoryBalanceStateInitializationData();
};

