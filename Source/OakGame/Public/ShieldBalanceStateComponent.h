#pragma once
#include "CoreMinimal.h"
#include "OakInventoryBalanceStateComponent.h"
#include "ShieldBalanceStateComponent.generated.h"

class UShieldAugment;
class UShieldDamageTypeAspectData;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UShieldBalanceStateComponent : public UOakInventoryBalanceStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<UShieldAugment*> ShieldAspects;
    
    UPROPERTY(Transient)
    UShieldDamageTypeAspectData* DamageTypeAspect;
    
public:
    UShieldBalanceStateComponent();
};

