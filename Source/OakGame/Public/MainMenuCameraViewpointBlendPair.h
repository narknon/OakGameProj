#pragma once
#include "CoreMinimal.h"
#include "EMainMenuViewpointType.h"
#include "MainMenuCameraBlendParamsSet.h"
#include "MainMenuCameraViewpointBlendPair.generated.h"

USTRUCT(BlueprintType)
struct FMainMenuCameraViewpointBlendPair {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EMainMenuViewpointType ViewpointA;
    
    UPROPERTY(EditAnywhere)
    EMainMenuViewpointType ViewpointB;
    
    UPROPERTY(EditAnywhere)
    FMainMenuCameraBlendParamsSet BlendParamsOverride;
    
    OAKGAME_API FMainMenuCameraViewpointBlendPair();
};

