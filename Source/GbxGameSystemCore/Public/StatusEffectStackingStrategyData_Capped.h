#pragma once
#include "CoreMinimal.h"
#include "StatusEffectStackingStrategyData_DurationRefundData.h"
#include "StatusEffectStackingStrategyData.h"
#include "EStatusEffectStackingInstanceReplacementCriteria.h"
#include "EStatusEffectStackingInstanceSelectionCriteria.h"
#include "StatusEffectStackingStrategyData_Capped.generated.h"

UCLASS()
class UStatusEffectStackingStrategyData_Capped : public UStatusEffectStackingStrategyData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    int32 MaxCount;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCapPerOwner;
    
    UPROPERTY(EditDefaultsOnly)
    bool bNoInfiniteDuration;
    
    UPROPERTY(EditDefaultsOnly)
    EStatusEffectStackingInstanceSelectionCriteria SelectionCriteria;
    
    UPROPERTY(EditDefaultsOnly)
    EStatusEffectStackingInstanceReplacementCriteria ReplacementCriteria;
    
    UPROPERTY(EditDefaultsOnly)
    FStatusEffectStackingStrategyData_DurationRefundData DurationRefund;
    
public:
    UStatusEffectStackingStrategyData_Capped();
};

