#pragma once
#include "CoreMinimal.h"
#include "OakAction_Anim_ActionAbility_Operative.h"
#include "OakAction_Anim_ActionAbility_Digiclone.generated.h"

class UOakActionAbility_Digiclone;

UCLASS()
class UOakAction_Anim_ActionAbility_Digiclone : public UOakAction_Anim_ActionAbility_Operative {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    UOakActionAbility_Digiclone* OwnerActionAbility_Digiclone;
    
public:
    UOakAction_Anim_ActionAbility_Digiclone();
};

