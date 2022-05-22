#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "EVehiclePropertyValueType.h"
#include "OakVehiclePropertyValueResolver.generated.h"

UCLASS(EditInlineNew)
class UOakVehiclePropertyValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EVehiclePropertyValueType ValueToResolve;
    
    UOakVehiclePropertyValueResolver();
};

