#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "UObject/NoExportTypes.h"
#include "PickupFlyToData.generated.h"

class UCurveFloat;

UCLASS()
class GBXINVENTORY_API UPickupFlyToData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MaxLifetime;
    
    UPROPERTY(EditAnywhere)
    float TargetThreshold;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableSpinSpeedRange: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableLinearSpeedRange: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableTargetRotationSpeedRange: 1;
    
    UPROPERTY(EditAnywhere)
    FRotator SpinSpeed;
    
    UPROPERTY(EditAnywhere)
    FRotator MaxSpinSpeed;
    
    UPROPERTY(EditAnywhere)
    float LinearSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxLinearSpeed;
    
    UPROPERTY(EditAnywhere)
    float LinearAcceleration;
    
    UPROPERTY(EditAnywhere)
    float TerminalLinearSpeed;
    
    UPROPERTY(EditAnywhere)
    float TargetRotationSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxTargetRotationSpeed;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* TargetScaleByDistanceCurve;
    
    UPROPERTY(EditAnywhere)
    float TargetScaleByDistanceBlendInSpeed;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* ArcCurve;
    
    UPROPERTY(EditAnywhere)
    float ArcCompletePercent;
    
    UPickupFlyToData();
};

