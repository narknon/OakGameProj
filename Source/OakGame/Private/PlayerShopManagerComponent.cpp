#include "PlayerShopManagerComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;
class UOakSDUData;
class UInventoryShopComponent;
class UGbxCustomizationData;
class UOakCustomizationData;

void UPlayerShopManagerComponent::ServerSellInventory_Implementation(AActor* InventoryActor) {
}
bool UPlayerShopManagerComponent::ServerSellInventory_Validate(AActor* InventoryActor) {
    return true;
}

void UPlayerShopManagerComponent::ServerSellAllJunk_Implementation() {
}
bool UPlayerShopManagerComponent::ServerSellAllJunk_Validate() {
    return true;
}

void UPlayerShopManagerComponent::ServerPurchaseSDU_Implementation(UOakSDUData* SDU) {
}
bool UPlayerShopManagerComponent::ServerPurchaseSDU_Validate(UOakSDUData* SDU) {
    return true;
}

void UPlayerShopManagerComponent::ServerPurchaseInventoryFromShop_Implementation(AActor* InventoryActor, UInventoryShopComponent* Shop) {
}
bool UPlayerShopManagerComponent::ServerPurchaseInventoryFromShop_Validate(AActor* InventoryActor, UInventoryShopComponent* Shop) {
    return true;
}

void UPlayerShopManagerComponent::ServerPurchaseCustomization_Implementation(UGbxCustomizationData* Customization) {
}
bool UPlayerShopManagerComponent::ServerPurchaseCustomization_Validate(UGbxCustomizationData* Customization) {
    return true;
}

void UPlayerShopManagerComponent::ServerOnPurchaseCrazyEarl_Implementation(UOakCustomizationData* PurchasedItem) {
}
bool UPlayerShopManagerComponent::ServerOnPurchaseCrazyEarl_Validate(UOakCustomizationData* PurchasedItem) {
    return true;
}

void UPlayerShopManagerComponent::ServerOnExitMenuCrazyEarl_Implementation() {
}
bool UPlayerShopManagerComponent::ServerOnExitMenuCrazyEarl_Validate() {
    return true;
}

void UPlayerShopManagerComponent::ServerNotifyStablyVendingMachineSelectedInventory_Implementation(EVendingMachineTrayTileType Type, AActor* InventoryActor) {
}
bool UPlayerShopManagerComponent::ServerNotifyStablyVendingMachineSelectedInventory_Validate(EVendingMachineTrayTileType Type, AActor* InventoryActor) {
    return true;
}

void UPlayerShopManagerComponent::ServerBuyBackInventory_Implementation(AActor* InventoryActor) {
}
bool UPlayerShopManagerComponent::ServerBuyBackInventory_Validate(AActor* InventoryActor) {
    return true;
}

void UPlayerShopManagerComponent::OnRep_BuyBackList() {
}

void UPlayerShopManagerComponent::ClientSDUTransactionFinished_Implementation(UOakSDUData* SDU, bool bPurchased, int32 NewSDULevel) {
}

void UPlayerShopManagerComponent::ClientInventoryTransactionFinished_Implementation(ETransactionType TransactionType, const TArray<AActor*>& InventoryActor) {
}

void UPlayerShopManagerComponent::ClientCustomizationTransactionFinished_Implementation(UGbxCustomizationData* CustomizationData) {
}

void UPlayerShopManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayerShopManagerComponent, BuyBackList);
}

UPlayerShopManagerComponent::UPlayerShopManagerComponent() {
    this->MaxBuyBackSize = 15;
    this->PlayerController = NULL;
}

