#pragma once
#include "CoreMinimal.h"
#include "ControlledMove.h"
#include "OakControlledMove.generated.h"

UCLASS()
class UOakControlledMove : public UControlledMove {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bSpeedAffectedByCryo: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTriggerOakTriggersAlongTeleport: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bBlockECHOMenu: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bBlockGroundSlam: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bBlockActionAbility: 1;
    
    UOakControlledMove();
};

