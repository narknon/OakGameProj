#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "InventoryManufacturerBalanceData.h"
#include "OakVehicleSettings.generated.h"

class UInventoryData;
class UActorPartData;
class UInventoryPartData;
class UObject;

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class UOakVehicleSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float MaximumAoeDamageDistance;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath DefaultVehicleManufacturer;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath DefaultVehicleCategory;
    
    UPROPERTY(Config, EditAnywhere)
    FInventoryManufacturerBalanceData DefaultVehicleManufacturerData;
    
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UActorPartData> DefaultVehiclePartDataClass;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<TSoftObjectPtr<UInventoryPartData>> AlwaysUnlockedParts;
    
    UPROPERTY(Config)
    TArray<FString> AlwaysUnlockedDLCParts;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<TSoftObjectPtr<UInventoryData>> AlwaysUnlockedVehicles;
    
    UPROPERTY(Config)
    TArray<FString> AlwaysUnlockedDLCVehicles;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAlwaysDestroyOtherCARVehicle;
    
    UPROPERTY(Config, EditAnywhere)
    bool bNeverDespawnCARVehicle;
    
    UPROPERTY(Config)
    TArray<FString> EnumerationSources;
    
    UOakVehicleSettings();
    UFUNCTION()
    static void EnumerateValidPartAndWheel(TArray<FString>& PartAndWheels);
    
    UFUNCTION()
    static void EnumeratePropertiesByType(UObject* Data, TArray<FString>& Properties);
    
    UFUNCTION(BlueprintCallable)
    static FString CleanVehiclePartName(const FString& Name);
    
};

