#pragma once
#include "CoreMinimal.h"
#include "EmitterEnableData.h"
#include "BaseVehicleEffectData.h"
#include "VehicleEffectQueryData.h"
#include "VehicleEmitterEnableEffect.generated.h"

UCLASS(EditInlineNew)
class UVehicleEmitterEnableEffect : public UBaseVehicleEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVehicleEffectQueryData QueryData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FEmitterEnableData> EmittersEnableData;
    
    UVehicleEmitterEnableEffect();
};

