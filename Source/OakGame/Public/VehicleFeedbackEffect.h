#pragma once
#include "CoreMinimal.h"
#include "BaseVehicleEffectDataWithLocation.h"
#include "VehicleFeedbackEffect.generated.h"

class UFeedbackData;

UCLASS(EditInlineNew)
class UVehicleFeedbackEffect : public UBaseVehicleEffectDataWithLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFeedbackData* FeedbackData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FeedbackScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bLoop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bLocalOnly;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bStopFeedback;
    
    UVehicleFeedbackEffect();
};

