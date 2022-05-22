#pragma once
#include "CoreMinimal.h"
#include "DamageAreaType.h"
#include "AttributeInitializationData.h"
#include "DamageAreaType_Capsule.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UDamageAreaType_Capsule : public UDamageAreaType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData HalfHeight;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Radius;
    
public:
    UDamageAreaType_Capsule();
};

