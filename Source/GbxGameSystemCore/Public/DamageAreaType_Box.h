#pragma once
#include "CoreMinimal.h"
#include "EDamageAreaBoxOriginType.h"
#include "DamageAreaType.h"
#include "AttributeInitializationData.h"
#include "DamageAreaType_Box.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UDamageAreaType_Box : public UDamageAreaType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData HalfHeight;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData HalfWidth;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData HalfDepth;
    
    UPROPERTY(EditAnywhere)
    EDamageAreaBoxOriginType OriginType;
    
    UPROPERTY(EditAnywhere)
    bool bDamageFallsOff;
    
public:
    UDamageAreaType_Box();
};

