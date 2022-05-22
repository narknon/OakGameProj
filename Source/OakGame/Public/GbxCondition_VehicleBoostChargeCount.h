#pragma once
#include "CoreMinimal.h"
#include "EBoostChargeCountComparisonMode.h"
#include "GbxCondition.h"
#include "GbxCondition_VehicleBoostChargeCount.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class UGbxCondition_VehicleBoostChargeCount : public UGbxCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBoostChargeCountComparisonMode ComparisonMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NeededChargeCount;
    
    UGbxCondition_VehicleBoostChargeCount();
};

