#pragma once
#include "CoreMinimal.h"
#include "GbxAbilityEffectTargetResolutionData.h"
#include "OakAbilityEffectTargetResolutionData_Enemies.generated.h"

class UTeam;

UCLASS(BlueprintType)
class UOakAbilityEffectTargetResolutionData_Enemies : public UGbxAbilityEffectTargetResolutionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTeam* PlayersTeam;
    
    UOakAbilityEffectTargetResolutionData_Enemies();
};

