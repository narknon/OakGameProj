#pragma once
#include "CoreMinimal.h"
#include "StatusEffectStackingStrategyData_DurationRefundData.generated.h"

USTRUCT(BlueprintType)
struct FStatusEffectStackingStrategyData_DurationRefundData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bApplyReplacementRefund;
    
    UPROPERTY(EditAnywhere)
    float RefundPercent;
    
    GBXGAMESYSTEMCORE_API FStatusEffectStackingStrategyData_DurationRefundData();
};

