#pragma once
#include "CoreMinimal.h"
#include "InventoryItemReplacedDelegate.h"
#include "Components/ActorComponent.h"
#include "InventoryListContainer.h"
#include "InventoryItemRemovedDelegate.h"
#include "InventorySelectionTracker.h"
#include "InventoryItemAddedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeInteger -FallbackName=GbxAttributeInteger
#include "InventoryItemUpdatedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "InventoryItemQuantityUpdatedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "InventoryItemPickedUpDelegate.h"
#include "AddedToInventory_InternalDelegate.h"
#include "PreAddToFullInventory_InternalDelegate.h"
#include "RemovingFromInventory_InternalDelegate.h"
#include "InventoryListEntryHandle.h"
#include "InventoryListEntry.h"
#include "InventoryListComponent.generated.h"

class UInventoryCategoryData;
class AInventoryItemPickup;
class AActor;
class UInventoryCustomizationPartData;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXINVENTORY_API UInventoryListComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated)
    FInventoryListContainer InventoryList;
    
    UPROPERTY(Replicated)
    int32 InventoryCapacityUsed;
    
    UPROPERTY(Transient)
    TMap<UInventoryCategoryData*, FInventorySelectionTracker> SelectedIndexs;
    
    UPROPERTY()
    UClass* DroppedPickupClass;
    
    UPROPERTY(EditAnywhere)
    bool bCanPickupOnTouch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FGbxAttributeInteger MaxInventoryItems;
    
public:
    UPROPERTY(BlueprintAssignable)
    FInventoryItemAdded OnInventoryItemAdded;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryItemRemoved OnInventoryItemRemoved;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryItemUpdated OnInventoryItemUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryItemReplaced OnInventoryItemActorReplaced;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryItemQuantityUpdated OnInventoryItemQuantityUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryItemPickedUp OnInventoryItemPickedUp;
    
    UPROPERTY(Transient)
    FAddedToInventory_Internal OnAddedToInventory_Internal;
    
    UPROPERTY(Transient)
    FPreAddToFullInventory_Internal OnPreAddToFullInventory_Internal;
    
    UPROPERTY(Transient)
    FRemovingFromInventory_Internal OnRemovingFromInventory_Internal;
    
    UInventoryListComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    int32 SizeInInventory(AInventoryItemPickup* PickupToTest);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerTransferItem(const FInventoryListEntryHandle& InventoryItemHandle, AActor* DestinationActor, int32 Quantity);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetItemUIFlags(const FInventoryListEntryHandle& Handle, uint8 Flags, uint8 FlagsMask);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetItemsUIFlags(UInventoryCategoryData* Category, uint8 Flags, uint8 FlagsMask);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRemoveItem(const FInventoryListEntryHandle& InventoryItemHandle);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRemoveCustomizationPartFromInventoryActor(const FInventoryListEntryHandle& InventoryItemHandle, UInventoryCustomizationPartData* Part);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerDropItem(const FInventoryListEntryHandle& InventoryItemHandle, const FVector& InitialLocation, const FRotator& InitialRotation);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerConsumeItem(const FInventoryListEntryHandle& InventoryItemHandle, int32 Quantity);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerAddCustomizationPartToInventoryActor(const FInventoryListEntryHandle& InventoryItemHandle, UInventoryCustomizationPartData* Part);
    
    UFUNCTION(BlueprintPure)
    bool IsInventoryFull() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasActorInList(AActor* ItemActor);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetStoredInventoryActor(const FInventoryListEntryHandle& InventoryItemHandle);
    
    UFUNCTION(BlueprintCallable)
    void GetSelectedItemQuantity(const UInventoryCategoryData* ChildTypeToGet, int32& Quantity, int32& MaxQuantity);
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxInventoryItems() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetItem(const FInventoryListEntryHandle& InventoryItemHandle, FInventoryListEntry& ListEntry);
    
    UFUNCTION(BlueprintCallable)
    static FText GetInventoryListEntryDisplayName(FInventoryListEntry& ListEntry);
    
    UFUNCTION(BlueprintCallable)
    static FText GetInventoryListEntryDisplayDescription(FInventoryListEntry& ListEntry);
    
    UFUNCTION(BlueprintPure)
    int32 GetInventoryItemCount() const;
    
    UFUNCTION(BlueprintCallable)
    void GetInventoryHandlesOfType(const UInventoryCategoryData* ChildTypeToGet, TArray<FInventoryListEntryHandle>& ItemHandleList);
    
    UFUNCTION(BlueprintCallable)
    static FText GetInventoryDisplayName(AActor* InventoryActor);
    
    UFUNCTION(BlueprintCallable)
    static FText GetInventoryDisplayDescription(AActor* InventoryActor);
    
    UFUNCTION(BlueprintCallable)
    void GetCategoryOnlyInventoryHandles(const UInventoryCategoryData* ChildTypeToGet, TArray<FInventoryListEntryHandle>& ItemHandleList);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCategoryItemQuantity(const UInventoryCategoryData* ItemCategory);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetAndConsumeSelected(const UInventoryCategoryData* TypeToConsume, int32 Quantity);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetAndConsumeItem(const FInventoryListEntryHandle& InventoryItemHandle, int32 Quantity);
    
    UFUNCTION(BlueprintCallable)
    void ClearInventory(bool DestroyInventory);
    
    UFUNCTION(BlueprintCallable)
    bool CanUseSelected(const UInventoryCategoryData* ChildTypeToUse, int32 Quantity);
    
    UFUNCTION(BlueprintPure)
    bool CanSwapItemForPickup(AActor* Item, AInventoryItemPickup* Pickup) const;
    
    UFUNCTION(BlueprintCallable)
    void AddOrUpdateCategoryOnly(const UInventoryCategoryData* ItemCategory, int32 Quantity);
    
    UFUNCTION(BlueprintCallable)
    FInventoryListEntryHandle AddItemFromPickup(AInventoryItemPickup* PickupActor);
    
    UFUNCTION(BlueprintCallable)
    FInventoryListEntryHandle AddExternalItemEx(const UInventoryCategoryData* ItemCategory, AActor* ActorToAdd, int32 Quantity, int32 Flags, bool bConditionalDestroyActor, int32 DesiredSlot, bool bBypassInventoryFull);
    
    UFUNCTION(BlueprintCallable)
    FInventoryListEntryHandle AddExternalItem(const UInventoryCategoryData* ItemCategory, AActor* ActorToAdd, int32 Quantity, bool AddedByPickup, bool bAutoEquip, bool bConditionalDestroyActor, int32 DesiredSlot, bool bBypassInventoryFull);
    
    UFUNCTION(BlueprintCallable)
    bool AddCategory(const UInventoryCategoryData* ItemCategory, bool TrackQuantity);
    
};

