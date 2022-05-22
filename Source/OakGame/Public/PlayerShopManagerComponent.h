#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerBuyBackableInventory.h"
#include "EVendingMachineTrayTileType.h"
#include "ETransactionType.h"
#include "PlayerShopManagerComponent.generated.h"

class UInventoryShopComponent;
class AActor;
class AOakPlayerController;
class UOakSDUData;
class UGbxCustomizationData;
class UOakCustomizationData;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerShopManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 MaxBuyBackSize;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_BuyBackList)
    TArray<FPlayerBuyBackableInventory> BuyBackList;
    
    UPROPERTY(Transient)
    AOakPlayerController* PlayerController;
    
public:
    UPlayerShopManagerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSellInventory(AActor* InventoryActor);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSellAllJunk();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPurchaseSDU(UOakSDUData* SDU);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPurchaseInventoryFromShop(AActor* InventoryActor, UInventoryShopComponent* Shop);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPurchaseCustomization(UGbxCustomizationData* Customization);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerOnPurchaseCrazyEarl(UOakCustomizationData* PurchasedItem);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerOnExitMenuCrazyEarl();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerNotifyStablyVendingMachineSelectedInventory(EVendingMachineTrayTileType Type, AActor* InventoryActor);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerBuyBackInventory(AActor* InventoryActor);
    
    UFUNCTION()
    void OnRep_BuyBackList();
    
    UFUNCTION(Client, Reliable)
    void ClientSDUTransactionFinished(UOakSDUData* SDU, bool bPurchased, int32 NewSDULevel);
    
    UFUNCTION(Client, Reliable)
    void ClientInventoryTransactionFinished(ETransactionType TransactionType, const TArray<AActor*>& InventoryActor);
    
    UFUNCTION(Client, Reliable)
    void ClientCustomizationTransactionFinished(UGbxCustomizationData* CustomizationData);
    
};

