#pragma once
#include "CoreMinimal.h"
#include "GbxAbilityEffectTargetResolutionData.h"
#include "GameplayTagContainer.h"
#include "OakAbilityEffectTargetResolutionData_HasTag.generated.h"

UCLASS(BlueprintType)
class UOakAbilityEffectTargetResolutionData_HasTag : public UGbxAbilityEffectTargetResolutionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FGameplayTag> GameplayTags;
    
    UOakAbilityEffectTargetResolutionData_HasTag();
};

