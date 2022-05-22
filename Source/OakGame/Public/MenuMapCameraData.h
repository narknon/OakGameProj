#pragma once
#include "CoreMinimal.h"
#include "MainMenuCameraBlendParamsSet.h"
#include "GbxDataAsset.h"
#include "MainMenuCameraViewpointBlendPair.h"
#include "Engine/Scene.h"
#include "MenuMapCameraData.generated.h"

UCLASS()
class UMenuMapCameraData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMainMenuCameraBlendParamsSet DefaultBlendParams[7];
    
    UPROPERTY(EditAnywhere)
    TArray<FMainMenuCameraViewpointBlendPair> BlendOverrides;
    
    UPROPERTY(EditAnywhere)
    float CameraOffsetInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    float InspectCameraTransitionDuration;
    
    UPROPERTY(EditAnywhere)
    FPostProcessSettings DefaultPostProcessSettings;
    
    UPROPERTY(EditAnywhere)
    FPostProcessSettings NewsMenuPostProcessSettings;
    
    UPROPERTY(EditAnywhere)
    float NewsMenuPostProcessBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float NewsMenuPostProcessBlendOutTime;
    
    UMenuMapCameraData();
};

