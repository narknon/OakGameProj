#pragma once
#include "CoreMinimal.h"
#include "GbxAbilityEffectTargetResolutionData.h"
#include "OakAbilityEffectTargetResolutionData_OnTeam.generated.h"

class UTeam;

UCLASS(BlueprintType)
class UOakAbilityEffectTargetResolutionData_OnTeam : public UGbxAbilityEffectTargetResolutionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UTeam*> Teams;
    
    UOakAbilityEffectTargetResolutionData_OnTeam();
};

