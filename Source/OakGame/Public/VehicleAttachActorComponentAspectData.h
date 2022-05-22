#pragma once
#include "CoreMinimal.h"
#include "OakVehicleAspectData.h"
#include "VehicleAttachActorComponentAspectData.generated.h"

class UActorComponent;

UCLASS(EditInlineNew)
class UVehicleAttachActorComponentAspectData : public UOakVehicleAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    TSoftClassPtr<UActorComponent> ComponentToAttach;
    
    UPROPERTY(EditAnywhere)
    FName ComparisonTag;
    
public:
    UVehicleAttachActorComponentAspectData();
};

