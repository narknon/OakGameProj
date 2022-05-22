#pragma once
#include "CoreMinimal.h"
#include "OakAction_Anim_ActionAbility_Operative.h"
#include "OakAction_Anim_ActionAbility_Barrier.generated.h"

class UOakActionAbility_Barrier;

UCLASS()
class UOakAction_Anim_ActionAbility_Barrier : public UOakAction_Anim_ActionAbility_Operative {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    UOakActionAbility_Barrier* OwnerActionAbility_Barrier;
    
public:
    UOakAction_Anim_ActionAbility_Barrier();
};

