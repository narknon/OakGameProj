#pragma once
#include "CoreMinimal.h"
#include "OakCharacterAnimInstance.h"
#include "InputTransforms.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "OakPlayerAnimInstance.generated.h"

class AOakCharacter_Player;
class UOakFirstPersonData;
class UGbxBoneSet;
class AWeapon;

UCLASS(NonTransient)
class UOakPlayerAnimInstance : public UOakCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AOakCharacter_Player* PlayerOwner;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsPistol;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UOakFirstPersonData* FirstPersonData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FInputTransforms FirstPersonViewModelOffsets;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector FirstPersonWeaponOffsetLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator FirstPersonWeaponOffsetRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector FirstPersonOffsetLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FirstPersonSpeed2D;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FirstPersonZoomEffect;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FirstPersonZoomStartPosition;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FirstPersonTiltWeight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FirstPersonMuteADSWeight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FirstPersonMantleReachWeight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FirstPersonWeaponAngleAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FirstPersonRAddAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FirstPersonPistolStockAddAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float HeadBobMultiplier;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector FirstPersonFallNoise;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FirstPersonFingerOverrideWeight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FirstPersonLadderIdleAdditiveAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bFirstPersonUseAimOffset: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bFirstPersonBranchLeftArm: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bFirstPersonBlendMantle: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bFirstPersonWeaponIsLowered: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bFirstPersonBlendLowerWeapon: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    uint8 bIsEchoDeviceActive: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    uint8 bShouldPlayEchoAnim1P: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    uint8 bShouldPlayEchoAnim3P: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bEchoDeviceOutsideOfMenuMode: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bEchoDeviceButton1Pressed: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bEchoDeviceButton2Pressed: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bEchoDeviceButton3Pressed: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float EchoDeviceDPadXAxis;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float EchoDeviceDPadYAxis;
    
    UPROPERTY(EditAnywhere)
    float JumpStartVelocityZ;
    
    UPROPERTY(EditAnywhere)
    float StartFallingVelocityZ;
    
    UPROPERTY(EditAnywhere)
    float JumpStartFromFallMaximumVelocityZ;
    
    UPROPERTY(EditAnywhere)
    float FallingAnimVelocityZ;
    
    UPROPERTY(EditAnywhere)
    float CrouchMaxVelocityZ;
    
    UPROPERTY(EditAnywhere)
    float FirstPersonSprintJumpStartVelocityZ;
    
    UPROPERTY(EditAnywhere)
    float FirstPersonCrouchMaxVelocityZ;
    
    UPROPERTY(EditAnywhere)
    float JumpEndMinSpeed2D;
    
    UPROPERTY(EditAnywhere)
    float SprintMinSpeed2D;
    
    UPROPERTY(EditAnywhere)
    float IdleMaxSpeed2D;
    
    UPROPERTY(EditAnywhere)
    float CrouchEndMaxSpeed2D;
    
    UPROPERTY(EditAnywhere)
    float InjuredSpeedDivider;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float InjuredPlayRate;
    
    UPROPERTY(EditAnywhere)
    float FirstPersonSprintJumpExitMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float FirstPersonJumpExitMinSpeed;
    
    UPROPERTY(EditAnywhere)
    float FirstPersonSprintMinSpeed2D;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float FirstPersonBunnyHopTiming;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float FirstPersonBunnyHopTiming_Sprint;
    
    UPROPERTY(EditAnywhere)
    float BaseFrontDirectionMinThreshold;
    
    UPROPERTY(EditAnywhere)
    float BaseFrontDirectionMaxThreshold;
    
    UPROPERTY(EditAnywhere)
    float FrontToBackTransitionFrontDirectionMinThreshold;
    
    UPROPERTY(EditAnywhere)
    float FrontToBackTransitionFrontDirectionMaxThreshold;
    
    UPROPERTY(EditAnywhere)
    float InjuredFrontDirectionMinThreshold;
    
    UPROPERTY(EditAnywhere)
    float InjuredFrontDirectionMaxThreshold;
    
    UPROPERTY(EditAnywhere)
    float InjuredFrontToBackTransitionFrontDirectionMinThreshold;
    
    UPROPERTY(EditAnywhere)
    float InjuredFrontToBackTransitionFrontDirectionMaxThreshold;
    
    UPROPERTY(EditAnywhere)
    float InjuredBackToFrontTransitionFrontDirectionMinThreshold;
    
    UPROPERTY(EditAnywhere)
    float InjuredBackToFrontTransitionFrontDirectionMaxThreshold;
    
    UPROPERTY(EditAnywhere)
    float SprintFrontDirectionMinThreshold;
    
    UPROPERTY(EditAnywhere)
    float SprintFrontDirectionMaxThreshold;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsIdling;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsCrouchIdling;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWasSprinting;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bCanFallJump;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FallingSpeedAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float StateChangeBlendTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsJumpEnded;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsCrouchMoveEnded;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsCrouchMoveNeedEnding;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsCrouchEndDone;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsCrouchNeedStarting;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsCrouchNeedMoving;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsCrouchInVehicle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsExitingLadderInAir;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsExitingLadderNotInAir;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsClimbingLadder;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsJumpStart;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsSprintJumpStart;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsJumpLoop;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsSprintJumpLoop;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsJumpEndedBySpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsBaseLocoGoingForward;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsBaseLocoGoingBackward;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsBaseLocoGoingFrontToBack;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsSprintLocoExitForward;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsSprintLocoExitBackward;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsSprintLocoExitForwardNoBlend;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsSprintLocoExitBackwardNoBlend;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsInjuredLocoGoingForward;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsInjuredLocoGoingBackward;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsInjuredLocoGoingFrontToBack;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsInjuredLocoGoingBackToFront;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bCanStartSprinting;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LeftHandIKWhileAimOffset;
    
    UPROPERTY(EditAnywhere)
    UGbxBoneSet* AimOffsetDefaultBoneSet;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UGbxBoneSet* AimOffsetCurrentBoneSet;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bFirstPersonIsJumpLoop;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bFirstPersonIsSprintJumpStart;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bFirstPersonIsCrouchNeedMoving;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bFirstPersonIsCrouchNeedStarting;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bFirstPersonIsCrouchExit;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bFirstPersonCanUseCrouchTransition;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GunnerBockJockBlitzPassiveSkillModifierAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bFirstPersonIsJumpIdle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bFirstPersonIsSlidingToLocomotion;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bFirstPersonIsIdling;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bFirstPersonToIdleToSprintTransitionState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bFirstPersonIdleToSprint;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bFirstPersonSprintToIdle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bFirstPersonSprintToSprintTransition;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bFirstPersonADSJumpEnter;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bFirstPersonADSCrouchStart;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bFirstPersonADSCrouchMove;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bFirstPersonADSJumpLoop;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bFirstPersonADSToHipFire;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bFirstPersonExitLowerWeapon;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bFirstPersonUnarmedIsJumpStarted;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bFirstPersonUnarmedIsSprintJumpStart;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bFirstPersonHardLanded;
    
