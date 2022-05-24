#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxNavCharacterMovementComponent.h"
#include "SlideEndedDetails.h"
#include "GroundSlamEndedDetails.h"
#include "CharacterJumpGoalSetting.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "UObject/NoExportTypes.h"
#include "SlidingImpactState.h"
#include "EJumpType.h"
#include "OakCharacterMovementComponent.generated.h"

class UWwiseEvent;
class UCharacterSlidingData;
class UGbxAction;
class UImpactData;
class UCurveFloat;
class UCharacterGroundSlamData;
class UOakLadderInteractData;
class AOakCharacter;
class UCoverUserComponent;
class UOakStatusEffectManagerComponent;
class UPrimitiveComponent;
class UFightForYourLifeComponent;
class UOakCharacterAnimInstance;
class ACharacterForcedSlidingVolume;
class UOakPlayerTeleportData;
class UParticleSystemComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakCharacterMovementComponent : public UGbxNavCharacterMovementComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOakCharacterMovementEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterSlideEndedEvent, const FSlideEndedDetails&, Details);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterGroundSlamEndedEvent, const FGroundSlamEndedDetails&, Details);
    
    UPROPERTY(EditAnywhere)
    float PushAwayFromPlayersMaxAccelBoost;
    
    UPROPERTY(EditAnywhere)
    float PushAwayFromPlayersRadiusThreshold;
    
    UPROPERTY(EditAnywhere)
    float MaxInheritedSpeedFromSimulatingPhysicsMovementBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseJumpGoals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SprintingJumpMaxSpeedPct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SprintingJumpHorizontalSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCharacterJumpGoalSetting JumpGoal_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCharacterJumpGoalSetting JumpGoal_Sprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float JumpHorizontalSpeedScaleWhenNoAcceleration;
    
    UPROPERTY(EditAnywhere)
    float FallDelayTime;
    
    UPROPERTY(EditAnywhere)
    float FallDelayGravityScale;
    
    UPROPERTY(EditAnywhere)
    float JumpQueueTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeFloat MaxSprintSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeFloat MaxInjuredSprintSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeFloat MaxWalkSpeedInjured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeFloat MaxWalkSpeedInjuredBeingRevived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSprintAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SprintAnalogInputThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIgnoreAnalogInputWhenSprinting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bMantlingCancelsSprint: 1;
    
    UPROPERTY(EditAnywhere)
    float MaxLadderSlideDownSpeed;
    
    UPROPERTY(EditAnywhere)
    float LadderSlideAcceleration;
    
    UPROPERTY(EditAnywhere)
    float LadderSlideBrakingDeceleration;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> LadderSlideLandingAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* CryoPenaltyCurve;
    
    UPROPERTY(EditAnywhere)
    UCharacterSlidingData* SlidingData;
    
    UPROPERTY(EditAnywhere)
    float SlidingImpactTraceDelay;
    
    UPROPERTY(EditAnywhere)
    FVector SlidingSlopeAdaptation;
    
    UPROPERTY(EditAnywhere)
    UImpactData* WheelRollingImpactData;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* WheelRollingAudioStart;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* WheelRollingAudioStop;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* StartedRollingSound;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* StoppedRollingSound;
    
    UPROPERTY(EditAnywhere)
    FName WheelBone;
    
    UPROPERTY(EditAnywhere)
    FName RollingSpeedParticleParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCharacterGroundSlamData* GroundSlamData;
    
    UPROPERTY(Replicated, Transient)
    FGbxAttributeFloat GroundSlamHeightScalar;
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    uint8 bWantsToSprint: 1;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    uint8 bWantsToStartSprinting: 1;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_bIsSprinting)
    uint8 bIsSprinting: 1;
    
    UPROPERTY(Transient)
    uint8 bWantsToSlide: 1;
    
    UPROPERTY(Transient)
    uint8 bWantsToLadderSlide: 1;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    uint8 bIsSlidingDownLadder: 1;
    
    UPROPERTY(Transient)
    int32 GroundSlamGradeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSpeedScaleToUseBrakingBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BrakingFrictionBoostWhenExceedingMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BrakingDecelerationWalkingBoostWhenExceedingMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BrakingDecelerationFallingBoostWhenExceedingMaxSpeed;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOakCharacterMovementEvent OnStartSprinting;
    
    UPROPERTY(BlueprintAssignable)
    FOakCharacterMovementEvent OnEndSprinting;
    
    UPROPERTY(BlueprintAssignable)
    FOakCharacterMovementEvent OnStartSliding;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterSlideEndedEvent OnStopSliding;
    
    UPROPERTY(BlueprintAssignable)
    FOakCharacterMovementEvent OnStartGroundSlam;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterGroundSlamEndedEvent OnStopGroundSlam;
    
