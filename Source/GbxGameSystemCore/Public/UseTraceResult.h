#pragma once
#include "CoreMinimal.h"
#include "UsabilityInfo.h"
#include "UseTraceResult.generated.h"

class UUsableComponent;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FUseTraceResult {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UUsableComponent* UsableComponent;
    
    UPROPERTY(Export, NotReplicated)
    UPrimitiveComponent* HitComponent;
    
    UPROPERTY()
    FUsabilityInfo Usability;
    
    GBXGAMESYSTEMCORE_API FUseTraceResult();
};

