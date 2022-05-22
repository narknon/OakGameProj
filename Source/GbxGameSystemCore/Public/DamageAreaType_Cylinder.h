#pragma once
#include "CoreMinimal.h"
#include "DamageAreaType_BaseRound.h"
#include "AttributeInitializationData.h"
#include "DamageAreaType_Cylinder.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UDamageAreaType_Cylinder : public UDamageAreaType_BaseRound {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData HalfHeight;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData HeightOffset;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData WedgeAngle;
    
public:
    UDamageAreaType_Cylinder();
};

