#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxAbilitySpec.h"
#include "GbxAbilityManagerComponentDeferredOperation.generated.h"

class UGbxAbility;

USTRUCT(BlueprintType)
struct FGbxAbilityManagerComponentDeferredOperation {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGbxAbilitySpec AddSpec;
    
    UPROPERTY()
    TSubclassOf<UGbxAbility> RemoveSpec;
    
    GBXABILITIES_API FGbxAbilityManagerComponentDeferredOperation();
};

