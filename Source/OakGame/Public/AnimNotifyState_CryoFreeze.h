#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_CryoFreeze.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotifyState_CryoFreeze : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bDisableAnimFreeze;
    
public:
    UAnimNotifyState_CryoFreeze();
};

