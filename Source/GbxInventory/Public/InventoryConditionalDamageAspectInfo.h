#pragma once
#include "CoreMinimal.h"
#include "EInventoryConditionalDamageApplicationTarget.h"
#include "InventoryConditionalDamageAspectInfo.generated.h"

class UConditionalDamageModifier;

USTRUCT(BlueprintType)
struct FInventoryConditionalDamageAspectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UConditionalDamageModifier* ConditionalModifier;
    
    UPROPERTY(EditAnywhere)
    bool bUseInventoryForDamageValueContext;
    
    UPROPERTY(EditAnywhere)
    EInventoryConditionalDamageApplicationTarget ApplicationTarget;
    
    GBXINVENTORY_API FInventoryConditionalDamageAspectInfo();
};

