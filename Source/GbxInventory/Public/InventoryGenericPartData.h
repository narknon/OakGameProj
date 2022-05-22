#pragma once
#include "CoreMinimal.h"
#include "InventoryPartData.h"
#include "GameplayTagContainer.h"
#include "InventoryGenericPartData.generated.h"

UCLASS()
class GBXINVENTORY_API UInventoryGenericPartData : public UInventoryPartData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool bOverridePartSelection;
    
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer Tags;
    
public:
    UInventoryGenericPartData();
};

