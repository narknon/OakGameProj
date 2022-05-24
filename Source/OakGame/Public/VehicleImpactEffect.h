#pragma once
#include "CoreMinimal.h"
#include "BaseVehicleEffectDataWithLocation.h"
#include "Engine/EngineTypes.h"
#include "RelativeDirectionData.h"
#include "VehicleImpactEffect.generated.h"

class UImpactData;

UCLASS(EditInlineNew)
class UVehicleImpactEffect : public UBaseVehicleEffectDataWithLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UImpactData* ImpactData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRelativeDirectionData ImpactTraceDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ImpactTraceLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UVehicleImpactEffect();
};

