#pragma once
#include "CoreMinimal.h"
#include "OakPresentationParamTransitionInstance.generated.h"

class UParticleSystemComponent;
class UOakStatusEffectPresentationData;

USTRUCT(BlueprintType)
struct FOakPresentationParamTransitionInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UOakStatusEffectPresentationData* FXData;
    
    UPROPERTY(Export)
    UParticleSystemComponent* ScreenComponent;
    
public:
    OAKGAME_API FOakPresentationParamTransitionInstance();
};

