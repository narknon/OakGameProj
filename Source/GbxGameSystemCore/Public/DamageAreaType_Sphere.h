#pragma once
#include "CoreMinimal.h"
#include "DamageAreaType_BaseRound.h"
#include "DamageAreaType_Sphere.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UDamageAreaType_Sphere : public UDamageAreaType_BaseRound {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bTreatAsRadiusDamage;
    
    UPROPERTY(EditAnywhere)
    bool bDamageFallsOff;
    
public:
    UDamageAreaType_Sphere();
};

