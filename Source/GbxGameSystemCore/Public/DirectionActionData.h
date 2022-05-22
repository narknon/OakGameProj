#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "NumericRange.h"
#include "DirectionActionData.generated.h"

class UGbxAction;

USTRUCT(BlueprintType)
struct FDirectionActionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNumericRange AngleRange;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> ActionClass;
    
    GBXGAMESYSTEMCORE_API FDirectionActionData();
};

