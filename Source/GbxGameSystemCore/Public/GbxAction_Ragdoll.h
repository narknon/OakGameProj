#pragma once
#include "CoreMinimal.h"
#include "GbxAction_SimpleAnim.h"
#include "UObject/NoExportTypes.h"
#include "AttachedObjectFollow.h"
#include "AnimActionDef.h"
#include "GbxAction_Ragdoll.generated.h"

class UMotionMatchedAnimationTable;
class UHitReactionTag;

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxAction_Ragdoll : public UGbxAction_SimpleAnim {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAnimActionDef RagdollAnim;
    
    UPROPERTY(EditAnywhere)
    float RagdollDelayTime;
    
    UPROPERTY(EditAnywhere)
    float UpwardForceMultiplier;
    
    UPROPERTY(EditAnywhere)
    float TerminalResultantVelocity;
    
    UPROPERTY(EditAnywhere)
    bool bHaltMotionBeforeImpulseApplication;
    
    UPROPERTY(EditAnywhere)
    float RagdollAnimBlendInTime;
    
    UPROPERTY(EditAnywhere)
    FAnimActionDef RagdollLoopingAnim;
    
    UPROPERTY(EditAnywhere)
    bool bPlayLoopingAnimWhileNotIdle;
    
    UPROPERTY(EditAnywhere)
    float MinRagdollTime;
    
    UPROPERTY(EditAnywhere)
    FName AnimSlot;
    
    UPROPERTY(EditAnywhere)
    TArray<FAttachedObjectFollow> AttachedObjects;
    
    UPROPERTY(EditAnywhere)
    UMotionMatchedAnimationTable* RecoveryAnimations;
    
    UPROPERTY(EditAnywhere)
    UHitReactionTag* DeathReactionTag;
    
    UPROPERTY()
    bool bCanGetup;
    
    UPROPERTY()
    float GetupIdleTime;
    
    UPROPERTY()
    float GetupIdleSpeedThreshold;
    
    UPROPERTY()
    FName GetupTestBone;
    
    UPROPERTY()
    TEnumAsByte<EAxis::Type> TestBoneUpAxis;
    
    UPROPERTY()
    bool bUpAxisIsNegative;
    
    UPROPERTY()
    TEnumAsByte<EAxis::Type> TestBoneForwardAxis;
    
    UPROPERTY()
    bool bForwardAxisIsNegative;
    
    UPROPERTY()
    FAnimActionDef GetupAnimUp;
    
    UPROPERTY()
    FAnimActionDef GetupAnimDown;
    
    UPROPERTY()
    float GetupBlendInTime;
    
    UPROPERTY()
    float GetupBlendOutTime;
    
public:
    UGbxAction_Ragdoll();
};

