#pragma once
#include "CoreMinimal.h"
#include "OakVehicleAspectData.h"
#include "OakVehicleEffectAspectDataCollection.generated.h"

class UOakVehicleEffectAspectData;

UCLASS(EditInlineNew)
class UOakVehicleEffectAspectDataCollection : public UOakVehicleAspectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<UOakVehicleEffectAspectData*> EffectAspectDataList;
    
    UOakVehicleEffectAspectDataCollection();
};

