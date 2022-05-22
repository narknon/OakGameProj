#pragma once
#include "CoreMinimal.h"
#include "OakAction_Anim_ActionAbility_Pet.h"
#include "OakAction_Anim_ActionAbility_Pet_Skag.generated.h"

class UOakActionAbility_RakkAttack;

UCLASS()
class UOakAction_Anim_ActionAbility_Pet_Skag : public UOakAction_Anim_ActionAbility_Pet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    UOakActionAbility_RakkAttack* OwnerActionAbility_Skag;
    
public:
    UOakAction_Anim_ActionAbility_Pet_Skag();
};

