#pragma once
#include "CoreMinimal.h"
#include "OakVehicleAspectData.h"
#include "OakVehicleAdditionalWwiseConfigurationEventsAspectData.generated.h"

class UWwiseEvent;

UCLASS(EditInlineNew)
class UOakVehicleAdditionalWwiseConfigurationEventsAspectData : public UOakVehicleAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UWwiseEvent*> AdditionalWwiseConfigurationEvents;
    
public:
    UOakVehicleAdditionalWwiseConfigurationEventsAspectData();
};

