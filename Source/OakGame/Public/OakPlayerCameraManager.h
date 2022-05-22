#pragma once
#include "CoreMinimal.h"
#include "PlayerCameraModesManager.h"
#include "Engine/Scene.h"
#include "OakPlayerCameraManager.generated.h"

class AOakUIActorContainer;

UCLASS(NonTransient)
class AOakPlayerCameraManager : public APlayerCameraModesManager {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FPostProcessSettings> CustomLightingSettings;
    
protected:
    UPROPERTY(Transient)
    TArray<AOakUIActorContainer*> CustomActorContainerStack;
    
public:
    AOakPlayerCameraManager();
};

