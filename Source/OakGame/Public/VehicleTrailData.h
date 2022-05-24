#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "VehicleTrailData.generated.h"

class UGbxVehicleWheel;
class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FVehicleTrailData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName WheelFXSocketName;
    
    UPROPERTY(EditAnywhere)
    FName WheelPhysBoneName;
    
    UPROPERTY(EditAnywhere)
    FVector LocalOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator LocalRotationOffset;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* TrailPSComponent;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* WadingPSComponent;
    
    UPROPERTY(Transient)
    UGbxVehicleWheel* WheelRef;
    
    OAKGAME_API FVehicleTrailData();
};

