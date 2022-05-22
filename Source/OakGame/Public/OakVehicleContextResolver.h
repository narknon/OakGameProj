#pragma once
#include "CoreMinimal.h"
#include "AttributeContextResolver.h"
#include "OakVehicleContextResolver.generated.h"

UCLASS(EditInlineNew)
class UOakVehicleContextResolver : public UAttributeContextResolver {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ComponentTag;
    
    UOakVehicleContextResolver();
};

