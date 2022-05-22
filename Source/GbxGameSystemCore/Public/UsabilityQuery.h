#pragma once
#include "CoreMinimal.h"
#include "EUsabilityType.h"
#include "UsabilityQuery.generated.h"

class AController;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FUsabilityQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    AController* UserController;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UPrimitiveComponent* UsedComponent;
    
    UPROPERTY(BlueprintReadWrite)
    EUsabilityType UseType;
    
    UPROPERTY(BlueprintReadWrite)
    bool bUseHeld;
    
    FUsabilityQuery();
};

