#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "CameraBehavior.h"
#include "VehicleOverrideData.h"
#include "CameraBehavior_VehicleTransitionOut.generated.h"

class UGbxActionComponent;

UCLASS(EditInlineNew)
class OAKGAME_API UCameraBehavior_VehicleTransitionOut : public UCameraBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RotateSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LookAtFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PitchMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PitchMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve RotationCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve LocationCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName LookAtSocket;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FVehicleOverrideData> OverrideByParts;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NoAnimationDuration;
    
    UPROPERTY(Export, Transient)
    UGbxActionComponent* ActionComp;
    
public:
    UCameraBehavior_VehicleTransitionOut();
};

