#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GbxCharacterAnimInstance.h"
#include "ECoverUserState.h"
#include "EVehicleArchetype.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "OakCharacterAnimInstance.generated.h"

class ATurretSeatPawn;
class UCoverViewData;
class UCoverStyleData;
class UVehicleSeatComponent;
class AOakVehicle;
class UVehicleHoverComponent;
class UAnimSequenceBase;
class AWeapon;
class UPrimitiveComponent;
class AActor;
class UPawnAttachSlotComponent;

UCLASS(NonTransient)
class UOakCharacterAnimInstance : public UGbxCharacterAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsMantling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsSprinting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool bCanUseWeaponWhileSprinting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsSliding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsUsingLadder;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsLadderSliding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsPerformingUpdwardLadderJump;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsUsingWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsReloading;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsZoomed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float ZoomDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool bShouldLowerWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool bDisableIdleToSprintTransition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float HandToWeaponAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    ECoverUserState DesiredCoverState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    UCoverStyleData* CoverStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    UCoverViewData* CoverView;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsInCover;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool WantsToLeaveCover;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsCoverFlanked;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsInCoverFireIdle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsInCoverFireIdleAndWantsToLeaveCover;
    
    UPROPERTY(Transient)
    float ClothWeightFromCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float FacialAnimWeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FVector FacialTeethOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool bCanUpdateClothBlendWeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    uint8 AnimStyle;
    
private:
    UPROPERTY(Transient)
    AOakVehicle* CurrentVehicle;
    
    UPROPERTY(Transient)
    ATurretSeatPawn* CurrentTurret;
    
    UPROPERTY(Export, Transient)
    UVehicleSeatComponent* VehicleSeatComponent;
    
    UPROPERTY(Export, Transient)
    UVehicleHoverComponent* VehicleHoverComponent;
    
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool InVehicle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float DisableAlphaInVehicle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool InMannedTurret;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsSeatedTurret;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool InRollerCoaster;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FName VehicleArchetype;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 SeatIndex;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float VehicleThrottleInput;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float VehicleSpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float VehicleSteerAngle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float VehicleSteerAngleExplicitTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool VehicleIsInReverse;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsVehicleFlipped;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float VehicleAcceleration;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float VehicleTurningDelta;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float VehicleDampedAccelInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float VehicleSmoothedZVelocity;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float VehicleSlotAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FrontBackWorldAdditive;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LeftRightWorldAdditive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DriverAdditiveForwardAccelerationTreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DriverAdditiveForwardInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DriverAdditiveLateralAccelerationTreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DriverAdditiveLateralInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DriverAdditiveUpwardAccelerationTreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DriverAdditiveUpwardInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EVehicleArchetype VehicleArchetypeEnum;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float NegativeSpeedToPlayTurnWheelBackward;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FName VehicleSlotName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FName AnimNameTurnWheel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FName AnimSetNameTurnWheel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FName AnimNameTurnWheelInReverse;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FName AnimSetNameTurnWheelInReverse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FName AnimNameTurretIdle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FName AnimSetNameTurretIdle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FName AnimNameAdditiveFlinchFront;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FName AnimNameAdditiveFlinchBack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FName AnimNameAdditiveFlinchLeft;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FName AnimNameAdditiveFlinchRight;
    
    UPROPERTY(Transient)
    UAnimSequenceBase* AdditiveFlinchPlaying;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ForwardDynamicsAlpha;
    
    UPROPERTY(EditDefaultsOnly)
    bool bWheeledCharacter;
    
    UPROPERTY(EditDefaultsOnly)
    float TireRadius;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator TireRotation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bForceEnableHandIK;
    
    UOakCharacterAnimInstance();
private:
    UFUNCTION()
    void VehicleHitReaction(FVector2D ImpactTrehsold, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetHasWeaponPoses(bool bHasLeft, bool bHasRight);
    
    UFUNCTION()
    void OnWeaponModeChanged_Native();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWeaponModeChanged();
    
    UFUNCTION()
    void OnWeaponChanged_Native(AWeapon* NewWeapon, AWeapon* PrevWeapon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWeaponChanged(AWeapon* NewWeapon, AWeapon* PrevWeapon);
    
private:
    UFUNCTION()
    void OnVehicleComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION()
    void OnExitVehicleStarted_Native(const UPawnAttachSlotComponent* PawnAttachSlotComponent);
    
    UFUNCTION()
    void OnExitVehicleFinished_Native(const UPawnAttachSlotComponent* PawnAttachSlotComponent);
    
    UFUNCTION()
    void OnExitTurretStarted_Native(const UPawnAttachSlotComponent* PawnAttachSlotComponent);
    
    UFUNCTION()
    void OnExitTurretFinished_Native(const UPawnAttachSlotComponent* PawnAttachSlotComponent);
    
    UFUNCTION()
    void OnEnterVehicleStarted_Native(const UPawnAttachSlotComponent* PawnAttachSlotComponent);
    
    UFUNCTION()
    void OnEnterTurretStarted_Native(const UPawnAttachSlotComponent* PawnAttachSlotComponent);
    
    UFUNCTION()
    void OnChangeVehicleSeat_Native(const UPawnAttachSlotComponent* FromSeat, const UPawnAttachSlotComponent* ToSeat);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimStyleChanged();
    
};

