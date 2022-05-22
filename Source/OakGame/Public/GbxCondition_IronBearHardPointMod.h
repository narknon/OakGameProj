#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "EIronBearModType.h"
#include "GbxCondition_IronBearHardPointMod.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UGbxCondition_IronBearHardPointMod : public UGbxCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EIronBearModType ModType;
    
public:
    UGbxCondition_IronBearHardPointMod();
};

