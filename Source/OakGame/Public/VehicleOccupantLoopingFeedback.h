#pragma once
#include "CoreMinimal.h"
#include "VehicleOccupantLoopingFeedback.generated.h"

class UFeedbackData;
class APlayerController;

USTRUCT(BlueprintType)
struct FVehicleOccupantLoopingFeedback {
    GENERATED_BODY()
public:
    UPROPERTY()
    UFeedbackData* FeedbackData;
    
private:
    UPROPERTY()
    TArray<APlayerController*> AffectedControllers;
    
public:
    OAKGAME_API FVehicleOccupantLoopingFeedback();
};

