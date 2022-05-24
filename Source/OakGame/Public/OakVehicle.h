#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HUDDataProviderInterface.h"
#include "NameplateInfoProviderInterface.h"
#include "AudioParametersProviderInterface.h"
#include "Vehicle.h"
#include "CameraViewTargetInterface.h"
#include "GbxWeaponUserInterface.h"
#include "UObject/NoExportTypes.h"
#include "HealthBarInfoProviderInterface.h"
#include "DamageCauserInterface.h"
#include "ShieldProviderInterface.h"
#include "StatusEffectEventProviderInterface.h"
#include "PlayerAlertableInterface.h"
#include "DamageableInterface.h"
#include "HealthDamagePassthroughInterface.h"
#include "TeleportInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RigidBodyErrorCorrectionProviderInterface -FallbackName=RigidBodyErrorCorrectionProviderInterface
#include "GbxNavPathingData.h"
#include "OakVehicleAdditiveData.h"
#include "EndedElementalEffectEventDelegate.h"
#include "VehicleOccupantLoopingFeedback.h"
#include "ReceivedElementalEffectEventDelegate.h"
#include "VehicleInputParams.h"
#include "HealthType.h"
#include "CausedMaxResourceEffectEventDelegate.h"
#include "UObject/NoExportTypes.h"
#include "ShieldEquippedEventDelegate.h"
#include "ShieldUnequippedEventDelegate.h"
#include "GameResourcePoolReference.h"
#include "EVehicleHealthState.h"
#include "HornSequenceEntry.h"
#include "EVehicleDeathType.h"
#include "HealthBarEventDelegate.h"
#include "CausedElementalEffectEventDelegate.h"
#include "ReceivedResourceEffectEventDelegate.h"
#include "ETeamCollisionChannel.h"
#include "Curves/CurveFloat.h"
#include "BeforeVehicleDestroyedSignatureDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "GbxAvoidanceProperties.h"
#include "ENavCorrectionSetting.h"
#include "SpawnCostSelection.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EVehicleEffectEvent.h"
#include "ENavPainterLayer.h"
#include "StatusEffectSpec.h"
#include "EOakElementalType.h"
#include "GenericTeamAgentInterface.h"
#include "DamageReactionEventSummary.h"
#include "EClearInputFilter.h"
#include "OakVehicle.generated.h"

class UOakStatusEffectManagerComponent;
class UGameStatData;
class UVehicleClassIdentifier;
class UVehicleBoostComponent;
class UVehicleAirControlComponent;
class AController;
class APawn;
class UCurveFloat;
class UVehicleHoverComponent;
class UGameResourcePoolManagerComponent;
class UVehicleSeatComponent;
class AOakCharacter;
class UOakVehicleBoostComponent;
class UTargetableComponent;
class UOakDamageComponent;
class UDamageData;
class UOakDamageCauserComponent;
class UOakMinimapIconComponent;
class UGbxAction;
class UInputComponent;
class UVehicleEffectsComponent;
class UWheeledVehicleMovementComponent;
class UWheeledVehicleMovementComponentNW;
class UVehicleDigiThrustComponent;
class UVehiclePowerSlideComponent;
class UStaticMesh;
class UActiveWeaponsComponent;
class UBodyWeaponHoldManagerComponent;
class AOakAIController;
class AActor;
class ACatchARidePlatform;
class UObject;
class UDamageCauserComponent;
class UGbxHUDData;
class UGbxUIName;
class UHavokPathFindingData;
class UFeedbackData;
class UVehicleDrivingDataAsset;
class ABoundaryTurret;
class UWeaponSlotData;
class UOakVehicleBalanceStateComponent;
class UInventoryNamePartData;
class UAISenseConfig_Sight;
class USpawnerComponent;
class USpawnPointComponent;
class UGbxNavMeshPainterComponent;
class UAIAction;
class UVehicleAudioProviderComponent;
class ALargeLiquidBody;
class UGbxAbilityManagerComponent;
class AOakVehicle;
class UItemPoolData;
class UDamageComponent;
class UVehiclePartData;
class UHealthTypeData;
class AWeapon;
class AVehicleSeatPawn;
class APlayerController;