protected:
    UPROPERTY(Transient)
    UOakLadderInteractData* OakLadderInteractData;
    
    UPROPERTY(Transient)
    AOakCharacter* OakCharacterOwner;
    
    UPROPERTY(Export, Transient)
    UCoverUserComponent* CoverUserComponent;
    
    UPROPERTY(Export, Transient)
    UOakStatusEffectManagerComponent* StatusEffectComponent;
    
    UPROPERTY(Export, Transient)
    UFightForYourLifeComponent* FFYLComponent;
    
    UPROPERTY(Transient)
    UOakCharacterAnimInstance* OakAnimInstance;
    
private:
    UPROPERTY(Transient)
    bool bDeceleratingAfterLadderSlide;
    
    UPROPERTY(Transient)
    float JumpGoalGravityScale;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CurrentJumpType)
    EJumpType CurrentJumpType;
    
    UPROPERTY(Transient)
    bool bPendingSlideJump;
    
    UPROPERTY(Transient)
    TArray<AOakCharacter*> ActorsToPushAwayFrom;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_bRepInDelayedFall)
    bool bRepInDelayedFall;
    
    UPROPERTY(Transient)
    FSlidingImpactState SlidingFootImpactState;
    
    UPROPERTY(Transient)
    FSlidingImpactState SlidingBaseImpactState;
    
    UPROPERTY(Transient)
    FSlidingImpactState RollingImpactState;
    
    UPROPERTY(Transient)
    TArray<ACharacterForcedSlidingVolume*> OverlappingSlidingVolumes;
    
    UPROPERTY(Transient)
    ACharacterForcedSlidingVolume* CurrentSlidingVolume;
    
    UPROPERTY(Export)
    UPrimitiveComponent* OldMovementBase;
    
public:
    UOakCharacterMovementComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool TeleportPlayer(const FVector& TargetLocation, UOakPlayerTeleportData* TeleportData);
    
    UFUNCTION(BlueprintCallable)
    void SetWantsToLadderSlide(bool bNewWantsToLadderSlide);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerTeleportPlayer(FVector TeleportLocation, float ClientTimeStamp, uint32 PlayerTeleportID, UOakPlayerTeleportData* PlayerTeleportData);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStopSliding();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStartSliding();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerAttemptGroundSlam(int32 Grade);
    
    UFUNCTION()
    void OnSlidingImpactParticleSystemFinished(UParticleSystemComponent* PSC);
    
    UFUNCTION()
    void OnRep_CurrentJumpType();
    
    UFUNCTION()
    void OnRep_bRepInDelayedFall();
    
    UFUNCTION()
    void OnRep_bIsSprinting();
    
    UFUNCTION()
    void NotifyMantleStarted();
    
    UFUNCTION()
    void NotifyMantleFinished();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSlidingDownLadder() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPerformingUpwardLadderJump() const;
    
private:
    UFUNCTION(Client, Reliable)
    void ClientAckPlayerTeleport(float ClientTimeStamp, uint32 PlayerTeleportID);
    
};

