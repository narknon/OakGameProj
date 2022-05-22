#pragma once
#include "CoreMinimal.h"
#include "OakVehicleAspectData.h"
#include "VehicleEffectData.h"
#include "OakVehicleEffectAspectData.generated.h"

class UBaseVehicleEffectData;

UCLASS(EditInlineNew)
class UOakVehicleEffectAspectData : public UOakVehicleAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FVehicleEffectData> Effects;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<UBaseVehicleEffectData*> EffectsData;
    
    UPROPERTY(EditAnywhere)
    FName ComparisonTag;
    
public:
    UOakVehicleEffectAspectData();
};

