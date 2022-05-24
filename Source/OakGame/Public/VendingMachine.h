#pragma once
#include "CoreMinimal.h"
#include "AdvancedInteractiveObject.h"
#include "SpawnedActorInterface.h"
#include "LevelActorPersistenceInterface.h"
#include "EVendingMachineType.h"
#include "EVendingMachineTrayTileType.h"
#include "EVendingMachineBuyType.h"
#include "VendingMachine.generated.h"

class UInventoryShopComponent;
class UGbxAreaComponent;
class UBalanceStateComponent;
class USpawnerComponent;
class UBoxComponent;
class AActor;
class AGbxPlayerController;

UCLASS()
class AVendingMachine : public AAdvancedInteractiveObject, public ISpawnedActorInterface, public ILevelActorPersistenceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EVendingMachineType VendingMachineType;
    
    UPROPERTY(EditAnywhere)
    bool bEnableItemOfTheDay;
    
    UPROPERTY(EditAnywhere)
    FName EchoDeviceIdleScreenName_BuyBack;
    
    UPROPERTY(EditAnywhere)
    FName EchoDeviceIdleScreenName_Sell;
    
    UPROPERTY(EditAnywhere)
    FName EchoDeviceScreen_BoughtGearSoldByFriend;
    
    UPROPERTY(EditAnywhere)
    FName EchoDeviceScreen_BoughtItemOfTheDay;
    
    UPROPERTY(EditAnywhere)
    bool bSellsGearSoldByFriends;
    
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UBalanceStateComponent* BalanceComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UInventoryShopComponent* InventoryShopComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UGbxAreaComponent* ItemOfTheDayAreaComponent;
    
    UPROPERTY(EditAnywhere)
    float PostUseRespawnDelaySeconds;
    
private:
    UPROPERTY(Export, VisibleAnywhere)
    UBoxComponent* BoxComponent;
    
public:
    AVendingMachine();
private:
    UFUNCTION()
    void RegisterWithPersistenceManagerPostSpawn(USpawnerComponent* SpawnerComponent, AActor* Actor);
    
protected:
    UFUNCTION()
    void OnPlayerExitedItemOfTheDayArea(AGbxPlayerController* Player);
    
    UFUNCTION()
    void OnPlayerEnteredItemOfTheDayArea(AGbxPlayerController* Player);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnSoldSomething(AActor* InventoryActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnSoldAllJunk();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnShelfStablySelected(EVendingMachineTrayTileType Type, AActor* InventoryActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnRefilledAllHealth();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnRefilledAllAmmo();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnBoughtSomething(EVendingMachineBuyType Type, AActor* InventoryActor);
    
    
    // Fix for true pure virtual functions not being implemented
};

