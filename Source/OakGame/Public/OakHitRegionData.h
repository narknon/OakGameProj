#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "HitRegionData.h"
#include "OakHitRegionModifierData.h"
#include "OakHitRegionData.generated.h"

UCLASS()
class UOakHitRegionData : public UHitRegionData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bUseStatusEffectChanceScale;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData StatusEffectChanceScale;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakHitRegionModifierData> DamageModifiers;
    
public:
    UOakHitRegionData();
};

