#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleParameterEvaluator -FallbackName=ParticleParameterEvaluator
#include "WeaponElementColorizationEvaluator.generated.h"

UCLASS(EditInlineNew)
class UWeaponElementColorizationEvaluator : public UParticleParameterEvaluator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParameterName;
    
    UWeaponElementColorizationEvaluator();
};

