#pragma once
#include "CoreMinimal.h"
#include "EBoostPoolValueComparisonMode.h"
#include "GbxCondition.h"
#include "GbxCondition_VehicleBoostPoolValue.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class UGbxCondition_VehicleBoostPoolValue : public UGbxCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBoostPoolValueComparisonMode ComparisonMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BoostPoolValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bValueIsPercentage;
    
    UGbxCondition_VehicleBoostPoolValue();
};

