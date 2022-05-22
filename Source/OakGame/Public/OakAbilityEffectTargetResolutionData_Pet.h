#pragma once
#include "CoreMinimal.h"
#include "GbxAbilityEffectTargetResolutionData.h"
#include "OakAbilityEffectTargetResolutionData_Pet.generated.h"

UCLASS()
class UOakAbilityEffectTargetResolutionData_Pet : public UGbxAbilityEffectTargetResolutionData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool bIsClassModResolver;
    
public:
    UOakAbilityEffectTargetResolutionData_Pet();
};