UCLASS()
class AOakVehicle : public AVehicle, public ICameraViewTargetInterface, public IGbxWeaponUserInterface, public IHealthBarInfoProviderInterface, public IAudioParametersProviderInterface, public IHUDDataProviderInterface, public IShieldProviderInterface, public IStatusEffectEventProviderInterface, public IPlayerAlertableInterface, public INameplateInfoProviderInterface, public IDamageableInterface, public IDamageCauserInterface, public IHealthDamagePassthroughInterface, public ITeleportInterface, public IRigidBodyErrorCorrectionProviderInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVehicleCharacterEvent, const UVehicleSeatComponent*, Seat, AOakCharacter*, Character);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHijackProtectionTriggeredSignature, AController*, Hijacker, UVehicleSeatComponent*, HijackedSeat);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOakVehicleHornEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOakVehicleGearShiftEvent, int32, Gear, bool, bIsShiftingUp);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOakVehicleEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOakVehicleBoostComponentChangedEvent, UOakVehicleBoostComponent*, Current, UOakVehicleBoostComponent*, Previous);
    
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UTargetableComponent* TargetableComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOakDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOakDamageCauserComponent* DamageCauserComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UOakStatusEffectManagerComponent* StatusEffectManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOakMinimapIconComponent* MinimapIconComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UGameResourcePoolManagerComponent* ResourcePoolComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UVehicleSeatComponent* PrimarySeatComponent;
    
    UPROPERTY()
    TSubclassOf<UInputComponent> InputComponentClass;
    
    UPROPERTY()
    TSubclassOf<UInputComponent> ClassicModeInputComponentClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVehicleInputParams> VehicleInputModes;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UVehicleEffectsComponent* VehicleEffectsComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UWheeledVehicleMovementComponent* WheeledMovementComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UWheeledVehicleMovementComponentNW* WheeledMovementComponentNW;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UVehicleAirControlComponent* VehicleAirControlComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UVehicleHoverComponent* VehicleHoverComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UVehicleBoostComponent* BoostComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UVehicleDigiThrustComponent* DigiThrustComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UVehiclePowerSlideComponent* PowerSlideComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UActiveWeaponsComponent* WeaponsComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UBodyWeaponHoldManagerComponent* BodyWeaponHoldManager;
    
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_Seats)
    TArray<UVehicleSeatComponent*> SeatComponents;
    
    UPROPERTY(Transient)
    TArray<FVehicleOccupantLoopingFeedback> LoopingFeedback;
    
