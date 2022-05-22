#pragma once
#include "CoreMinimal.h"
#include "MainMenuCameraBlendParams.h"
#include "MainMenuCameraBlendParamsSet.generated.h"

USTRUCT(BlueprintType)
struct FMainMenuCameraBlendParamsSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMainMenuCameraBlendParams DefaultParams;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideLocationParams: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideRotationParams: 1;
    
    UPROPERTY(EditAnywhere)
    FMainMenuCameraBlendParams LocationParams;
    
    UPROPERTY(EditAnywhere)
    FMainMenuCameraBlendParams RotationParams;
    
    OAKGAME_API FMainMenuCameraBlendParamsSet();
};

