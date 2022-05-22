#pragma once
#include "CoreMinimal.h"
#include "InventoryAspectData.h"
#include "InventoryAspectAbilityInfo.h"
#include "InventoryAbilityAspectData.generated.h"

UCLASS(EditInlineNew)
class UInventoryAbilityAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FInventoryAspectAbilityInfo> Abilities;
    
    UInventoryAbilityAspectData();
};

