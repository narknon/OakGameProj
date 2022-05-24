#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "CharacterMoveToState.h"
#include "CharacterRotateToState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "StanceChangedEventArgs.h"
#include "CharacterMoveToCommand.h"
#include "ReplicatedMantleState.h"
#include "NumericRange.h"
#include "CharacterScriptedMeshOffsetState.h"
#include "ControlledMoveNetCorrection.h"
#include "LadderAnimState.h"
#include "ReplicatedLadderState.h"
#include "UObject/NoExportTypes.h"
#include "MantleState.h"
#include "ControlledMoveState.h"
#include "ControlledMoveReplicationData.h"
#include "GbxCharacterNavWalking.h"
#include "NavAnimState.h"
#include "NavAnimServerData.h"
#include "NavAnimClientData.h"
#include "RotationDeltaMatchingInfo.h"
#include "GbxInterpData.h"
#include "IdleVelocityData.h"
#include "RootMotionStateData.h"
#include "FacingInfo.h"
#include "CharacterRotateToCommand.h"
#include "EFacingChannel.h"
#include "MantleAttemptInfo.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "GbxCharacterMovementComponent.generated.h"

class UGbxCharacterAnimInstance;
class AGbxCharacter;
class UGbxAction;
class UAnimInstance;
class ULadderInteractData;
class UStanceComponent;
class AActor;
class UGbxActionComponent;
class ULadderInterface;
class ILadderInterface;
class USceneComponent;
class UMantleData;
class UNavComponent;
class UControlledMove;
class UPrimitiveComponent;
class USkeletalMeshComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UGbxCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGbxCharacterMovementEvent);
    
protected:
    UPROPERTY(Transient)
    AGbxCharacter* GbxCharacterOwner;
    
    UPROPERTY(Transient)
    UGbxCharacterAnimInstance* GbxAnimInstance;
    
    UPROPERTY(Transient)
    UAnimInstance* AnimInstance;
    
    UPROPERTY(EditAnywhere)
    float FallingFloorUpdateInterval;
    
    UPROPERTY(EditAnywhere)
    float FallingFloorTraceDistance;
    
private:
    UPROPERTY(Transient)
    FCharacterMoveToState CurrentMoveToState;
    
    UPROPERTY(Transient)
    FCharacterRotateToState CurrentRotateToState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCanCrouchInAir: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCanClimbLadders: 1;
    
    UPROPERTY()
    uint8 bCenterOnLadder: 1;
    
    UPROPERTY()
    uint8 bSlideAlongLadderCollision: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bBlockMomentumAdd: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeFloat MaxGroundSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LadderFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeFloat MaxLadderAscendSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeFloat MaxLadderDescendSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxLadderForwardSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxLadderReverseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LadderBrakingDeceleration;
    
    UPROPERTY(EditAnywhere)
    float LadderInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    float LadderJumpVelocity;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> EnterBottomAnimation;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> ExitBottomAnimation;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> EnterTopAnimation;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> ExitTopAnimation;
    
    UPROPERTY(EditAnywhere)
    ULadderInteractData* LadderInteractData;
    
    UPROPERTY(BlueprintAssignable)
    FGbxCharacterMovementEvent OnEnterLadder;
    
    UPROPERTY(BlueprintAssignable)
    FGbxCharacterMovementEvent OnExitLadderTop;
    
    UPROPERTY(BlueprintAssignable)
    FGbxCharacterMovementEvent OnExitLadderBottom;
    
    UPROPERTY(BlueprintAssignable)
    FGbxCharacterMovementEvent OnJumpFromLadder;
    
    UPROPERTY(BlueprintAssignable)
    FGbxCharacterMovementEvent OnMantleStarted;
    
    UPROPERTY(BlueprintAssignable)
    FGbxCharacterMovementEvent OnMantleFinished;
    
protected:
    UPROPERTY(Export, Transient)
    UStanceComponent* StanceComponent;
    
    UPROPERTY(Export, Transient)
    UGbxActionComponent* ActionComponent;
    
    UPROPERTY(Transient)
    FCharacterScriptedMeshOffsetState ScriptedMeshOffsetState;
    
public:
    UPROPERTY(Transient)
    bool bClientWasOnLadder;
    
