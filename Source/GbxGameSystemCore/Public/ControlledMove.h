#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Curves/CurveFloat.h"
#include "UObject/Object.h"
#include "AttributeInitializationData.h"
#include "CMMotionData.h"
#include "ECMMoveLRControlType.h"
#include "ECMMovementType.h"
#include "RelativeDirectionData.h"
#include "ECMLedgeBehavior.h"
#include "ECMTerminalVelocityModificationType.h"
#include "ECMGravityModificationType.h"
#include "ECMMoveFBControlType.h"
#include "ECMTeleportPreferenceType.h"
#include "UObject/NoExportTypes.h"
#include "ControlledMove.generated.h"

class AGbxCharacter;
class UGbxAction;
class AActor;

UCLASS(Abstract, Blueprintable)
class GBXGAMESYSTEMCORE_API UControlledMove : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bIsSpeedScaleNormalized: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEaseInSpeedConstraints: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bRestoreCharacterMovementMode: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bZeroVelocityAtEnd: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUpdateCharacterRotationYaw: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUpdateCharacterRotationPitch: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bApplyLaunchVelocityOnStart: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSpeedAffectedByMaxGroundSpeedScale: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bBlockMomentumAdd: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIsMotionNormalized: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIsInheritVelocityScaleNormalized: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bApplyMoveWhenFalling: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bStopOnLanding: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideAirControl: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseSlopeCurve: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bStopWhenTargetReached: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableMoveControls: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bLimitedLookControl: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bInputVectorRelativeToMoveDirection: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseMovingLaunchDirection: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDirectionRelativeToTarget: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOffsetLocationByCollisionRadius: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOffsetLocationByTargetCollisionRadius: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bLeap: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAlwaysCollideWithTarget: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bStopOnHitWall: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bStopOnHitTargetable: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTeleport: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bRestrictTeleportToGround: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDisableLookInput: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDisableMoveInput: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableTargetControls: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTargetControlGrounded: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTrackTarget: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bStopAI: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAbortAI: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bGodMode: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDemigodMode: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEndCrouch: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bForceCrouch: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUpdateCameraRotationYaw: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUpdateCameraRotationPitch: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCancelActionSkillsIfPlayerNotInstigator: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIsNetworkAutonomous: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bPlayStartStopActionsLocally: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllowClientCollisionNotifications: 1;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Duration;
    
    UPROPERTY(EditAnywhere)
    ECMMovementType MovementType;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Speed;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve SpeedScaleCurve;
    
    UPROPERTY(EditAnywhere)
    float CharacterRotationYawOffset;
    
    UPROPERTY(EditAnywhere)
    float CharacterRotationPitchOffset;
    
    UPROPERTY(EditAnywhere)
    FCMMotionData MotionCurves;
    
    UPROPERTY(EditAnywhere)
    int32 InheritVelocityType;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve InheritVelocityScaleCurve;
    
    UPROPERTY(EditAnywhere)
    float AdjustDurationBySlopeModifier;
    
    UPROPERTY(EditAnywhere)
    float MaxStepHeight;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve SpeedSlopeScaleCurve;
    
    UPROPERTY(EditAnywhere)
    ECMLedgeBehavior LedgeBehavior;
    
    UPROPERTY(EditAnywhere)
    float LedgeHeight;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData AirControl;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData GravityModifier;
    
    UPROPERTY(EditAnywhere)
    ECMGravityModificationType GravityModificationType;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve GravityModifierEffectOverTime;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData TerminalVelocityModifier;
    
    UPROPERTY(EditAnywhere)
    ECMTerminalVelocityModificationType TerminalVelocityModificationType;
    
    UPROPERTY(EditAnywhere)
    float TargetReached2DThreshold;
    
    UPROPERTY(EditAnywhere)
    float TargetReachedUpThreshold;
    
    UPROPERTY(EditAnywhere)
    float TargetReachedDownThreshold;
    
    UPROPERTY(EditAnywhere)
    ECMMoveFBControlType MoveFBControlType;
    
    UPROPERTY(EditAnywhere)
    ECMMoveLRControlType MoveLRControlType;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData MoveForwardRate;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData MoveBackwardRate;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData MoveLRRate;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData LookTurnScale;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData LookUpScale;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData LookDownScale;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DropRate;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData MaxDiveAngle;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData MaxClimbAngle;
    
    UPROPERTY(EditAnywhere)
    FRelativeDirectionData LaunchDirection;
    
    UPROPERTY(EditAnywhere)
    FRelativeDirectionData MovingLaunchDirection;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData LaunchAngle;
    
    UPROPERTY(EditAnywhere)
    float LocationOffset;
    
    UPROPERTY()
    float LeapApexAngle;
    
    UPROPERTY()
    float LeapStartLandingOffsetTime;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> StartAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> StopAction;
    
    UPROPERTY()
    TSubclassOf<UGbxAction> LeapApexAction;
    
    UPROPERTY()
    TSubclassOf<UGbxAction> LeapLandingAction;
    
    UPROPERTY(EditAnywhere)
    float HitWallAngle;
    
    UPROPERTY(EditAnywhere)
    float TeleportOffset;
    
    UPROPERTY(EditAnywhere)
    ECMTeleportPreferenceType TeleportLocationPreference;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData LimitedTargetControlDistance;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData TargetControlVelocity;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData TargetControlDelay;
    
    UPROPERTY(EditAnywhere)
    float MaxTrackingCorrectionAngle;
    
    UPROPERTY(EditAnywhere)
    float TrackingVelocity;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AGbxCharacter* ControlledCharacter;
    
    UControlledMove();
    UFUNCTION(BlueprintNativeEvent)
    void OnTeleported(float MoveDuration, const FVector& PreTeleportLocation);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnTargetLocationChanged(const FVector& NewTargetLocation);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnStop(bool bInterrupted);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnStart(float MoveDuration, AActor* TargetActor);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnServerStop(bool bInterrupted);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnServerStart(float MoveDuration, AActor* TargetActor, AActor* Instigator);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnHitWorld(AActor* HitActor, const FVector& HitNormal);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnHitTargetable(AActor* HitActor, const FVector& HitNormal);
    
};

