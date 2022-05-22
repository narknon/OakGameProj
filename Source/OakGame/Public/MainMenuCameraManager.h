#pragma once
#include "CoreMinimal.h"
#include "PlayerCameraModesManager.h"
#include "MainMenuCameraManager.generated.h"

class UCameraModeSetData;

UCLASS(NonTransient)
class AMainMenuCameraManager : public APlayerCameraModesManager {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCameraModeSetData* DefaultCameraModeSet;
    
    UPROPERTY(EditAnywhere)
    FName DefaultCameraMode;
    
    AMainMenuCameraManager();
};

