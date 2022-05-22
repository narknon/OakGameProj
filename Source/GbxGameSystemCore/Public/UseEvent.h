#pragma once
#include "CoreMinimal.h"
#include "EUsabilityType.h"
#include "UseEvent.generated.h"

class AController;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FUseEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    AController* UserController;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UPrimitiveComponent* UsedComponent;
    
    UPROPERTY(BlueprintReadWrite)
    EUsabilityType UseType;
    
    UPROPERTY(BlueprintReadWrite)
    bool bWasHeld;
    
    FUseEvent();
};

