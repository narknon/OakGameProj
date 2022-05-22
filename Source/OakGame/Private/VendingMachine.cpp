#include "VendingMachine.h"
#include "Components/BoxComponent.h"
#include "RegionBalanceStateComponent.h"
#include "InventoryShopComponent.h"
#include "GbxAreaComponent.h"

class USpawnerComponent;
class AActor;
class AGbxPlayerController;

void AVendingMachine::RegisterWithPersistenceManagerPostSpawn(USpawnerComponent* SpawnerComponent, AActor* Actor) {
}

void AVendingMachine::OnPlayerExitedItemOfTheDayArea(AGbxPlayerController* Player) {
}

void AVendingMachine::OnPlayerEnteredItemOfTheDayArea(AGbxPlayerController* Player) {
}







AVendingMachine::AVendingMachine() {
    this->VendingMachineType = EVendingMachineType::Guns;
    this->bEnableItemOfTheDay = true;
    this->EchoDeviceIdleScreenName_BuyBack = TEXT("VendingMachine_BuyBack");
    this->EchoDeviceIdleScreenName_Sell = TEXT("VendingMachine_Sell");
    this->EchoDeviceScreen_BoughtGearSoldByFriend = TEXT("VendingMachine_BoughtGearSoldByFriend");
    this->EchoDeviceScreen_BoughtItemOfTheDay = TEXT("VendingMachine_BoughtItemOfTheDay");
    this->bSellsGearSoldByFriends = true;
    this->BalanceComponent = CreateDefaultSubobject<URegionBalanceStateComponent>(TEXT("DefaultBalanceComponent"));
    this->InventoryShopComponent = CreateDefaultSubobject<UInventoryShopComponent>(TEXT("DefaultInventoryShopComponent"));
    this->ItemOfTheDayAreaComponent = CreateDefaultSubobject<UGbxAreaComponent>(TEXT("ItemOfTheDayArea"));
    this->PostUseRespawnDelaySeconds = 0.00f;
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
}

