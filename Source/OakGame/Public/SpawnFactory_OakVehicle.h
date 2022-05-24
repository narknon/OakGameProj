#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SpawnFactory_Oak.h"
#include "SpawnFactory_OakVehicle.generated.h"

class UGbxUIName;
class UInventoryBalanceData;
class AOakVehicle;
class USpawnFactory;

UCLASS(CollapseCategories, EditInlineNew)
class OAKGAME_API USpawnFactory_OakVehicle : public USpawnFactory_Oak {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bDigistructOnSpawn;
    
    UPROPERTY(EditAnywhere)
    bool bAllowScanningOnCAR;
    
    UPROPERTY(EditAnywhere)
    bool bCannotWorldTravel;
    
protected:
    UPROPERTY(EditAnywhere)
    UInventoryBalanceData* InventoryBalanceData;
    
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AOakVehicle> VehicleActorClass;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<USpawnFactory*> SeatFactories;
    
    UPROPERTY(EditAnywhere)
    bool bForceDontDespawnWhenNoOccupant;
    
    UPROPERTY(EditAnywhere)
    bool bForceKeepAssociatedToSpawner;
    
    UPROPERTY(EditAnywhere)
    UGbxUIName* UINameOverride;
    
public:
    USpawnFactory_OakVehicle();
};

