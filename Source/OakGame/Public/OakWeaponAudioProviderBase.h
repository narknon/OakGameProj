#pragma once
#include "CoreMinimal.h"
#include "WeaponConfigurationRtpc.h"
#include "WeaponAudioBodyLoop.h"
#include "AudioParametersProviderInterface.h"
#include "WeaponAudioProviderComponent.h"
#include "UObject/NoExportTypes.h"
#include "WeaponConfigurationEvent.h"
#include "OakWeaponAudioProviderBase.generated.h"

class UWwiseEvent;
class UWwiseAudioComponent;
class UFoleyAccessoryComponent;
class UOakAudioGlobalsData;
class AWeapon;
class AOakCharacter;
class UWwiseSwitch;

UCLASS(Abstract, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakWeaponAudioProviderBase : public UWeaponAudioProviderComponent, public IAudioParametersProviderInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWwiseEvent* PrimaryConfigurationEvent;
    
    UPROPERTY(EditAnywhere)
    FName WeaponFirePlaybackSocket;
    
    UPROPERTY(EditAnywhere)
    FVector WeaponPlaybackOffset;
    
    UPROPERTY(EditAnywhere)
    FName DefaultAudioPlaybackSocket;
    
    UPROPERTY(EditAnywhere)
    float DefaultAudioRadius;
    
    UPROPERTY(EditAnywhere)
    TArray<FWeaponAudioBodyLoop> AdditionalBodyLoops;
    
    UPROPERTY(EditAnywhere)
    uint8 BodyLoopPlaybackStates;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* PreFireEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* PostFireEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* PostFireMechEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* ModeSwitchFailEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* DryFireEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* ChargeStartEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* ChargeStopEvent;
    
    UPROPERTY()
    TArray<FWeaponConfigurationEvent> ConfigurationWwiseEvents;
    
    UPROPERTY()
    TArray<FWeaponConfigurationRtpc> ConfigurationRtpcs;
    
    UPROPERTY(Export)
    TArray<UFoleyAccessoryComponent*> AttachedFoleyAccessories;
    
    UPROPERTY(Transient)
    UOakAudioGlobalsData* CachedAudioGlobals;
    
    UPROPERTY()
    TArray<UWwiseEvent*> AdditionalEventsToPrepare;
    
private:
    UPROPERTY(Export, Transient)
    UWwiseAudioComponent* CachedDefaultAudioComponent;
    
    UPROPERTY(Transient)
    AWeapon* WeaponPrivate;
    
    UPROPERTY(Transient)
    AOakCharacter* OwningOakCharacter;
    
protected:
    UPROPERTY(Transient)
    TArray<UWwiseEvent*> PreparedEvents;
    
    UPROPERTY(Transient)
    TArray<UWwiseSwitch*> PreparedSwitches;
    
public:
    UOakWeaponAudioProviderBase();
    UFUNCTION()
    void OnDetachWeapon();
    
    UFUNCTION()
    void OnAttachWeapon();
    
    UFUNCTION()
    void NotifyReloadStarted();
    
    UFUNCTION()
    void NotifyReloadEnded();
    
    UFUNCTION()
    void NotifyPutDown();
    
    UFUNCTION()
    void NotifyHidden(bool bIsHidden);
    
    UFUNCTION()
    void NotifyEquipped();
    
    UFUNCTION()
    void ChargeStarted();
    
    UFUNCTION()
    void ChargedStopped();
    
    
    // Fix for true pure virtual functions not being implemented
};

