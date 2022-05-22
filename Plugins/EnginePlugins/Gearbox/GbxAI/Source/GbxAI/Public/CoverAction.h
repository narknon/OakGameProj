#pragma once
#include "CoreMinimal.h"
#include "CoverUseParams.h"
#include "CoverAction.generated.h"

class UCoverSlotComponent;
class UCoverStyleData;
class AActor;

USTRUCT(BlueprintType)
struct FCoverAction {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UCoverSlotComponent* Slot;
    
    UPROPERTY()
    UCoverStyleData* Style;
    
    UPROPERTY()
    AActor* Target;
    
    UPROPERTY()
    FCoverUseParams Params;
    
    GBXAI_API FCoverAction();
};

