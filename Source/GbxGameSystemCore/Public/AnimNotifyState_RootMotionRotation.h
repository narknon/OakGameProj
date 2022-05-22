#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_RootMotionRotation.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API UAnimNotifyState_RootMotionRotation : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 LockFootIkIndex;
    
    UPROPERTY(EditAnywhere)
    bool bLockFootIK;
    
public:
    UAnimNotifyState_RootMotionRotation();
};

