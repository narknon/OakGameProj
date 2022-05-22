#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "Engine/Scene.h"
#include "CameraBehavior_FocusDOF.generated.h"

class UCameraState;
class UMaterialInstanceDynamic;

UCLASS(EditInlineNew)
class UCameraBehavior_FocusDOF : public UCameraBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPostProcessSettings PostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bWorldFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDynamicFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FocusSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceBasedNearTransitionRegionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceBasedFarTransitionRegionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForegroundFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForegroundFocusDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForegroundFocusNearRegionPct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ZoomedForegroundNearRegion;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlurVignetteSharpness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartBlurVignetteSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ColorVignetteSharpness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartColorVignetteSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LongitudinalMotionScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LateralMotionScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableZoomTransition;
    
protected:
    UPROPERTY(Transient)
    FPostProcessSettings BlendOutPPSettings;
    
    UPROPERTY(Transient)
    FPostProcessSettings AppliedPPSettings;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* ZoomMaterialInst;
    
public:
    UCameraBehavior_FocusDOF();
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintNativeEvent)
    void ApplyPostProcess(UCameraState* State, float DeltaTime, float BlendWeight, const FPostProcessSettings& PPSettings);
    
};

