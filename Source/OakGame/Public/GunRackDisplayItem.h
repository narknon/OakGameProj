#pragma once
#include "CoreMinimal.h"
#include "OakInventoryItemPickup.h"
#include "DisplayItemChangedEventDelegate.h"
#include "GunRackDisplayItem.generated.h"

class UTextRenderComponent;
class AOakPlayerController;
class UGbxMenuData;
class UGunRackSlotData;
class USceneComponent;

UCLASS()
class OAKGAME_API AGunRackDisplayItem : public AOakInventoryItemPickup {
    GENERATED_BODY()
public:
    UPROPERTY()
    FDisplayItemChangedEvent OnItemChanged;
    
    UPROPERTY()
    FDisplayItemChangedEvent OnItemPickedUp;
    
    UPROPERTY(Replicated, Transient)
    uint8 AttachedToSlot;
    
    UPROPERTY(Replicated, Transient)
    UGunRackSlotData* AttachedToData;
    
    UPROPERTY(EditAnywhere)
    bool bLeavePlacedItemInInventory;
    
    UPROPERTY(EditAnywhere)
    UGbxMenuData* PlaceObjectMenuData;
    
private:
    UPROPERTY(Export, Transient)
    USceneComponent* AttachedToComponent;
    
    UPROPERTY(Export, Transient)
    UTextRenderComponent* DisplayTextComponent;
    
public:
    AGunRackDisplayItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool IsItemOwnedBy(AOakPlayerController* User);
    
    UFUNCTION(BlueprintCallable)
    bool IsEmptyDisplayItem();
    
};

