#pragma once
#include "CoreMinimal.h"
#include "DamageAreaType.h"
#include "AttributeInitializationData.h"
#include "DamageAreaType_BaseRound.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class UDamageAreaType_BaseRound : public UDamageAreaType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Radius;
    
    UPROPERTY(EditAnywhere)
    bool bComputeHitDirectionFromTarget;
    
    UPROPERTY(EditAnywhere)
    bool bExpandRadiusOverTime;
    
    UPROPERTY(EditAnywhere)
    bool bExpandingRadiusIsHollow;
    
public:
    UDamageAreaType_BaseRound();
};

