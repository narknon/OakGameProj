#pragma once
#include "CoreMinimal.h"
#include "GbxAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "NavAnimServerData.h"
#include "NavAnimClientData.h"
#include "EGbxCharacterBlendPoints.h"
#include "ENavAnimState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GaitScalingSettings -FallbackName=GaitScalingSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EBoneSetTransitionBlendType -FallbackName=EBoneSetTransitionBlendType
#include "GbxCharacterAnimInstance.generated.h"

class UStanceComponent;
class UGbxBoneSet;
class UStanceDataProvider;
class UStanceData;
class UStanceType;

UCLASS(NonTransient)
class GBXGAMESYSTEMCORE_API UGbxCharacterAnimInstance : public UGbxAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FVector HeadLookAtLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FVector EyeLookAtLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float HeadLookAtPercentage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float LookAtWeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool bLookAtBlinkStarted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FName ActiveStanceData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FName ActiveStanceType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    UStanceDataProvider* CombatStance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    UStanceDataProvider* PassiveStance;
    
    UPROPERTY(Transient)
    UStanceData* StanceData;
    
    UPROPERTY(Transient)
    UStanceType* StanceType;
    
    UPROPERTY(Export, Transient)
    UStanceComponent* StanceComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bInCombatStance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bInPassiveStance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsInAir;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsCrouching;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool bIsFlying;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool bIsFalling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool bHasBeenLaunched;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool bJumped;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool bForceFallingState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float MaxWalkSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float MaxSprintSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float MaxWalkSpeedCrouched;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float Speed2D;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float Speed2DRaw;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float VelocityZ;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float ForwardDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float RightDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float UpDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FVector Acceleration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float Direction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float BodyYaw;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float ReverseDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FRotator RotationalVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FVector GroundLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float Radius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool WantsToTurn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float TurnAmount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool TurnIsActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float MaxPredictedTurnDegrees;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float MaxPredictedTurnTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float Pitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float Yaw;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float AimBlendWeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FVector AimFacingLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanAimInPassiveStance;
    
    UPROPERTY(EditAnywhere)
    bool bUpdateFootIK;
    
    UPROPERTY(EditAnywhere)
    bool bUpdateHandIK;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float LeftHandIKWeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float RightHandIKWeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float LeftHandGripWeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float RightHandGripWeight;
    
    UPROPERTY(EditAnywhere)
    bool bUseLegIkBaseClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FTransform LeftHandWeaponIKOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FTransform RightHandWeaponIKOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FTransform LeftHandWorldIKTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool bHasLeftHandWorldIKTarget;
    
    UPROPERTY(EditAnywhere)
    bool bBlueprintForceLeftHandWorldIKTarget;
    
    UPROPERTY(EditAnywhere)
    FName LeftHandIKTargetSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FTransform RightHandWorldIKTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool bHasRightHandWorldIKTarget;
    
    UPROPERTY(EditAnywhere)
    bool bBlueprintForceRightHandWorldIKTarget;
    
    UPROPERTY(EditAnywhere)
    FName RightHandIKTargetSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FVector LeftFootWorldIKTargetLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FRotator LeftFootWorldIKTargetRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FVector RightFootWorldIKTargetLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FRotator RightFootWorldIKTargetRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool bHasFootWorldIKTargets;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float AINavYaw;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float AINavTurnBlendDegrees;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float AINavTransitionBlendDegrees;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector2D AINavHopDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AINavHopDistance;
    
    UPROPERTY(Transient)
    FNavAnimServerData AINavServerData;
    
    UPROPERTY(Transient)
    FNavAnimClientData AINavClientData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AINavState_IdleAlphaTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float AINavState_IdleAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bAINavState_Idle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bAINavState_Move;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bAINavState_Start;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bAINavState_Stop;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bAINavState_Turn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EGbxCharacterBlendPoints BlendPoints;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bAINavWantsForward;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bAINavWantsBackward;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bAINavWantsLeft;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bAINavWantsRight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bAINavIsMoving2D;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bAINavIsStill2D;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 AINavPreviewTableIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ENavAnimState AINavPreviewDesiredState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAINav_UseDesired;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAINav_CanStretch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MeshScale;
    
    UPROPERTY()
    ENavAnimState AINavPreviewCurrentState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float StartTransitionTimeToEvaluate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float StopTransitionTimeToEvaluate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float TurningRotationTimeToEvaluate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    UGbxBoneSet* ActiveAnimBoneSetFilter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    UGbxBoneSet* PrevAnimBoneSetFilter;
    
    UPROPERTY(EditAnywhere)
    FGaitScalingSettings GaitScalingSettings;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FacialEmoteWeight;
    
    UPROPERTY(BlueprintReadOnly)
    float DesiredFacialEmoteWeight;
    
    UPROPERTY(Transient)
    float FacialEmoteWeightAlphaSpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float DesiredActionWeight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float BoneSetTransitionActionWeight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float BoneSetBlendWeight;
    
private:
    UPROPERTY(Transient)
    EBoneSetTransitionBlendType BoneSetTransitionBlendType;
    
    UPROPERTY(Transient)
    float BoneSetTransitionBlendSpeed;
    
    UPROPERTY(Transient)
    float BoneSetBlendSpeed;
    
    UPROPERTY(EditAnywhere)
    float DefaultBoneSetBlendSpeed;
    
    UPROPERTY(EditAnywhere)
    float DefaultBoneSetTransitionBlendSpeed;
    
public:
    UGbxCharacterAnimInstance();
    UFUNCTION(BlueprintCallable)
    void SetDesiredFacialEmoteWeight(float Weight, float BlendTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStanceChanged();
    
};