private:
    UPROPERTY(VisibleAnywhere)
    int32 RightHandInteractionBottomPressAssetPlayerIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 RightHandInteractionBottomPressToHoldTransitionIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 RightHandInteractionMiddlePressAssetPlayerIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 RightHandInteractionMiddleToNeutralTransitionIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 RightHandInteractionTopPressAssetPlayerIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 RightHandInteractionTopPressToHoldTransitionIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 ADSSetStateMachineIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 ADSSetJumpExitStateIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 ADSSetJumpExitToJumpEnterTransitionIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 HipfireSetStateMachineIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 HipfireSetJumpExitStateIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 HipfireSetJumpExitToJumpEnterTransitionIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 HipfireSetJumpExitToUprightIdleAndMovementTransitionIndex1;
    
    UPROPERTY(VisibleAnywhere)
    int32 HipfireSetSprintExitAssetPlayerIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 HipfireSetSprintExitToUprightIdleAndMovementTransitionIndex1;
    
    UPROPERTY(VisibleAnywhere)
    int32 HipfireSetSprintJumpExitStateIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 HipfireSetSprintJumpExitToSprintJumpEnterTransitionIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 HipfireSetSprintJumpExitToSprintExitTransitionIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 HipfireSetSprintJumpExitToUprightIdleAndMovementTransitionIndex2;
    
    UPROPERTY(VisibleAnywhere)
    int32 UprightLocomotionStatesStateMachineIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 UprightLocomotionStatesIdleToSprintAssetPlayerIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 UprightLocomotionStatesIdleToSprintToIdleTransitionIndex2;
    
    UPROPERTY(VisibleAnywhere)
    int32 UprightLocomotionStatesIdleToSprintStateIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 UprightLocomotionStatesIdleToSprintToSprintTransitionTransitionIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 UprightLocomotionStatesSprintTransitionStateIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 UprightLocomotionStatesSprintTransitionToLocomotionTransitionIndex1;
    
    UPROPERTY(VisibleAnywhere)
    int32 UprightLocomotionStatesSprintExitAssetPlayerIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 UprightLocomotionStatesSprintTransitionToLocomotionTransitionIndex2;
    
    UPROPERTY(VisibleAnywhere)
    int32 UnarmedSetStateMachineIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 UnarmedSetJumpExitStateIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 UnarmedSetJumpExitToJumpEnterTransitionIndex;
    
public:
    UOakPlayerAnimInstance();
    UFUNCTION()
    void OnWeaponReloadStarted(AWeapon* Weapon, bool bAuto);
    
    UFUNCTION()
    void OnWeaponReloadEnded(AWeapon* Weapon, bool bCompleted);
    
    UFUNCTION()
    void AnimNotify_Raised();
    
    UFUNCTION()
    void AnimNotify_IsLowered();
    
};

