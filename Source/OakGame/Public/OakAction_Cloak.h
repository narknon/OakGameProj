#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakAction_CoordinatedEffect.h"
#include "OakActionAbilityOwnedResourceInterface.h"
#include "OakActionCloak_TrackedTargetState.h"
#include "OakAction_Cloak.generated.h"

class UOakActionAbility_Cloak;
class AOakCharacter_Player;

UCLASS()
class UOakAction_Cloak : public UOakAction_CoordinatedEffect, public IOakActionAbilityOwnedResourceInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    UOakActionAbility_Cloak* OwnerActionAbility;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    AOakCharacter_Player* OwnerPlayer;
    
public:
    UOakAction_Cloak();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    TSubclassOf<UOakAction_CoordinatedEffect> GetTrackedTargetEffect(const FOakActionCloak_TrackedTargetState& TrackedTargetState);
    
    
    // Fix for true pure virtual functions not being implemented
};

