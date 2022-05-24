#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "CameraBehavior_MainMenu.generated.h"

class UMenuMapCameraData;
class ACameraActor;
class AMenuMapMenuFlow;

UCLASS(EditInlineNew)
class UCameraBehavior_MainMenu : public UCameraBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UMenuMapCameraData* CameraData;
    
    UPROPERTY(Transient)
    AMenuMapMenuFlow* MenuFlow;
    
    UPROPERTY(Transient)
    ACameraActor* CurrentViewTarget;
    
public:
    UCameraBehavior_MainMenu();
};

