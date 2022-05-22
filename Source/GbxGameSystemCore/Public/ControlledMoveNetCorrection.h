#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ControlledMoveNetCorrection.generated.h"

class UControlledMove;

USTRUCT(BlueprintType)
struct FControlledMoveNetCorrection {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Runtime;
    
    UPROPERTY()
    TSubclassOf<UControlledMove> ControlledMove;
    
    GBXGAMESYSTEMCORE_API FControlledMoveNetCorrection();
};

