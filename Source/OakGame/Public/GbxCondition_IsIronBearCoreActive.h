#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "EIronBearCoreType.h"
#include "GbxCondition_IsIronBearCoreActive.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UGbxCondition_IsIronBearCoreActive : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    EIronBearCoreType CoreType;
    
public:
    UGbxCondition_IsIronBearCoreActive();
};