public:
    UPROPERTY(EditAnywhere)
    float SpeedometerMaxSpeedToDisplayMPH;
    
    UPROPERTY(EditAnywhere)
    float SkelAndPSCompOptimDistance;
    
    UPROPERTY(EditAnywhere)
    bool bDisableAIUseSlot;
    
    UPROPERTY(EditAnywhere)
    bool bDebugDrift;
    
    UPROPERTY(EditAnywhere)
    FName DriftSocketName;
    
    UPROPERTY(EditAnywhere)
    float MinSpeedToDrift;
    
    UPROPERTY(EditAnywhere)
    float LeftDriftMinAngle;
    
    UPROPERTY(EditAnywhere)
    float RightDriftMinAngle;
    
    UPROPERTY(EditAnywhere)
    UGameStatData* KillStat;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* RPMCurve;
    
    UPROPERTY(EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float RPMCutoffIncreasePerSec;
    
    UPROPERTY(EditAnywhere)
    float TimeDriftingToActivateRPMCutoff;
    
    UPROPERTY(EditAnywhere)
    bool bBypassAirborneBlendedRPM;
    
    UPROPERTY(EditAnywhere)
    float RPMInAirBlendTime;
    
    UPROPERTY(EditAnywhere)
    float RPMBlendTime;
    
    UPROPERTY(EditAnywhere)
    float RPMTresholdStartBlend;
    
    UPROPERTY(EditAnywhere)
    float OnBoostEndRPMDecreasePercent;
    
    UPROPERTY(Transient)
    float TimeDrifting;
    
    UPROPERTY(Transient)
    float RPMCutoffAddedValue;
    
    UPROPERTY(EditAnywhere)
    TArray<float> GearShiftingRPMThreshold;
    
    UPROPERTY(BlueprintAssignable)
    FOakVehicleGearShiftEvent OnGearShift;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsInReverse;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsUpsideDown;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Speed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LateralSpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PlanarSpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector AngularVelocityRad;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float RPM;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float BlendedRPM;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 CurrentGear;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Accel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsDriftingLeft;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsDriftingRight;
    
    UPROPERTY(Transient)
    float LastFrameSpeed;
    
    UPROPERTY()
    FName VehicleArchetype;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UVehicleClassIdentifier* VehicleClassID;
    
    UPROPERTY(EditDefaultsOnly)
    FSoftObjectPath VehicleWheelInvData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FOakVehicleAdditiveData BaseAdditiveSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SteeringAngleInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite)
    float SeatMeshOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllow360Shooting;
    
    UPROPERTY(BlueprintAssignable)
    FShieldEquippedEvent ShieldEquipped;
    
    UPROPERTY(BlueprintAssignable)
    FShieldUnequippedEvent ShieldUnequipped;
    
    UPROPERTY(Transient)
    FGameResourcePoolReference Health;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_HealthState)
    EVehicleHealthState HealthState;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    EVehicleDeathType DeathType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LowHealthPercent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VeryLowHealthPercent;
    
    UPROPERTY(BlueprintAssignable)
    FHealthBarEvent OnHealthy;
    
    UPROPERTY(BlueprintAssignable)
    FHealthBarEvent OnHealthLow;
    
    UPROPERTY(BlueprintAssignable)
    FHealthBarEvent OnHealthVeryLow;
    
    UPROPERTY(BlueprintAssignable)
    FHealthBarEvent OnDead;
    
    UPROPERTY(BlueprintReadWrite)
    bool bResetCameraAutoLook;
    
    UPROPERTY(BlueprintAssignable)
    FOakVehicleEvent OnSpawnByCatchARideChanged;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_SpawnByCatchARide)
    AActor* VehicleSpawnByCatchARideOwner;
    
    UPROPERTY(Replicated, Transient)
    ACatchARidePlatform* CatchARidePlatform;
    
    UPROPERTY(Replicated, Transient)
    UObject* CatchARideInterface;
    
    UPROPERTY(EditAnywhere)
    UGbxHUDData* HUDInfo;
    
    UPROPERTY(BlueprintAssignable)
    FCausedElementalEffectEvent OnCausedElementalEffect;
    
    UPROPERTY(BlueprintAssignable)
    FReceivedElementalEffectEvent ReceivedElementalEffect;
    
    UPROPERTY(BlueprintAssignable)
    FEndedElementalEffectEvent EndedElementalEffect;
    
    UPROPERTY(BlueprintAssignable)
    FCausedMaxResourceEffectEvent OnCausedMaxResourceEffect;
    
    UPROPERTY(BlueprintAssignable)
    FReceivedResourceEffectEvent ReceivedResourceEffect;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDamageData> DamageToApplyWhenVehicleIsDead;
    
    UPROPERTY(EditAnywhere)
    bool bDigistructOnSpawn;
    
    UPROPERTY(EditAnywhere, Replicated)
    bool bIsVehicleScannable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    bool bIsMissionVehicle;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> DigistructInActionClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> DigistructInCatchARideActionClass;
    
protected:
    UPROPERTY(EditAnywhere, Replicated)
    UGbxUIName* UINameOverride;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> DigistructOutActionClass;
    
    UPROPERTY(EditAnywhere)
    float DigistructTime;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOakVehicleEvent OnPrimaryOccupantEnter;
    
    UPROPERTY(BlueprintAssignable)
    FOakVehicleEvent OnPrimaryOccupantExit;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_VehicleTeamCollisionChannel)
    ETeamCollisionChannel VehicleTeamCollisionChannel;
    
