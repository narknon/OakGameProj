#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "AIOOrientedParticleData.h"
#include "PlayerAlertableInterface.h"
#include "AdvancedInteractiveObjectProxy.generated.h"

class AOakPlayerController;
class UInputComponent;
class AAdvancedInteractiveObject;

UCLASS(NotPlaceable, Transient)
class OAKGAME_API AAdvancedInteractiveObjectProxy : public AActor, public IPlayerAlertableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UInputComponent> InputComponentClass;
    
    UPROPERTY(EditDefaultsOnly)
    FAIOOrientedParticleData ProjectionFXData;
    
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FName DefaultCameraState;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    FName CurrentCameraState;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    int32 CameraEntryTransitionIndex;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    bool bCurrentlyInteracting;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayerWithinInteractRange;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    bool bCameraTransitionInProgress;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    AOakPlayerController* OwningPlayer;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    AAdvancedInteractiveObject* OwningAIO;
    
public:
    AAdvancedInteractiveObjectProxy();
    UFUNCTION(BlueprintImplementableEvent)
    void OnOwningPlayerStoppedInteraction();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOwningPlayerStartedInteraction();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnOwningPlayerExitedInteractRange();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnOwningPlayerEnteredInteractRange();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFinalizeStopInteraction();
    
    
    // Fix for true pure virtual functions not being implemented
};

