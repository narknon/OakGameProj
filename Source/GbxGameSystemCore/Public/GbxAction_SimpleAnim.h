#pragma once
#include "CoreMinimal.h"
#include "GbxAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxBlueprintActionInterface -FallbackName=GbxBlueprintActionInterface
#include "Engine/EngineTypes.h"
#include "GbxAction_SimpleAnim.generated.h"

class UGbxBoneSet;
class UPhysicalAnimationProfileAsset;
class AActor;

UCLASS(Abstract)
class GBXGAMESYSTEMCORE_API UGbxAction_SimpleAnim : public UGbxAction, public IGbxBlueprintActionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bStopAI;
    
    UPROPERTY(EditAnywhere)
    bool bAbortAI;
    
    UPROPERTY(EditAnywhere)
    bool bStopMovement;
    
    UPROPERTY(EditAnywhere)
    bool bDisableHitReactions;
    
    UPROPERTY(EditAnywhere)
    bool bUsePhysNoneWithRootMotion;
    
    UPROPERTY(EditAnywhere)
    bool bStopLook;
    
    UPROPERTY(EditAnywhere)
    bool bStopAimRotation;
    
    UPROPERTY(EditAnywhere)
    bool bStopHeadLook;
    
    UPROPERTY(EditAnywhere)
    bool bLockHeadLook;
    
    UPROPERTY(EditAnywhere)
    bool bDisableAvoidance;
    
    UPROPERTY(EditAnywhere)
    bool bTickAndRefreshBones;
    
    UPROPERTY(EditAnywhere)
    bool bDisableCollision;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ECollisionChannel>> DisableCollisionChannels;
    
    UPROPERTY(EditAnywhere)
    bool bEnableLoopHelper;
    
    UPROPERTY(EditAnywhere)
    bool bCanInterruptSameSlotAnims;
    
protected:
    UPROPERTY(EditAnywhere)
    bool bResetDynamicsOnBegin;
    
    UPROPERTY(EditAnywhere)
    bool bUsePhysicalAnimationProfile;
    
    UPROPERTY(EditAnywhere)
    UPhysicalAnimationProfileAsset* PhysicalAnimationProfile;
    
    UPROPERTY(EditAnywhere)
    bool bRestorePreviousPhysicalAnimationProfileOnEnd;
    
    UPROPERTY(EditAnywhere)
    bool bUseNewBoneSetFilter;
    
    UPROPERTY(EditAnywhere)
    UGbxBoneSet* NewBoneSetFilter;
    
    UPROPERTY(EditAnywhere)
    bool bRestorePreviousBoneSetFilterProfileOnEnd;
    
    UPROPERTY(EditAnywhere)
    bool bResetBoneSetFilter;
    
    UPROPERTY(EditAnywhere)
    float DefaultInterruptBlendOutTime;
    
    UPROPERTY(EditAnywhere)
    bool bReleaseResourceFlagsOnAnimEnd;
    
    UPROPERTY(EditAnywhere)
    bool bEndActionOnBlendOut;
    
public:
    UGbxAction_SimpleAnim();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimEnd(AActor* Actor);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetTickAndRefreshBones(bool bLockResource) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetPhysNoneWithRootMotion(bool bEnable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetMovement(bool bDisable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetLook(bool bDisable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetHitReactions(bool bDisable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetHeadLookLocked(bool bLock) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetHeadLook(bool bDisable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetCollision(bool bEnable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetAvoidance(bool bDisable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetAIThinking(bool bDisable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetAimRotation(bool bDisable) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