public:
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool bShouldClearInput;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LastThrottleInput;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float LastLookInputTime;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxWeaponAimAdjustmentAngle;
    
    UPROPERTY(BlueprintAssignable)
    FOakVehicleEvent OnEBrakePressed;
    
    UPROPERTY(BlueprintAssignable)
    FOakVehicleEvent OnEBrakeReleased;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFeedbackData* EBrakeFeedback;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve EBrakeFeedbackScaleCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EBrakeFeedbackUpdateFrequency;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FlippedThreshold;
    
    UPROPERTY(EditAnywhere)
    uint8 bCanBeFlippedOver: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bCanEnterWhenFlipped: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEjectOccupantsWhenFlipped: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FlippedEjectionTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FlipOverLiftStrength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FlipOverTorqueStrength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FlipOverAttemptFrequency;
    
    UPROPERTY(BlueprintAssignable)
    FOakVehicleEvent OnFlipped;
    
    UPROPERTY(BlueprintAssignable)
    FOakVehicleEvent OnFlippedTimerExpired;
    
    UPROPERTY(BlueprintAssignable)
    FOakVehicleEvent OnUprighted;
    
    UPROPERTY(BlueprintAssignable)
    FVehicleCharacterEvent OnEnterVehicle;
    
    UPROPERTY(BlueprintAssignable)
    FVehicleCharacterEvent OnExitVehicle;
    
    UPROPERTY(BlueprintAssignable)
    FVehicleCharacterEvent OnExitVehicleStarted;
    
    UPROPERTY(BlueprintAssignable)
    FVehicleCharacterEvent OnPlayerEntersVehicle;
    
    UPROPERTY(BlueprintAssignable)
    FVehicleCharacterEvent OnPlayerHijacksVehicle;
    
    UPROPERTY(BlueprintAssignable)
    FVehicleCharacterEvent OnPlayerExitsVehicle;
    
    UPROPERTY(BlueprintAssignable)
    FVehicleCharacterEvent OnVehicleDestroyWithPlayerIn;
    
    UPROPERTY(BlueprintAssignable)
    FBeforeVehicleDestroyedSignature BeforeVehicleDestroyed;
    
    UPROPERTY(BlueprintAssignable)
    FOakVehicleHornEvent OnHornStarted;
    
    UPROPERTY(BlueprintAssignable)
    FOakVehicleHornEvent OnHornStopped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UVehicleDrivingDataAsset* DrivingData;
    
    UPROPERTY(Transient)
    TArray<ABoundaryTurret*> OverlappedBoundaryTurrets;
    
private:
    UPROPERTY(EditAnywhere)
    TArray<UWeaponSlotData*> AdditionalSecondaryWeapons;
    
    UPROPERTY(EditAnywhere)
    TArray<UWeaponSlotData*> AdditionalPrimaryWeapons;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsEBraking)
    bool bIsEBraking;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool bIsFlipped;
    
    UPROPERTY(EditAnywhere)
    FGbxAttributeFloat ShockStunCooldownDuration;
    
public:
    UPROPERTY(Export, Transient)
    UOakVehicleBalanceStateComponent* BalanceStateComponent;
    
protected:
    UPROPERTY(EditAnywhere)
    UInventoryNamePartData* DefaultUIName;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UAISenseConfig_Sight* SightSenseConfig;
    
private:
    UPROPERTY(Export, Transient)
    USpawnerComponent* SpawnerComponent;
    
    UPROPERTY(Export, Transient)
    USpawnPointComponent* SpawnPointComponent;
    
    UPROPERTY(EditAnywhere)
    float AIPathRadius;
    
    UPROPERTY(EditAnywhere)
    float AIPathHeight;
    
    UPROPERTY(EditAnywhere)
    float AISearchHeight;
    
    UPROPERTY(EditAnywhere)
    float AIMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float AIMaxTurnAngle;
    
    UPROPERTY()
    UHavokPathFindingData* AIPathFindingData;
    
    UPROPERTY()
    UHavokPathFindingData* PermissiveAIPathFindingData;
    
    UPROPERTY(EditAnywhere)
    FGbxNavPathingData AIPathingData;
    
    UPROPERTY(EditAnywhere)
    FGbxNavPathingData PermissiveAIPathingData;
    
    UPROPERTY(Transient)
    FGbxNavPathingData OverrideAIPathingData;
    
    UPROPERTY(EditAnywhere)
    FGbxAvoidanceProperties AvoidanceProperties;
    
protected:
    UPROPERTY(EditAnywhere)
    ENavCorrectionSetting NavCorrectionSetting;
    
