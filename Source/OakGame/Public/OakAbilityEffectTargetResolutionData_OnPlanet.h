#pragma once
#include "CoreMinimal.h"
#include "GbxAbilityEffectTargetResolutionData.h"
#include "OakAbilityEffectTargetResolutionData_OnPlanet.generated.h"

class UPlanetData;

UCLASS(BlueprintType)
class UOakAbilityEffectTargetResolutionData_OnPlanet : public UGbxAbilityEffectTargetResolutionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<UPlanetData>> Planets;
    
    UOakAbilityEffectTargetResolutionData_OnPlanet();
};

