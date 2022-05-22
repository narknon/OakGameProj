#pragma once
#include "CoreMinimal.h"
#include "ActorPartSelectionOverrideData.h"
#include "ActorPartList.h"
#include "SelectedInventoryInfo.generated.h"

class UInventoryData;
class UInventoryBalanceData;
class UManufacturerData;
class UInventoryGenericPartData;

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FSelectedInventoryInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UInventoryData* InventoryData;
    
    UPROPERTY()
    UInventoryBalanceData* InventoryBalanceData;
    
    UPROPERTY()
    UManufacturerData* ManufacturerData;
    
    UPROPERTY()
    int32 GameStage;
    
    UPROPERTY()
    FActorPartSelectionOverrideData PartSelectionOverrideData;
    
    UPROPERTY()
    FActorPartList GenericPartSelectionOverrideData;
    
    UPROPERTY()
    TArray<UInventoryGenericPartData*> GenericPartsToInject;
    
    UPROPERTY()
    bool bCompileUIStats;
    
    UPROPERTY()
    bool bDroppedFromAI;
    
    FSelectedInventoryInfo();
};

