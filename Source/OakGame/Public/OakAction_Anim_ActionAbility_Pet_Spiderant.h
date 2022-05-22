#pragma once
#include "CoreMinimal.h"
#include "OakAction_Anim_ActionAbility_Pet.h"
#include "OakAction_Anim_ActionAbility_Pet_Spiderant.generated.h"

class UOakActionAbility_Cloak;

UCLASS()
class UOakAction_Anim_ActionAbility_Pet_Spiderant : public UOakAction_Anim_ActionAbility_Pet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    UOakActionAbility_Cloak* OwnerActionAbility_Spiderant;
    
public:
    UOakAction_Anim_ActionAbility_Pet_Spiderant();
};

