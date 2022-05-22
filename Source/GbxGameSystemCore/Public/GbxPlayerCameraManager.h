#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "GbxPlayerCameraManager.generated.h"

class AGbxPlayerController;

UCLASS(NonTransient)
class GBXGAMESYSTEMCORE_API AGbxPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AGbxPlayerController* GbxPCOwner;
    
public:
    AGbxPlayerCameraManager();
};

