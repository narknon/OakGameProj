#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OakInventoryItem.generated.h"

class UInventoryBalanceStateComponent;
class AOakCharacter;
class AInventoryItemPickup;

UCLASS()
class OAKGAME_API AOakInventoryItem : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryUsedDelegate, AOakCharacter*, PickupInstigator);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryPickedUpDelegate, AOakCharacter*, PickupInstigator);
    
    UPROPERTY(BlueprintAssignable)
    FInventoryPickedUpDelegate OnItemPickedUp;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryUsedDelegate OnItemUsedInInventory;
    
    UPROPERTY(EditAnywhere)
    bool CanBeUsedInInventory;
    
    UPROPERTY(EditAnywhere)
    bool ConsumeWhenUsed;
    
protected:
    UPROPERTY(EditAnywhere)
    FText OverrideErrorText;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UInventoryBalanceStateComponent* InventoryBalanceState;
    
public:
    AOakInventoryItem();
    UFUNCTION(BlueprintCallable)
    void OnPickedUp(AOakCharacter* PickupInstigator);
    
    UFUNCTION(BlueprintPure)
    bool HasValidInventoryBalanceState() const;
    
    UFUNCTION(BlueprintCallable)
    FText GetOverrideErrorText();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanBeUsedFromInventory(AOakCharacter* InventoryOwner) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanBePickedUp(AOakCharacter* PickupInstigator, int32 Quantity, bool UsedByInstigator, AInventoryItemPickup* WorldPickupActor) const;
    
};

