#pragma once
#include "CoreMinimal.h"
#include "OakAbility.h"
#include "GbxInputActionReceiverInterface.h"
#include "EPlayerInputLockType.h"
#include "OakInputAbility.generated.h"

UCLASS()
class UOakInputAbility : public UOakAbility, public IGbxInputActionReceiverInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bAvailableOnLadders;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAvailableWhileMantling;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAvailableWhenReviving;
    
    UPROPERTY(EditDefaultsOnly)
    bool bPauseWhenInputLocked;
    
    UPROPERTY(EditDefaultsOnly)
    EPlayerInputLockType RespectGlobalLockType;
    
public:
    UOakInputAbility();
    
    // Fix for true pure virtual functions not being implemented
};

