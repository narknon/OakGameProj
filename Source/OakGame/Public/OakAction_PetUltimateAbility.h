#pragma once
#include "CoreMinimal.h"
#include "OakAction_RandomAnim.h"
#include "OakActionAbilityOwnedResourceInterface.h"
#include "OakAction_PetUltimateAbility.generated.h"

class UOakActionAbility_Beastmaster;
class AOakCharacter_Player;

UCLASS()
class UOakAction_PetUltimateAbility : public UOakAction_RandomAnim, public IOakActionAbilityOwnedResourceInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    UOakActionAbility_Beastmaster* OwnerActionAbility;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    AOakCharacter_Player* OwnerPlayer;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    bool bIsForcedShutdown;
    
public:
    UOakAction_PetUltimateAbility();
    
    // Fix for true pure virtual functions not being implemented
};

