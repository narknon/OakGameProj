#pragma once
#include "CoreMinimal.h"
#include "EInventoryListType.h"
#include "InventoryListComponent.h"
#include "InventoryListEntryHandle.h"
#include "OakInventoryListComponent.generated.h"

class AActor;
class UWeaponSkinPartData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakInventoryListComponent : public UInventoryListComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EInventoryListType InventoryListType;
    
    UOakInventoryListComponent();
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUseItemInInventory(const FInventoryListEntryHandle& InventoryItemHandle);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerTransferItemToList(const FInventoryListEntryHandle& InventoryItemHandle, AActor* DestinationActor, EInventoryListType DestinationListType, int32 Quantity);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetEquippedWeaponSkin(const FInventoryListEntryHandle& InventoryItemHandle, UWeaponSkinPartData* WeaponSkinPartData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUseItemInInventory(const FInventoryListEntryHandle& InventoryItemHandle);
    
};

