#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CurrentOperativeStandInAbilitySlotInfo.generated.h"

class UOakActionAbility;
class AStandInAuxiliaryActor;

USTRUCT(BlueprintType)
struct FCurrentOperativeStandInAbilitySlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<UOakActionAbility> ActionAbility;
    
    UPROPERTY()
    AStandInAuxiliaryActor* AuxiliaryActor;
    
    OAKGAME_API FCurrentOperativeStandInAbilitySlotInfo();
};

