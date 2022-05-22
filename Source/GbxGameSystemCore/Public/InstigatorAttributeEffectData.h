#pragma once
#include "CoreMinimal.h"
#include "AttributeEffectData.h"
#include "EInstigatorAttributeEffectModifierValueContext.h"
#include "EInstigatorAttributeEffectAttributeToModifyContextSource.h"
#include "InstigatorAttributeEffectData.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FInstigatorAttributeEffectData : public FAttributeEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EInstigatorAttributeEffectAttributeToModifyContextSource AttributeToModifyContextSource;
    
    UPROPERTY(EditAnywhere)
    EInstigatorAttributeEffectModifierValueContext ModifierValueContext;
    
    FInstigatorAttributeEffectData();
};

