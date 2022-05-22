#pragma once
#include "CoreMinimal.h"
#include "GbxAbilityManagerComponentDeferredOperation.h"
#include "GbxAbilityManagerComponentListLock.generated.h"

class UGbxAbilityManagerComponent;

USTRUCT(BlueprintType)
struct FGbxAbilityManagerComponentListLock {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UGbxAbilityManagerComponent* Owner;
    
    UPROPERTY()
    TArray<FGbxAbilityManagerComponentDeferredOperation> DeferredOps;
    
public:
    GBXABILITIES_API FGbxAbilityManagerComponentListLock();
};

