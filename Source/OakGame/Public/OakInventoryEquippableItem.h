#pragma once
#include "CoreMinimal.h"
#include "OakInventoryItem.h"
#include "OakInventoryEquippableItem.generated.h"

class AOakCharacter;

UCLASS()
class OAKGAME_API AOakInventoryEquippableItem : public AOakInventoryItem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryEquipDelegate, AOakCharacter*, EquipInstigator);
    
    UPROPERTY(BlueprintAssignable)
    FInventoryEquipDelegate OnEquippedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryEquipDelegate OnUnequippedDelegate;
    
    AOakInventoryEquippableItem();
    UFUNCTION(BlueprintCallable)
    void OnUnequipped(AOakCharacter* EquipInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnEquipped(AOakCharacter* EquipInstigator);
    
};