private:
    UPROPERTY(Export, Transient)
    UGbxNavMeshPainterComponent* NavMeshPainterComponent;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanSiege;
    
    UPROPERTY(BlueprintAssignable)
    FOakVehicleEvent OnEnterSiegeMode;
    
    UPROPERTY(BlueprintAssignable)
    FOakVehicleEvent OnExitSiegeMode;
    
    UPROPERTY(EditAnywhere)
    bool bAlwaysHover;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanDisableDrivingInput;
    
    UPROPERTY(BlueprintAssignable)
    FOakVehicleEvent OnEnterDisableDrivingInput;
    
    UPROPERTY(BlueprintAssignable)
    FOakVehicleEvent OnExitDisabledMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RevolverWheelRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RevolverChassisWidthOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RevolverRaycastGroundOffset;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DrivingInputDisabled)
    bool bIsDrivingInputDisabled;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDespawnWhenNoOccupant;
    
    UPROPERTY(EditAnywhere)
    bool bKeepAssociatedToSpawner;
    
protected:
    UPROPERTY(Transient)
    TArray<AActor*> VehicleOwners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UAIAction> DefaultVehicleDriverAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UAIAction> DefaultVehicleTurretAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UAIAction> DefaultVehiclePassengerAction;
    
private:
    UPROPERTY(EditAnywhere)
    FSpawnCostSelection SpawnCostSelection;
    
    UPROPERTY(EditAnywhere)
    bool bCollisionPreventsActorsFromSpawning;
    
    UPROPERTY(EditAnywhere)
    float AdditionalGroundOffset;
    
    UPROPERTY(Transient)
    TArray<AActor*> OwnedChildActors;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Color)
    TArray<FColor> CustomColor;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOakVehicleEvent OnDroneDoorClosing;
    
    UPROPERTY(BlueprintAssignable)
    FOakVehicleEvent OnDroneDoorOpen;
    
    UPROPERTY(BlueprintAssignable)
    FOnHijackProtectionTriggeredSignature OnHijackProtectionTriggered;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDamageData> HijackProtectionDamageToApply;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UVehicleAudioProviderComponent* VehicleAudioProvider;
    
    UPROPERTY(Transient)
    TArray<ALargeLiquidBody*> OverlappingLLBs;
    
public:
    UPROPERTY(EditAnywhere)
    UStaticMesh* ZoneMapPOIMesh;
    
protected:
    UPROPERTY(Replicated, Transient)
    bool DigistructingIn;
    
