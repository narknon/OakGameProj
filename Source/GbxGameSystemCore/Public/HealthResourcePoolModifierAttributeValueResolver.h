#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "HealthResourcePoolModifierAttributeValueResolver.generated.h"

class UGameResourcePoolData;

UCLASS(EditInlineNew)
class UHealthResourcePoolModifierAttributeValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGameResourcePoolData* HealthResourcePool;
    
    UHealthResourcePoolModifierAttributeValueResolver();
};

