#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InventoryUnequippedEventDelegate.h"
#include "GameFramework/Actor.h"
#include "CrewQuartersActorInterface.h"
#include "InventoryEquippedEventDelegate.h"
#include "InventorySlotContainer.h"
#include "CrewQuartersGunRack.generated.h"

class UGunRackSlotData;
class ACrewQuartersRoom;
class AInventoryItemPickup;
class UInventorySlotData;

UCLASS()
class ACrewQuartersGunRack : public AActor, public ICrewQuartersActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    ACrewQuartersRoom* OwningRoom;
    
    UPROPERTY(EditAnywhere)
    TArray<UGunRackSlotData*> GunRackSlots;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AInventoryItemPickup> ItemPickupContainer;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryEquippedEvent OnInventoryEquippedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryUnequippedEvent OnInventoryUnequippedEvent;
    
    UPROPERTY(Replicated)
    FInventorySlotContainer EquippedInventory;
    
    ACrewQuartersGunRack();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void SaveSlot(UGunRackSlotData* SlotData);
    
    UFUNCTION()
    void OnInventoryUnequippedFromSlot(AActor* InUnequippedInventory, UInventorySlotData* SlotData);
    
    UFUNCTION()
    void OnInventoryEquippedOnSlot(AActor* InEquippedInventory, UInventorySlotData* SlotData);
    
    UFUNCTION()
    void CreateEmptyPickup(UGunRackSlotData* SlotData);
    
    
    // Fix for true pure virtual functions not being implemented
};

