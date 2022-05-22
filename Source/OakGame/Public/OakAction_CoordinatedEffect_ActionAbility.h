#pragma once
#include "CoreMinimal.h"
#include "OakAction_CoordinatedEffect.h"
#include "OakActionAbilityOwnedResourceInterface.h"
#include "OakAction_CoordinatedEffect_ActionAbility.generated.h"

class AOakCharacter_Player;
class AOakPlayerController;
class UOakActionAbility;

UCLASS()
class UOakAction_CoordinatedEffect_ActionAbility : public UOakAction_CoordinatedEffect, public IOakActionAbilityOwnedResourceInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    AOakCharacter_Player* OwnerPlayer;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    AOakPlayerController* OwnerPlayerController;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    UOakActionAbility* OwnerActionAbility;
    
    UPROPERTY(EditDefaultsOnly)
    bool bBlocksActionAbilityShutdown;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    bool bIsShuttingDown;
    
public:
    UOakAction_CoordinatedEffect_ActionAbility();
    
    // Fix for true pure virtual functions not being implemented
};

