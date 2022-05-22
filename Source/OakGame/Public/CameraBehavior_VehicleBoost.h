#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "VehicleOverrideData.h"
#include "CameraBehavior_VehicleBoost.generated.h"

UCLASS(EditInlineNew)
class OAKGAME_API UCameraBehavior_VehicleBoost : public UCameraBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FOVScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector RelativeLocationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bBlendWithSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlendInSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlendOutSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseBoostFOVAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BoostAnimationDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve BoostFOVAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BoostAnimationFOV;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve BoostTranslationAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowBoostFOVAnimationToStop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSeparatePowerSlideAndNormalBoost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PowerSlideBoostAnimationDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve PowerSlideBoostFOVAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve PowerSlideBoostTranslationAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowPowerSlideBoostFOVAnimationToStop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FVehicleOverrideData> OverrideByParts;
    
public:
    UCameraBehavior_VehicleBoost();
};

