#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "HapticFeedbackData.generated.h"

class UHapticFeedbackEffect_Curve;

USTRUCT(BlueprintType)
struct FHapticFeedbackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UHapticFeedbackEffect_Curve* HapticFeedbackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EControllerHand Hand;
    
    GBXGAMESYSTEMCORE_API FHapticFeedbackData();
};

