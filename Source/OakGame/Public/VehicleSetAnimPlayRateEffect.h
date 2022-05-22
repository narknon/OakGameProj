#pragma once
#include "CoreMinimal.h"
#include "BaseVehicleEffectData.h"
#include "VehicleSetAnimPlayRateEffect.generated.h"

UCLASS(EditInlineNew)
class UVehicleSetAnimPlayRateEffect : public UBaseVehicleEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SkelMeshTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartPlayRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StopPlayRate;
    
    UVehicleSetAnimPlayRateEffect();
};

