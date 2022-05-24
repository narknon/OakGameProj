#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UsableComponent.h"
#include "AttachSlotAnimSet.h"
#include "PawnSlotAttachDelegateDelegate.h"
#include "PawnSlotAttachStateDelegateDelegate.h"
#include "PawnAttachmentTransition.h"
#include "PawnAttachSlotState.h"
#include "PawnSceneAttachmentInfo.h"
#include "PawnAttachTransition.h"
#include "PawnDetachTransition.h"
#include "EAttachmentPossessionRule.h"
#include "UObject/NoExportTypes.h"
#include "EPawnAttachStatus.h"
#include "PawnAttachSlotComponent.generated.h"

class UGbxAction;
class AActor;
class APawn;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UPawnAttachSlotComponent : public UUsableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPawnSlotAttachDelegate OnAttachStarted;
    
    UPROPERTY(BlueprintAssignable)
    FPawnSlotAttachDelegate OnAttachFinished;
    
    UPROPERTY(BlueprintAssignable)
    FPawnSlotAttachDelegate OnDetachStarted;
    
    UPROPERTY(BlueprintAssignable)
    FPawnSlotAttachDelegate OnDetachFinished;
    
    UPROPERTY(BlueprintAssignable)
    FPawnSlotAttachStateDelegate OnAttachStateChanged;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_AttachState)
    FPawnAttachSlotState AttachState;
    
    UPROPERTY(EditAnywhere)
    FPawnSceneAttachmentInfo PersistentAttachInfo;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> PersistentPawnAction;
    
    UPROPERTY(EditAnywhere)
    TArray<FAttachSlotAnimSet> AnimSets;
    
    UPROPERTY()
    FPawnAttachmentTransition AttachTransition;
    
    UPROPERTY()
    FPawnAttachmentTransition DetachTransition;
    
    UPROPERTY(EditAnywhere)
    bool bManualAttachTransitionDuration;
    
    UPROPERTY(EditAnywhere)
    bool bEvaluateAttachTransitionBeforeModifyingPawn;
    
    UPROPERTY(EditAnywhere)
    TArray<FPawnAttachTransition> AttachTransitions;
    
    UPROPERTY(EditAnywhere)
    bool bOffsetFallbackDetachLocationByActorHeight;
    
    UPROPERTY(EditAnywhere)
    bool bUseBaseOwnerLocationForSafeLocationTrace;
    
    UPROPERTY(EditAnywhere)
    bool bUseBaseOwnerLocationForFallbackDetachLocation;
    
    UPROPERTY(EditAnywhere)
    TArray<FPawnDetachTransition> DetachTransitions;
    
    UPROPERTY(EditAnywhere)
    EAttachmentPossessionRule PossessionRule;
    
    UPROPERTY(EditAnywhere)
    bool bPossessWhenAttachmentStarts;
    
    UPROPERTY(EditAnywhere)
    bool bRestorePossessionWhenDetachStarts;
    
    UPROPERTY(EditAnywhere)
    uint8 bIsHijackable: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCanHijackPlayer: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCanHijackFriendly: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCanBeUsedByPlayers: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bForceUntargetable: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bForceGodMode: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bForceHidden: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bForceNoCollision: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDisableHitReaction: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCollideDuringTransitions: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bMirrorTeam: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bForceUnCrouch: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreCollisionWithBase: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bBaseIgnoreCollisionWithPawn: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bForceSkeletalOptimizations: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDisableDelayRootMotionOneFrameDuringDetach: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDisableOverlapOptimization: 1;
    
    UPROPERTY(Transient)
    bool bGenerateOverlapEventOnDetach;
    
public:
    UPawnAttachSlotComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPersistentAttachSocketName(FName SocketName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDetachabilityLocked(bool bLock, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void RequestDetachPawn();
    
private:
    UFUNCTION()
    void OnRep_AttachState();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ManuallyFinishAttach();
    
    UFUNCTION(BlueprintPure)
    bool IsOccupied(bool bIncludeDetaching) const;
    
private:
    UFUNCTION()
    void HandleActorDestroyed(AActor* Actor);
    
public:
    UFUNCTION(BlueprintPure)
    FTransform GetPersistentAttachSocketTransform() const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetOccupant(bool bIncludeDetaching) const;
    
    UFUNCTION(BlueprintPure)
    EPawnAttachStatus GetAttachStatus() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DetachPawn(bool bInstant, bool bSkipPlacement);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AttachPawn(APawn* AttachingPawn, bool bInstant);
    
};

