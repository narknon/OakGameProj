#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "OakActionAbility_AnimNotifyState.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UOakActionAbility_AnimNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FName StartedEventName;
    
    UPROPERTY(EditAnywhere)
    FName EndedEventName;
    
public:
    UOakActionAbility_AnimNotifyState();
};

