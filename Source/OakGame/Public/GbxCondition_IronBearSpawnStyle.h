#pragma once
#include "CoreMinimal.h"
#include "EIronBearSpawnStyle.h"
#include "GbxCondition.h"
#include "GbxCondition_IronBearSpawnStyle.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UGbxCondition_IronBearSpawnStyle : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    EIronBearSpawnStyle SpawnStyle;
    
public:
    UGbxCondition_IronBearSpawnStyle();
};

