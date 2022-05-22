#pragma once
#include "CoreMinimal.h"
#include "GbxAbilityEffectTargetResolutionData.h"
#include "GameplayTagContainer.h"
#include "OakAbilityEffectTargetResolutionData_Custom.generated.h"

class UPlanetData;
class UTeam;

UCLASS(BlueprintType)
class UOakAbilityEffectTargetResolutionData_Custom : public UGbxAbilityEffectTargetResolutionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UPlanetData*> Planets;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UTeam*> Teams;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FGameplayTag> GameplayTags;
    
    UOakAbilityEffectTargetResolutionData_Custom();
};

