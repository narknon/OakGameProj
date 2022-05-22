#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VehiclePartListData.h"
#include "WeightedPassengersNum.h"
#include "SpawnFactory_OakVehicle.h"
#include "UObject/NoExportTypes.h"
#include "SeatOccupant.h"
#include "SpawnFactory_OakVehicleBuilder.generated.h"

class AOakVehicle;
class UInventoryBalanceData;
class UActorPartSetData;
class USpawnOptionData;
class UEnum;
class UVehiclePartSetData;
class UInventoryData;

UCLASS(CollapseCategories, EditInlineNew)
class OAKGAME_API USpawnFactory_OakVehicleBuilder : public USpawnFactory_OakVehicle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AOakVehicle> VehicleClass;
    
    UPROPERTY(EditAnywhere)
    bool bShowArchetypePartOnly;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FVehiclePartListData> VehiclePartLists;
    
    UPROPERTY(EditAnywhere)
    UInventoryBalanceData* PartListBalanceData;
    
    UPROPERTY(EditAnywhere)
    UActorPartSetData* PartSetData;
    
    UPROPERTY(EditAnywhere)
    TArray<FSeatOccupant> SeatList;
    
    UPROPERTY(EditAnywhere)
    USpawnOptionData* DefaultSpawnOptions;
    
    UPROPERTY()
    bool bRandomizePassengerCount;
    
    UPROPERTY(EditAnywhere)
    FInt32Interval RandomizePassengerCount;
    
    UPROPERTY()
    bool bWeightedPassengersNum;
    
    UPROPERTY(EditAnywhere)
    TArray<FWeightedPassengersNum> WeightedPassengersNum;
    
    UPROPERTY(VisibleAnywhere)
    UEnum* PartTypeEnum;
    
private:
    UPROPERTY()
    UVehiclePartSetData* CustomVehicleInventoryPartSetData;
    
    UPROPERTY()
    UInventoryData* CustomInventoryData;
    
    UPROPERTY()
    UInventoryBalanceData* CustomVehicleInventoryBalanceData;
    
public:
    USpawnFactory_OakVehicleBuilder();
};

