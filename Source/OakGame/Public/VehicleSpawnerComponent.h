#pragma once
#include "CoreMinimal.h"
#include "InventoryDataUnlockedInfo.h"
#include "Components/ActorComponent.h"
#include "InventoryPartDataUnlockedInfo.h"
#include "OakCARMenuVehicleConfig.h"
#include "Engine/EngineTypes.h"
#include "ECARPartType.h"
#include "VehicleSpawnerComponent.generated.h"

class UVehicleClassIdentifier;
class UInventoryBalanceData;
class UInventoryData;
class AOakVehicle;
class UObject;
class ACatchARide;
class UInventoryPartData;
class UWorld;
class AOakSpawner;
class AActor;
class UOakCARVehicleData;
class UOakCARVehiclePartData;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UVehicleSpawnerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FInventoryDataUnlockedInfo> WheelsUnlocked;
    
    UPROPERTY(Transient)
    TArray<UVehicleClassIdentifier*> VehiclesUnlocked;
    
    UPROPERTY(Transient)
    TArray<FInventoryPartDataUnlockedInfo> PartsUnlocked;
    
    UPROPERTY(Transient)
    TArray<FOakCARMenuVehicleConfig> VehicleLoadouts;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 LastUsedVehicleLoadoutIndex;
    
private:
    UPROPERTY(Transient)
    FTimerHandle RespawnVehicleTimer;
    
    UPROPERTY()
    UInventoryData* SpawnInventoryData;
    
    UPROPERTY()
    UInventoryBalanceData* SpawnInventoryBalanceData;
    
    UPROPERTY(Transient)
    AOakVehicle* LastVehicleSpawn;
    
public:
    UVehicleSpawnerComponent();
    UFUNCTION(BlueprintCallable)
    static void UnlockVehicleForAllPlayers(UObject* WorldContextObject, TSoftObjectPtr<UInventoryData> Vehicle);
    
    UFUNCTION(BlueprintCallable)
    static void UnlockVehicleAndPartForAllPlayer(AOakVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    static void UnlockPartForAllPlayers(UObject* WorldContextObject, TSoftObjectPtr<UInventoryPartData> Part);
    
    UFUNCTION(BlueprintCallable)
    void SpawnMissionVehicle(ACatchARide* Console);
    
    UFUNCTION(BlueprintCallable)
    static void SetMissionVehicle(UWorld* World, AOakSpawner* MissionSpawner);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdateLoadoutAtIndex(int32 Index, const FOakCARMenuVehicleConfig& NewLoadout);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdateLastUsedVehicleLoadoutIndex(int32 NewIndex);
    
private:
    UFUNCTION()
    void RequestVehicleSpawnCallback();
    
    UFUNCTION()
    void RequestVehicleSpawn(AActor* PreviousVehicle);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsVehicleUnlocked(TSoftObjectPtr<UInventoryData> Vehicle) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPartUnlocked(TSoftObjectPtr<UInventoryPartData> Part) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsMissionVehicleCanBeSpawn(ACatchARide* CatchRideStation);
    
    UFUNCTION(BlueprintPure)
    void GetVehicleUnlocked(TArray<UOakCARVehicleData*>& Vehicles) const;
    
    UFUNCTION(BlueprintCallable)
    static UOakCARVehicleData* GetVehicleType(AOakVehicle* Vehicle);
    
    UFUNCTION(BlueprintPure)
    void GetVehiclePartUnlocked(UOakCARVehicleData* Vehicle, ECARPartType PartType, TArray<UOakCARVehiclePartData*>& Parts) const;
    
    UFUNCTION(BlueprintCallable)
    static UOakCARVehiclePartData* GetVehiclePartByType(AOakVehicle* Vehicle, ECARPartType Type);
    
    UFUNCTION(BlueprintCallable)
    bool GetVehicleLoadoutAtIndex(int32 VehicleLoadoutindex, FOakCARMenuVehicleConfig& OutLoadout);
    
    UFUNCTION(BlueprintPure)
    int32 GetTotalNumVehicles() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTotalNumParts(UOakCARVehicleData* Vehicle, ECARPartType PartType) const;
    
    UFUNCTION()
    void GetNewlyUnlockedVehicles(TArray<UOakCARVehicleData*>& Vehicles) const;
    
    UFUNCTION(BlueprintPure)
    AOakVehicle* GetLastVehicleSpawn() const;
    
};

