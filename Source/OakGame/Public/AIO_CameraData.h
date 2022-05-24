#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "AIOCameraStateInfo.h"
#include "AIOCameraEntryTransition.h"
#include "Engine/Scene.h"
#include "GbxEasingFunc.h"
#include "AIO_CameraData.generated.h"

UCLASS()
class OAKGAME_API UAIO_CameraData : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FAIOCameraStateInfo> CameraStates;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIOCameraEntryTransition> CameraEntryTransitions;
    
public:
    UPROPERTY(EditAnywhere)
    FGbxEasingFunc CameraEntryEasing;
    
    UPROPERTY(EditAnywhere)
    float CameraEntryLocationDuration;
    
    UPROPERTY(EditAnywhere)
    float CameraEntryRotationDuration;
    
    UPROPERTY(EditAnywhere)
    float TargetFOV;
    
    UPROPERTY(EditAnywhere)
    float TargetFOVSplitscreen;
    
    UPROPERTY(EditAnywhere)
    float TargetFOVVerticalSplitscreen;
    
    UPROPERTY(EditAnywhere)
    float TargetFOVQuadSplitscreen;
    
    UPROPERTY(EditAnywhere)
    bool bRestoreCameraRotation;
    
    UPROPERTY(EditAnywhere)
    FPostProcessSettings PostProcessSettings;
    
    UPROPERTY(EditAnywhere)
    float DOFMagnitudeInterpTime;
    
    UPROPERTY(EditAnywhere)
    float VignetteInterpTime;
    
    UAIO_CameraData();
};

