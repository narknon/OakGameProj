#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "EGameResourcePoolState.h"
#include "GbxCondition_CheckHealthPoolStateByResourceType.generated.h"

class UGameResourceData;

UCLASS(CollapseCategories, Const, EditInlineNew)
class UGbxCondition_CheckHealthPoolStateByResourceType : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UGameResourceData* ResourceType;
    
    UPROPERTY(EditDefaultsOnly)
    EGameResourcePoolState ResourcePoolState;
    
public:
    UGbxCondition_CheckHealthPoolStateByResourceType();
};