protected:
    UPROPERTY(Transient)
    TArray<TScriptInterface<ILadderInterface>> OverlappingLadderVolumes;
    
    UPROPERTY(Transient)
    TScriptInterface<ILadderInterface> CurrentLadderVolume;
    
    UPROPERTY(Transient)
    TScriptInterface<ILadderInterface> JumpLadderVolume;
    
    UPROPERTY(Transient)
    float LadderJumpTime;
    
    UPROPERTY(Transient)
    uint8 bAlreadyCenteredOnLadder: 1;
    
    UPROPERTY(Transient)
    uint8 bWantsToBeOnLadder: 1;
    
    UPROPERTY(Transient)
    FLadderAnimState LadderAnimState;
    
    UPROPERTY(Replicated, Transient)
    FReplicatedLadderState ReplicatedLadderState;
    
public:
    UPROPERTY(Replicated, Transient)
    FGbxAttributeFloat RotationRateYaw;
    
    UPROPERTY(EditAnywhere, Replicated)
    FGbxAttributeFloat IdleRotationRateYaw;
    
    UPROPERTY(EditAnywhere)
    bool bUseIdleRotationRateYaw;
    
    UPROPERTY(EditAnywhere, Replicated)
    FGbxAttributeFloat MaxAllowedAimOffset;
    
    UPROPERTY(EditAnywhere)
    float MinTurnAimOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinBodyFacingThreshold;
    
    UPROPERTY(EditAnywhere)
    float MaxPredictedTurnDegrees;
    
    UPROPERTY(EditAnywhere)
    bool bUseMaxPredictedTurnDegrees;
    
    UPROPERTY(EditAnywhere)
    float MaxPredictedTurnTime;
    
    UPROPERTY(EditAnywhere)
    bool bUseMaxPredictedTurnTime;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bAlwaysFaceActorsCurrentLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxAttributeFloat AimRotationRate;
    
    UPROPERTY(EditAnywhere)
    float LookAtAngleClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookRotationRate;
    
    UPROPERTY(EditAnywhere)
    float FastLookRotationRate;
    
    UPROPERTY(EditAnywhere)
    bool bUseFastLookRotationRate;
    
    UPROPERTY(EditAnywhere)
    FNumericRange FastLookRotationSpeed;
    
    UPROPERTY(EditAnywhere)
    float HeadLookPercent;
    
    UPROPERTY(EditAnywhere)
    FNumericRange HeadLookPercentDistance;
    
    UPROPERTY(EditAnywhere)
    bool bUseHeadLookPercentDistance;
    
    UPROPERTY(EditAnywhere)
    float HeadLookPercentInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    bool bUseLookAtParentBoneForAngleClamp;
    
    UPROPERTY(EditAnywhere)
    float LookAtBlinkAngle;
    
    UPROPERTY(EditAnywhere)
    bool bUseLookAtBlinkAngle;
    
    UPROPERTY(EditAnywhere)
    FVector LookAtHeadTargetOffset;
    
    UPROPERTY(EditAnywhere)
    bool bUseLookAtHeadTargetOffset;
    
    UPROPERTY(EditAnywhere)
    FVector LookAtEyeTargetOffset;
    
    UPROPERTY(EditAnywhere)
    bool bUseLookAtEyeTargetOffset;
    
    UPROPERTY(EditAnywhere)
    bool bUseLookAtTargetClearDelay;
    
    UPROPERTY()
    float LookAtRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FootIkEnabledInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float SlopeAdaptationOverrideInterpSpeed;
    
protected:
    UPROPERTY(Transient)
    FControlledMoveState ControlledMoveState;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ControlledMove)
    FControlledMoveReplicationData ControlledMoveReplicationData;
    
    UPROPERTY(EditAnywhere)
    UMantleData* MantleData;
    
    UPROPERTY(Transient)
    FMantleState MantleState;
    
    UPROPERTY(Replicated, Transient)
    FReplicatedMantleState ReplicatedMantleState;
    
    UPROPERTY(Transient)
    FGbxCharacterNavWalking GbxNavWalking;
    
    UPROPERTY(Export, Transient)
    UNavComponent* NavComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NavMeshProjectionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AirFriction;
    
    UPROPERTY(Transient)
    float NavMeshProjectionTraceDistance;
    
    UPROPERTY(Replicated, Transient)
    FNavAnimState NavAnimState;
    
    UPROPERTY(Transient)
    FNavAnimServerData NavServerData;
    
    UPROPERTY(Replicated, Transient)
    FNavAnimClientData NavClientData;
    
    UPROPERTY(Replicated, Transient)
    bool bPretendToBeWalking;
    
    UPROPERTY(Transient)
    FRotationDeltaMatchingInfo RotationDeltaMatchingInfo;
    
