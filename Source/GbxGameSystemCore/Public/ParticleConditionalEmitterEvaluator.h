#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleParameterEvaluator -FallbackName=ParticleParameterEvaluator
#include "ParticleConditionalEmitterEvaluator.generated.h"

class UGbxCondition;

UCLASS(EditInlineNew)
class UParticleConditionalEmitterEvaluator : public UParticleParameterEvaluator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditAnywhere)
    FName EmitterName;
    
    UPROPERTY(EditAnywhere)
    bool bEnableIfTrue;
    
    UPROPERTY(EditAnywhere)
    bool bEvaluateEveryFrame;
    
    UParticleConditionalEmitterEvaluator();
};

