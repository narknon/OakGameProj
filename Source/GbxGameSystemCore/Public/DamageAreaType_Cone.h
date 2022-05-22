#pragma once
#include "CoreMinimal.h"
#include "DamageAreaType.h"
#include "AttributeInitializationData.h"
#include "DamageAreaType_Cone.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UDamageAreaType_Cone : public UDamageAreaType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Length;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ConeAngle;
    
public:
    UDamageAreaType_Cone();
};

