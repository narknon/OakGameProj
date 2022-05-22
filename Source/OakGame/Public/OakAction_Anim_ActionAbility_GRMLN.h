#pragma once
#include "CoreMinimal.h"
#include "OakAction_Anim_ActionAbility_Operative.h"
#include "OakAction_Anim_ActionAbility_GRMLN.generated.h"

class UOakActionAbility_GRMLN;

UCLASS()
class UOakAction_Anim_ActionAbility_GRMLN : public UOakAction_Anim_ActionAbility_Operative {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    UOakActionAbility_GRMLN* OwnerActionAbility_GRMLN;
    
public:
    UOakAction_Anim_ActionAbility_GRMLN();
};

