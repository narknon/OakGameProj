#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "OakCondition_HasGrenadeThrowAnimationOverride.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class OAKGAME_API UOakCondition_HasGrenadeThrowAnimationOverride : public UGbxCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 GrenadeThrowAnimationOverride;
    
    UOakCondition_HasGrenadeThrowAnimationOverride();
};

