#pragma once
#include "CoreMinimal.h"
#include "DamageModifierComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "OakDamageModifierComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakDamageModifierComponent : public UDamageModifierComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGbxAttributeFloat BaseStatusEffectChanceOverride;
    
    UPROPERTY(EditAnywhere)
    FGbxAttributeFloat BaseStatusEffectDamageOverride;
    
    UPROPERTY(EditAnywhere)
    bool bStatusEffectDamageIsPercent;
    
    UPROPERTY(EditAnywhere)
    FGbxAttributeFloat BaseStatusEffectDurationOverride;
    
    UPROPERTY(EditAnywhere)
    FGbxAttributeFloat GoreModifier;
    
    UPROPERTY(EditAnywhere)
    FGbxAttributeFloat GibModifier;
    
public:
    UOakDamageModifierComponent();
};

