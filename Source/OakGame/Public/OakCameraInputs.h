#pragma once
#include "CoreMinimal.h"
#include "CameraInputs.h"
#include "Engine/Scene.h"
#include "OakCameraInputs.generated.h"

class AWeapon;

UCLASS()
class UOakCameraInputs : public UCameraInputs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    AWeapon* Weapon;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bResetAutoLook;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bResetAutoLookWaitTimer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bEchoDeviceActive;
    
    UPROPERTY(Transient)
    FPostProcessSettings FocusOverridePPSettings;
    
    UOakCameraInputs();
};

