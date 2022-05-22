#pragma once
#include "CoreMinimal.h"
#include "GbxAbilityEffectTargetResolutionData.h"
#include "OakAbilityEffectTargetResolutionData_PetOfOneOnTeam.generated.h"

class UTeam;

UCLASS(BlueprintType)
class UOakAbilityEffectTargetResolutionData_PetOfOneOnTeam : public UGbxAbilityEffectTargetResolutionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UTeam*> Teams;
    
    UOakAbilityEffectTargetResolutionData_PetOfOneOnTeam();
};

