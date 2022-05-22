#pragma once
#include "CoreMinimal.h"
#include "MainMenuCameraViewpoint.generated.h"

class ACameraActor;

USTRUCT(BlueprintType)
struct FMainMenuCameraViewpoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ACameraActor* CameraActor;
    
    OAKGAME_API FMainMenuCameraViewpoint();
};

