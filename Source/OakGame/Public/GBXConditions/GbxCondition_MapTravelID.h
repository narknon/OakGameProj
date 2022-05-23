#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_MapTravelID.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UGbxCondition_MapTravelID : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    uint8 MapNameEnumIdx;
    
    UPROPERTY(EditAnywhere)
    uint8 ZoneNameEnumIdx;
    
public:
    UGbxCondition_MapTravelID();
};

