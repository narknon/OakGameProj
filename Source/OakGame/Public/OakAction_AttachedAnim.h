#pragma once
#include "CoreMinimal.h"
#include "OakAction_Anim.h"
#include "PawnInterpolationInfo.h"
#include "OakAction_AttachedAnim.generated.h"

UCLASS()
class UOakAction_AttachedAnim : public UOakAction_Anim {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FPawnInterpolationInfo InterpolationInfo;
    
public:
    UOakAction_AttachedAnim();
};

