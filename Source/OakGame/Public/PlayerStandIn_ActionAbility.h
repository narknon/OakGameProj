#pragma once
#include "CoreMinimal.h"
#include "FrontendStandInAuxiliaryActorData.h"
#include "PlayerStandIn_ActionAbility.generated.h"

class UOakActionAbility;

USTRUCT(BlueprintType)
struct FPlayerStandIn_ActionAbility {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UOakActionAbility> ActionAbilityClass;
    
    UPROPERTY(EditAnywhere)
    FFrontendStandInAuxiliaryActorData ActorData;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideDefault;
    
    OAKGAME_API FPlayerStandIn_ActionAbility();
};

