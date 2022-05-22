#pragma once
#include "CoreMinimal.h"
#include "InventoryAspectData.h"
#include "InventoryConditionalDamageAspectInfo.h"
#include "InventoryConditionalDamageAspectData.generated.h"

UCLASS(EditInlineNew)
class GBXINVENTORY_API UInventoryConditionalDamageAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FInventoryConditionalDamageAspectInfo> DamageConditionals;
    
    UInventoryConditionalDamageAspectData();
};

