#pragma once
#include "CoreMinimal.h"
#include "EGbxPhysicalActionDynamicBodyState.h"
#include "EGbxPhysicalActionDynamicBoneActivationMode.h"
#include "GbxAction_Anim.h"
#include "BoneFatigueParams.h"
#include "EPhysicalAnimationRootMotionControl.h"
#include "EGbxPhysicalActionMovementLockMode.h"
#include "EGbxPhysicalActionEndCondition.h"
#include "EGbxPhysicalActionBeginCondition.h"
#include "GbxAction_PhysicalAnim.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxAction_PhysicalAnim : public UGbxAction_Anim {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EPhysicalAnimationRootMotionControl RootMotionControl;
    
    UPROPERTY(EditAnywhere)
    EGbxPhysicalActionMovementLockMode MovementLockMode;
    
    UPROPERTY(EditAnywhere)
    EGbxPhysicalActionDynamicBoneActivationMode DynamicBoneActivationMode;
    
    UPROPERTY(EditAnywhere)
    FBoneFatigueParams FatigueParams;
    
    UPROPERTY(EditAnywhere)
    EGbxPhysicalActionBeginCondition BeginCondition;
    
    UPROPERTY(EditAnywhere)
    uint8 PhysicalBeginConditionFlags;
    
    UPROPERTY(EditAnywhere)
    uint8 PhysicalEndConditionFlags;
    
    UPROPERTY(EditAnywhere)
    EGbxPhysicalActionEndCondition PhysicalEndCondition;
    
    UPROPERTY(EditAnywhere)
    float CustomForceMultiplier;
    
    UPROPERTY(EditAnywhere)
    float UpwardForceMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool bForceAppliedAtLocation;
    
    UPROPERTY(EditAnywhere)
    bool bHasValidHitForce;
    
    UGbxAction_PhysicalAnim();
private:
    UFUNCTION(BlueprintPure)
    EGbxPhysicalActionDynamicBodyState K2_GetDynamicBodyState(float AngularThreshold) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_FixupDynamicToKinematicIssues(float AngularThreshold) const;
    
};

