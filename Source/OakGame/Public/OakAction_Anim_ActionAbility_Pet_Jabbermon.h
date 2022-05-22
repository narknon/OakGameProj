#pragma once
#include "CoreMinimal.h"
#include "OakAction_Anim_ActionAbility_Pet.h"
#include "OakAction_Anim_ActionAbility_Pet_Jabbermon.generated.h"

class UOakActionAbility_HulkOut;

UCLASS()
class UOakAction_Anim_ActionAbility_Pet_Jabbermon : public UOakAction_Anim_ActionAbility_Pet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    UOakActionAbility_HulkOut* OwnerActionAbility_Jabbermon;
    
public:
    UOakAction_Anim_ActionAbility_Pet_Jabbermon();
};

