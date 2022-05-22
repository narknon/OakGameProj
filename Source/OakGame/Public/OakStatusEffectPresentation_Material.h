#pragma once
#include "CoreMinimal.h"
#include "OakStatusEffectPresentation_Material.generated.h"

USTRUCT(BlueprintType)
struct FOakStatusEffectPresentation_Material {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bUsesMaterialParameter;
    
    UPROPERTY(EditAnywhere)
    FName MaterialParameterName;
    
    UPROPERTY(EditDefaultsOnly)
    float TransitionDuration;
    
    OAKGAME_API FOakStatusEffectPresentation_Material();
};

