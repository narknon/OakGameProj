#pragma once
#include "CoreMinimal.h"
#include "EWheelAudioType.h"
#include "Components/ActorComponent.h"
#include "VehicleLandingEventData.h"
#include "UObject/NoExportTypes.h"
#include "VehicleAudioLoopData.h"
#include "WheelRandomSwitchPack.h"
#include "VehicleAudioLoopOnNamedCompData.h"
#include "VehicleConfigurationEvent.h"
#include "VehicleConfigurationRtpc.h"
#include "VehicleAudioProviderComponent.generated.h"

class UWwiseEvent;
class AOakVehicle;
class UOakAudioGlobalsData;
class UWwiseAudioComponent;
class UPhysicalMaterial;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UVehicleAudioProviderComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float ForwardSpeedRTPCRefValue;
    
    UPROPERTY(EditAnywhere)
    float SkidAmountRTPCRefValue;
    
    UPROPERTY(EditAnywhere)
    EWheelAudioType WheelAudioType;
    
    UPROPERTY(EditAnywhere)
    FName WheelAudioCompTag;
    
    UPROPERTY(EditAnywhere)
    float WheelAudioReverbBoost;
    
    UPROPERTY(EditAnywhere)
    float HoveringInPlaceEngineStrength;
    
    UPROPERTY(EditAnywhere)
    TArray<FVehicleLandingEventData> LandingEvents;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* LandingAudioEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* SteeringAudioEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* SuspensionCompressionEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* SuspensionExtensionEvent;
    
    UPROPERTY(EditAnywhere)
    float SuspensionCompressionEventThreshold;
    
    UPROPERTY(EditAnywhere)
    float SuspensionExtensionEventThreshold;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* OverspinDebrisEvent;
    
    UPROPERTY(EditAnywhere)
    float DelayBeforeOverspinDebrisEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* OverspinStartEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* OverspinEndEvent;
    
    UPROPERTY(EditAnywhere)
    FVector2D WheelSpinMinMax;
    
    UPROPERTY(EditAnywhere)
    FVehicleAudioLoopData WheelAudioLoop;
    
    UPROPERTY(EditAnywhere)
    TArray<FVehicleAudioLoopData> AdditionalWheelAudioLoops;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* WheelBrakeEvent;
    
    UPROPERTY(EditAnywhere)
    bool bWheelBrakeEventIsPlayerOnly;
    
    UPROPERTY(EditAnywhere)
    TArray<FWheelRandomSwitchPack> WheelSwitchPacks;
    
    UPROPERTY(EditAnywhere)
    TArray<FVehicleAudioLoopData> EngineLoops;
    
    UPROPERTY(EditAnywhere)
    TArray<FVehicleAudioLoopData> EngineAdditionalLoops;
    
    UPROPERTY(EditAnywhere)
    TArray<FVehicleAudioLoopOnNamedCompData> EngineMiscLoops;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AOakVehicle* OwningVehicle;
    
    UPROPERTY(Transient)
    UOakAudioGlobalsData* CachedAudioGlobals;
    
    UPROPERTY(Export, Transient)
    UWwiseAudioComponent* EngineAudioComponent;
    
    UPROPERTY(EditAnywhere)
    TArray<FVehicleConfigurationEvent> ConfigurationWwiseEvents;
    
    UPROPERTY(EditAnywhere)
    TArray<FVehicleConfigurationRtpc> ConfigurationRtpcs;
    
public:
    UVehicleAudioProviderComponent();
protected:
    UFUNCTION()
    void OnVehicleLanded(float TimeSpentInAir, float LandAngle, int32 NumWheelsOnGround, bool bAllWheelsLanded);
    
    UFUNCTION()
    void OnVehicleGearShift(int32 Gear, bool bIsShiftingUp);
    
    UFUNCTION()
    void OnVehicleBecameAirborne();
    
    UFUNCTION()
    void OnSeatAttachStateChanged();
    
    UFUNCTION()
    void OnOverspinStarted(UPhysicalMaterial* PhysicalMat);
    
    UFUNCTION()
    void OnOverspinEnded();
    
    UFUNCTION()
    void OnHoverEnabled();
    
    UFUNCTION()
    void OnHoverDisabled();
    
    UFUNCTION()
    void OnEngineStop();
    
    UFUNCTION()
    void OnEngineStart();
    
};