public:
    UPROPERTY(Transient)
    FGbxInterpData InterpData;
    
    UPROPERTY(Transient)
    FIdleVelocityData IdleVelocity;
    
    UPROPERTY(Transient)
    FRootMotionStateData RootMotionState;
    
    UGbxCharacterMovementComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StopRotateTo();
    
    UFUNCTION(BlueprintCallable)
    void StopMoveTo(bool bForce, bool bReplicateStop);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopControlledMove(TSubclassOf<UControlledMove> ControlledMove, bool bZeroVelocity, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void StartRotateTo(const FCharacterRotateToCommand& RotateToCommand);
    
    UFUNCTION(BlueprintCallable)
    void StartMoveTo(const FCharacterMoveToCommand& MoveToCommand);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool StartControlledMove(TSubclassOf<UControlledMove> ControlledMove, AActor* Instigator, float SpeedOverride, float DurationOverride, float LaunchAngleOverride, AActor* TargetActor, FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetPendingRawInputVector(FVector NewInputVector);
    
    UFUNCTION(BlueprintCallable)
    void SetNoneWithRootMotionMode(bool bAnimationWalking, const FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void SetFacingTarget(const FFacingInfo& FacingTarget, EFacingChannel Channel);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationBasedTurning(const bool bEnable);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStopMoveTo();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStartMoveTo(const FCharacterMoveToCommand& MoveToCommand);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerAttemptMantle(const FMantleAttemptInfo& ClientData, float Timestamp);
    
public:
    UFUNCTION()
    void OnStanceChanged(FStanceChangedEventArgs Args);
    
protected:
    UFUNCTION()
    void OnRep_ControlledMove();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnNotifyTurnExit();
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyTurnEnter();
    
    UFUNCTION()
    void OnCapsuleEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintPure)
    static FFacingInfo MakeFacingInfoRotation(FRotator Rotation);
    
    UFUNCTION(BlueprintPure)
    static FFacingInfo MakeFacingInfoNone();
    
    UFUNCTION(BlueprintPure)
    static FFacingInfo MakeFacingInfoLocation(FVector Location);
    
    UFUNCTION(BlueprintPure)
    static FFacingInfo MakeFacingInfoDirection(FVector Direction);
    
    UFUNCTION(BlueprintPure)
    static FFacingInfo MakeFacingInfoComponent(USceneComponent* Component);
    
    UFUNCTION(BlueprintPure)
    static FFacingInfo MakeFacingInfoActorEyes(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static FFacingInfo MakeFacingInfoActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void LeaveNoneWithRootMotionMode(bool bApplyDefault);
    
    UFUNCTION(BlueprintPure)
    bool IsPerformingSpecificControlledMove(TSubclassOf<UControlledMove> ControlledMove) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPerformingControlledMove() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMovingOnLadder() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMantlingAllowed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMantling() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInNoneWithRootMotionMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHandIkEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFootIkTracingEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFootIkEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFacingTargetBP(float ThresholdDegrees, EFacingChannel Channel) const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxAllowedAimOffset() const;
    
    UFUNCTION(BlueprintPure)
    UMantleData* GetMantleData() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetDesiredFacingRotation(EFacingChannel Channel) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetDesiredFacingLocation(EFacingChannel Channel) const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetCurrentFacingRotation(EFacingChannel Channel) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCurrentFacingOrigin(EFacingChannel Channel) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCurrentFacingLocation(EFacingChannel Channel) const;
    
    UFUNCTION(BlueprintCallable)
    void GbxSetAnimInstanceClass(USkeletalMeshComponent* SkelMeshComponent, UClass* NewClass);
    
private:
    UFUNCTION(Server, Unreliable, WithValidation)
    void ControlledServerMoveOld(float OldTimeStamp, FVector_NetQuantize10 OldAccel, uint8 OldMoveFlags, uint32 CMDir);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ControlledServerMoveDual(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, uint32 CMDir0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode, uint32 CMDir, uint16 ClientBodyYaw);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ControlledServerMove(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode, uint32 CMDir, uint16 ClientBodyYaw);
    
    UFUNCTION(Client, Unreliable)
    void ClientAdjustControlledMovePosition(float Timestamp, FControlledMoveNetCorrection ServerCMData, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);
    
public:
    UFUNCTION(BlueprintPure)
    bool CanStartPassiveMantle() const;
    
    UFUNCTION(BlueprintPure)
    bool CanStartMantle() const;
    
};

