#pragma once
#include "CoreMinimal.h"
#include "OakControlledMove.h"
#include "OakControlledMove_ActionAbility.generated.h"

class UOakAction_Anim_ActionAbility;

UCLASS()
class UOakControlledMove_ActionAbility : public UOakControlledMove {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    UOakAction_Anim_ActionAbility* ActionOwner;
    
public:
    UOakControlledMove_ActionAbility();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnReceivedActionOwner();
    
};

