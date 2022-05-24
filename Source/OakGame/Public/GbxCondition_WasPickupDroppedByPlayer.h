#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_WasPickupDroppedByPlayer.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UGbxCondition_WasPickupDroppedByPlayer : public UGbxCondition {
    GENERATED_BODY()
public:
    UGbxCondition_WasPickupDroppedByPlayer();
};

