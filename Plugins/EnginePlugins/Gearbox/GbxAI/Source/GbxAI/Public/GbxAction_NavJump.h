#pragma once
#include "CoreMinimal.h"
#include "GbxAction_Navigation.h"
#include "StretchBonesSettings.h"
#include "ENavJumpStage.h"
#include "AnimMeshList.h"
#include "ENavJumpRotation.h"
#include "AnimActionDef.h"
#include "GbxAction_NavJump.generated.h"

class UAnimSequenceBase;
class AActor;

UCLASS()
class GBXAI_API UGbxAction_NavJump : public UGbxAction_Navigation {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FStretchBonesSettings StretchBonesSettings;
    
protected:
    UPROPERTY(EditAnywhere)
    float RotationTime;
    
    UPROPERTY(EditAnywhere)
    bool bCancelRotationOnActionStop;
    
    UPROPERTY(EditAnywhere)
    bool bApplyRotationOnStart;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(EditAnywhere)
    FName AnimSlot;
    
    UPROPERTY(EditAnywhere)
    FAnimMeshList JumpEnterAnims;
    
    UPROPERTY(EditAnywhere)
    FAnimMeshList JumpExitAnims;
    
    UPROPERTY(EditAnywhere)
    FAnimMeshList JumpIdleAnims;
    
    UPROPERTY(EditAnywhere)
    ENavJumpRotation RotationDirective;
    
    UPROPERTY(EditAnywhere)
    bool bLockRotation;
    
    UPROPERTY(EditAnywhere)
    ENavJumpStage DisablePhysicsStage;
    
    UPROPERTY(EditAnywhere)
    ENavJumpStage EnablePhysicsStage;
    
    UPROPERTY(EditAnywhere)
    float ArcSpeed;
    
    UPROPERTY(EditAnywhere)
    float ArcAnglePercent;
    
    UPROPERTY(EditAnywhere)
    float MaxPrediction;
    
    UPROPERTY(EditAnywhere)
    float ArcTimeScale;
    
    UPROPERTY(EditAnywhere)
    bool bLimitHitReactions;
    
    UPROPERTY()
    UAnimSequenceBase* JumpEnter;
    
    UPROPERTY()
    UAnimSequenceBase* JumpExit;
    
    UPROPERTY()
    UAnimSequenceBase* JumpIdle;
    
    UPROPERTY()
    FAnimActionDef JumpEnterAnim;
    
    UPROPERTY()
    FAnimActionDef JumpExitAnim;
    
    UPROPERTY()
    FAnimActionDef JumpIdleAnim;
    
public:
    UGbxAction_NavJump();
    UFUNCTION(BlueprintImplementableEvent)
    void OnIdle(AActor* Actor) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnExit(AActor* Actor) const;
    
};

