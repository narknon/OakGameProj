#pragma once
#include "CoreMinimal.h"
#include "GameResourcePoolReference.generated.h"

class UGameResourcePoolManagerComponent;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGameResourcePoolReference {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 PoolIndexInManager;
    
    UPROPERTY(Export)
    UGameResourcePoolManagerComponent* PoolManager;
    
    FGameResourcePoolReference();
};

