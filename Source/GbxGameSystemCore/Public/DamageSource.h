#pragma once
#include "CoreMinimal.h"
#include "DamageSourceHealthTypeModifier.h"
#include "UObject/Object.h"
#include "AttributeInitializationData.h"
#include "DamageModifierAttributeCollection.h"
#include "DamageSource.generated.h"

UCLASS(Const)
class GBXGAMESYSTEMCORE_API UDamageSource : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDamageModifierAttributeCollection ModifierAttributes;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData AIInstigatedDamageScale;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FDamageSourceHealthTypeModifier> HealthTypeModifiers;
    
    UPROPERTY(EditAnywhere)
    bool bCanCauseCriticals;
    
    UPROPERTY(EditAnywhere)
    bool bCollectForHitReactions;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreCooldown;
    
    UDamageSource();
};

