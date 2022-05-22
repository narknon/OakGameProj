#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InventoryAspectData.h"
#include "WeaponUseModeSecondaryAspectData.generated.h"

class UActorComponent;

UCLASS(EditInlineNew)
class UWeaponUseModeSecondaryAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    uint8 bCreateComponent: 1;
    
    UPROPERTY(EditInstanceOnly)
    uint8 bAdditive: 1;
    
    UPROPERTY(EditInstanceOnly)
    uint8 bShareBetweenUseModes: 1;
    
    UPROPERTY(EditInstanceOnly)
    int32 UseModeBitmask;
    
    UPROPERTY(EditInstanceOnly, Instanced)
    UActorComponent* Component;
    
    UPROPERTY(VisibleInstanceOnly)
    TSubclassOf<UActorComponent> ComparisonClass;
    
public:
    UWeaponUseModeSecondaryAspectData();
private:
    UFUNCTION()
    void EnumerateComponentTypes(TArray<TSubclassOf<UActorComponent>>& OutComponentTypes) const;
    
};