public:
    UPROPERTY(Export)
    UGbxAbilityManagerComponent* AbilityManagerComponent;
    
    AOakVehicle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UnlockWorldTravel(FName Reason);
    
    UFUNCTION()
    void TestTeleportFailSafeLocation();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TeleportVehicle(FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void StopZooming(bool bForcedStop);
    
    UFUNCTION(BlueprintCallable)
    void StopUsingWeapon(UWeaponSlotData* Slot, uint8 InputChannel);
    
    UFUNCTION(BlueprintCallable)
    void StopUsingSecondaryWeapons();
    
    UFUNCTION(BlueprintCallable)
    void StopUsingSecondarySeatWeapon();
    
    UFUNCTION(BlueprintCallable)
    void StopUsingPrimaryWeapons(uint8 InputChannel);
    
    UFUNCTION(BlueprintCallable)
    void StopReload(UWeaponSlotData* Slot);
    
    UFUNCTION(BlueprintCallable)
    void StopHover();
    
    UFUNCTION(BlueprintCallable)
    void StopHornSequence();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void StopHorn();
    
    UFUNCTION(BlueprintCallable)
    void StopFeedbackOnOccupants(UFeedbackData* FeedbackData, bool bOnlyLocalPlayers);
    
    UFUNCTION(BlueprintCallable)
    void StopEffects(EVehicleEffectEvent EffectType);
    
protected:
    UFUNCTION()
    void StopEBrakeFeedback();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopEBrake(bool bTriggerPowerSlide);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void StopBoost(bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void StartZooming();
    
    UFUNCTION(BlueprintCallable)
    void StartUsingWeapon(UWeaponSlotData* Slot, uint8 InputChannel);
    
    UFUNCTION(BlueprintCallable)
    void StartUsingSecondaryWeapons();
    
    UFUNCTION(BlueprintCallable)
    bool StartUsingSecondarySeatWeapon();
    
    UFUNCTION(BlueprintCallable)
    void StartUsingPrimaryWeapons(uint8 InputChannel);
    
    UFUNCTION(BlueprintCallable)
    void StartHover();
    
    UFUNCTION(BlueprintCallable)
    void StartHornSequence(TArray<FHornSequenceEntry> HornSequenceIn);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void StartHorn();
    
    UFUNCTION(BlueprintCallable)
    void StartEBrake(bool bTriggerPowerSlide);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void StartBoost();
    
    UFUNCTION(BlueprintCallable)
    static AOakVehicle* SpawnVehicleFromItemPool(UObject* WorldContextObject, UItemPoolData* ItemPoolData, const FVector& Position, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetVehicleSpawnByCatchARideOwner(AActor* NewCAROwner);
    
    UFUNCTION(BlueprintCallable)
    void SetVehicleDisable(bool bDisable, bool bEvictOccupant);
    
    UFUNCTION(BlueprintCallable)
    void SetThrottleInput(float Throttle);
    
    UFUNCTION(BlueprintCallable)
    void SetSteeringInput(float Steering);
    
    UFUNCTION(BlueprintCallable)
    void SetNavPainterLayerEnabled(ENavPainterLayer Layer, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetLockSeatForPlayers(bool bIsSeatLock);
    
    UFUNCTION(BlueprintCallable)
    void SetInSiegeMode(bool bWantedInSiegeMode);
    
    UFUNCTION(BlueprintCallable)
    void SetHoverInput(FVector WantedInput);
    
    UFUNCTION(BlueprintCallable)
    void SetHijackProtectionEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetHandbrake(bool bHandBrake);
    
    UFUNCTION(BlueprintCallable)
    void SetDrivingInputDisabled(bool bDrivingInputDisabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDead(EVehicleDeathType InDeathType);
    
    UFUNCTION(BlueprintCallable)
    void SetBoost(bool bBoosting);
    
    UFUNCTION(BlueprintCallable)
    void SetAirControlInput(float PitchInput, float RollInput);
    
    UFUNCTION(BlueprintCallable)
    void SetAIPathFindingData(UHavokPathFindingData* PathFindingData);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStopEBrake(bool bTriggerPowerSlide);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStartEBrake(bool bTriggerPowerSlide);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetAIPathFindingData();
    
    UFUNCTION(BlueprintCallable)
    void Reload(UWeaponSlotData* Slot);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterSeatComponent(UVehicleSeatComponent* SeatComponent);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnVehicleDestroyWithPlayerIn(const UVehicleSeatComponent* Seat, AOakCharacter* Character);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnPlayerHijacksVehicle(const UVehicleSeatComponent* Seat, AOakCharacter* Character);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnPlayerExitsVehicle(const UVehicleSeatComponent* Seat, AOakCharacter* Character);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnPlayerEntersVehicle(const UVehicleSeatComponent* Seat, AOakCharacter* Character);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnExitVehicleStarted(const UVehicleSeatComponent* Seat, AOakCharacter* Character);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnExitVehicle(const UVehicleSeatComponent* Seat, AOakCharacter* Character);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnEnterVehicle(const UVehicleSeatComponent* Seat, AOakCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void PlayEffects(EVehicleEffectEvent EffectType);
    
    UFUNCTION(BlueprintCallable)
    void PerformFeedbackOnOccupants(UFeedbackData* FeedbackData, float Scale, bool bLoop, bool bOnlyLocalPlayers);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScanningSuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScanningStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScanningCancelled();
    
protected:
    UFUNCTION()
    void OnRep_VehicleTeamCollisionChannel();
    
public:
    UFUNCTION()
    void OnRep_SpawnByCatchARide();
    
protected:
    UFUNCTION()
    void OnRep_Seats();
    
    UFUNCTION()
    void OnRep_IsEBraking();
    
    UFUNCTION()
    void OnRep_HealthState();
    
private:
    UFUNCTION()
    void OnRep_DrivingInputDisabled();
    
public:
    UFUNCTION()
    void OnRep_Color();
    
protected:
    UFUNCTION()
    void OnReceivedElementalEffect(AActor* Receiver, const FStatusEffectSpec& Spec, EOakElementalType ElementalType);
    
private:
    UFUNCTION()
    void OnPrimaryOccupantLevelChange(const int32 OldExperienceLevel, const int32 NewExperienceLevel);
    
protected:
    UFUNCTION()
    void OnLanded(float TimeSpentInAir, float LandAngle, int32 NumWheelsOnGround, bool bAllWheelsLanded);
    
    UFUNCTION()
    void OnHealthResourceDepleted(UDamageComponent* DamageReceiver, UDamageCauserComponent* DamageCauser);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnGearShifted(int32 Gear, bool bIsUpShifting);
    
protected:
    UFUNCTION()
    void OnDriverAttachStateChanged();
    
    UFUNCTION()
    void OnBoostEnd();
    
    UFUNCTION()
    void OnBecameAirborn();
    
public:
    UFUNCTION(BlueprintCallable)
    void LockWorldTravel(FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void LockAllSeat(bool bLock);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnEBrakeReleased();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnEBrakePressed();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_InitializeSeats();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsWorldTravelLocked() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsVehicleScannable();
    
    UFUNCTION(BlueprintPure)
    bool IsVehicleOwnedSolelyBy(AActor* Actor) const;
    
    UFUNCTION(BlueprintPure)
    bool IsVehicleOwnedByPlayer() const;
    
    UFUNCTION(BlueprintPure)
    bool IsVehicleOwnedBy(AActor* Actor) const;
    
    UFUNCTION(BlueprintPure)
    bool IsVehicleOwned() const;
    
    UFUNCTION(BlueprintPure)
    bool IsVehicleOccupant(APawn* Occupant, bool bIncludeDetaching) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPrimarySeatOccupied(bool bIncludeDetaching) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPreviewModel() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPhysicsDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPartEquipped(TSoftObjectPtr<UVehiclePartData> PartData) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInSiegeMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInPowerSlideBoost() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHovering() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEBraking() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDrivingInputDisabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDrifting() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDigiThrusting() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsControllerInVehicle(const AController* ControllerToCheck);
    
    UFUNCTION(BlueprintPure)
    bool IsBraking() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBoosting() const;
    
    UFUNCTION(BlueprintCallable)
    void InterpolateToGround(float InterpolationSpeed);
    
    UFUNCTION(BlueprintCallable)
    void IgnoreVehicleCollision(AActor* TargetToIgnore, bool AllChilds);
    
    UFUNCTION(BlueprintCallable)
    bool HasShieldEquipped();
    
    UFUNCTION(BlueprintPure)
    bool HasPlayerOccupants() const;
    
    UFUNCTION(BlueprintPure)
    bool HasOccupants(bool bIncludeDetaching) const;
    
    UFUNCTION(BlueprintCallable)
    bool HasHealthOfType(UHealthTypeData* HealthTypeToFind);
    
    UFUNCTION(BlueprintPure)
    bool HasFriendySeatReserved() const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyDuelingOccupants() const;
    
    UFUNCTION(BlueprintPure)
    AWeapon* GetVehicleWeapon(UWeaponSlotData* WantedSlot) const;
    
    UFUNCTION(BlueprintPure)
    float GetThrottleInput() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETeamAttitude::Type> GetTeamAttitudeTowardsActor(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    FVector GetTargetActorLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetSteeringInput() const;
    
    UFUNCTION(BlueprintPure)
    float GetSpeedInMPH() const;
    
    UFUNCTION(BlueprintPure)
    float GetSpeedInKPH() const;
    
    UFUNCTION(BlueprintPure)
    AVehicleSeatPawn* GetSecondaryWeaponSeatPawn(bool bMustBeUnoccupied) const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetSeatWeaponRotation(int32 Slot, bool bWorldSpace) const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetSeatOccupant(int32 SeatSlot, bool bIncludeDetaching) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSeatCountUse() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSeatCount() const;
    
    UFUNCTION(BlueprintPure)
    UVehicleSeatComponent* GetSeatComponent(int32 Slot) const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetRotationDelta() const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetPrimaryOccupant(bool bIncludeDetaching) const;
    
    UFUNCTION(BlueprintPure)
    float GetPlanarSpeedInMPH() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetOccupantSeatSlot(APawn* Occupant, bool bIncludeDetaching) const;
    
    UFUNCTION(BlueprintPure)
    UVehicleSeatComponent* GetOccupantSeat(APawn* Occupant, bool bIncludeDetaching) const;
    
    UFUNCTION(BlueprintPure)
    UOakDamageComponent* GetOakDamageComponent();
    
    UFUNCTION(BlueprintPure)
    AOakAIController* GetOakAIController() const;
    
    UFUNCTION(BlueprintPure)
    float GetMass() const;
    
    UFUNCTION(BlueprintCallable)
    static int32 GetLocalPlayer(TArray<APlayerController*>& Controllers);
    
    UFUNCTION(BlueprintPure)
    FVector GetLastFrameVelocity() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetGroundAjustement() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetGearsCount();
    
    UFUNCTION(BlueprintCallable)
    bool GetFirstHealthInformationByType(UHealthTypeData* HealthTypeToFind, FHealthType& OutHealthType);
    
    UFUNCTION(BlueprintPure)
    TArray<UVehicleSeatComponent*> GetAvailableSeatsForPlayers() const;
    
    UFUNCTION(BlueprintPure)
    TArray<APawn*> GetAllOccupants(bool bIncludeDetaching) const;
    
    UFUNCTION(BlueprintPure)
    AWeapon* GetActiveWeapon(uint8 Slot) const;
    
    UFUNCTION(BlueprintCallable)
    void FlipOver(AActor* AwayFromActor);
    
    UFUNCTION(BlueprintPure)
    UVehicleSeatComponent* FindNearestSeatComponent(const AActor* SearchActor, float MaxDistance, bool bIsHostile, bool bSearchNearestSeat) const;
    
    UFUNCTION(BlueprintPure)
    static AOakVehicle* FindAssociatedOakVehicle(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void EnableVehiclePhysics(const FName& Reason);
    
    UFUNCTION(BlueprintCallable)
    void EnableTransitionControl(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void EnableDoorTeleportFailSafe(FVector Offset, float TestDelay);
    
    UFUNCTION(BlueprintCallable)
    void EnableAIUseSlot(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void EjectOccupants(bool bKillOccupants, bool bForceResurrectKilledPlayers, bool bInstantKill, bool bFellOutOfWorld, bool bInstantDetach);
    
    UFUNCTION(BlueprintCallable)
    void DisableVehiclePhysics(const FName& Reason);
    
    UFUNCTION()
    void DigistructOutTeleport();
    
    UFUNCTION(BlueprintCallable)
    void DigistructOutEffectOnly();
    
    UFUNCTION(BlueprintCallable)
    void DigistructIn();
    
private:
    UFUNCTION(Exec)
    void DebugBraking();
    
protected:
    UFUNCTION()
    void DamageReaction_DetachBreakable(const FDamageReactionEventSummary& Summary);
    
public:
    UFUNCTION(Exec)
    static void CopyVehicleInertiaTensor();
    
    UFUNCTION()
    void ClientVehicleSpawnedFromCatchARide();
    
    UFUNCTION(BlueprintCallable)
    void ClearNavPainterLayer(ENavPainterLayer Layer);
    
    UFUNCTION(BlueprintCallable)
    void ClearInputWithFilter(TEnumAsByte<EClearInputFilter> Filter);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllInput();
    
    UFUNCTION(BlueprintPure)
    bool CanVehicleBeControlled() const;
    
    UFUNCTION(BlueprintPure)
    bool CanHover() const;
    
    UFUNCTION(BlueprintPure)
    bool CanDrive() const;
    
    UFUNCTION(BlueprintPure)
    bool CanBeFlippedOver(bool bMustBeUnoccupied) const;
    
protected:
    UFUNCTION(NetMulticast, Unreliable)
    void BroadcastHornStoppedEvent();
    
    UFUNCTION(NetMulticast, Unreliable)
    void BroadcastHornStartedEvent();
    
    UFUNCTION()
    void BlendedRPMAttenuation();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BeforeVehicleDestroyedEvent(EVehicleDeathType VehicleDeathType);
    
    UFUNCTION(BlueprintCallable)
    void AddVehicleForce(const FVector& ForceToAdd, const FName& ForceSource);
    
    UFUNCTION(BlueprintCallable)
    void AddImpulseFromMelee(float ImpulseStrength, float UpRatio, AController* InstigatedBy);
    
    
    // Fix for true pure virtual functions not being implemented
};

