#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxAction_SimpleAnim.h"
#include "AnimActionDef.h"
#include "GbxParam.h"
#include "OakAction_HostileAttach.generated.h"

class UGbxAction;

UCLASS()
class UOakAction_HostileAttach : public UGbxAction_SimpleAnim {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FAnimActionDef LoopAnim;
    
    UPROPERTY(EditAnywhere)
    FAnimActionDef AttackAnim;
    
    UPROPERTY(EditAnywhere)
    FAnimActionDef GripFeedbackAnim;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> EjectedAction;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(EditAnywhere)
    FGbxParam AttackWarmupDelay;
    
    UPROPERTY(EditAnywhere)
    FGbxParam AttackDelay;
    
    UPROPERTY(EditAnywhere)
    FGbxParam VelocityDifferenceWeight;
    
    UPROPERTY(EditAnywhere)
    FGbxParam RecoveryRate;
    
    UPROPERTY(EditAnywhere)
    FGbxParam ThrowFactor;
    
    UPROPERTY(EditAnywhere)
    FGbxParam EjectForce;
    
    UPROPERTY(EditAnywhere)
    FGbxParam NoHostileDetachDelay;
    
    UPROPERTY(EditAnywhere)
    FGbxParam GripFeedbackValue;
    
    UPROPERTY(EditAnywhere)
    FGbxParam GripFeedbackDelay;
    
    UPROPERTY(EditAnywhere)
    FGbxParam CanStopFeedBackCooldown;
    
public:
    UOakAction_HostileAttach();
};

