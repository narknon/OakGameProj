#pragma once
#include "CoreMinimal.h"
#include "GameStageGradeWeightData.h"
#include "InventoryManufacturerBalanceData.generated.h"

class UManufacturerData;
class UItemPoolPartSelectionOverrideData;

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FInventoryManufacturerBalanceData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UManufacturerData* ManufacturerData;
    
    UPROPERTY(EditAnywhere)
    FGameStageGradeWeightData GameStageWeight;
    
    UPROPERTY(EditAnywhere)
    UItemPoolPartSelectionOverrideData* PartSelectionOverrideData;
    
public:
    FInventoryManufacturerBalanceData();
};

