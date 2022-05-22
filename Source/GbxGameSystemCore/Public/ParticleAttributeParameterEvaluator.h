#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleParameterEvaluator -FallbackName=ParticleParameterEvaluator
#include "ParticleAttributeParameterEvaluator.generated.h"

class UGbxAttributeData;


UCLASS(EditInlineNew)
class UParticleParameterEvaluator : public UObject
{
};

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UParticleAttributeParameterEvaluator : public UParticleParameterEvaluator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGbxAttributeData* Attribute;
    
    UPROPERTY(EditAnywhere)
    FName ParameterName;
    
    UPROPERTY(EditAnywhere)
    bool bEvaluateEveryFrame;
    
    UParticleAttributeParameterEvaluator();
};

