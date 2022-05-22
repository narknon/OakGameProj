#pragma once
#include "CoreMinimal.h"
#include "ConditionalDamageModifier.h"
#include "AttributeInitializationData.h"
#include "ConditionalDamageCriticalModifier.generated.h"

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UConditionalDamageCriticalModifier : public UConditionalDamageModifier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bOnlyApplyIfHitRegionWasCritical;
    
    UPROPERTY(EditAnywhere)
    bool bUseDefaultCriticalHitMultiplier;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData AdditionalCriticalMultiplier;
    
    UConditionalDamageCriticalModifier();
};

