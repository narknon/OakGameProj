#pragma once
#include "CoreMinimal.h"
#include "GameResourcePoolNet.generated.h"

class UGameResourcePoolManagerComponent;

USTRUCT(BlueprintType)
struct FGameResourcePoolNet {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UGameResourcePoolManagerComponent* Manager;
    
    GBXGAMESYSTEMCORE_API FGameResourcePoolNet();
};

