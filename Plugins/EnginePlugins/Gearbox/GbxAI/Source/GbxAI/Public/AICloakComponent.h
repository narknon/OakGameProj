#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "AICloakEventDelegate.h"
#include "SavedCollision.h"
#include "CloakRepData.h"
#include "CloakPrimData.h"
#include "AICloakComponent.generated.h"

class UGbxCharacterMovementComponent;
class UTargetableComponent;
class UGbxNavComponent;
class UGbxActionComponent;
class UAICloakData;
class UStanceComponent;
class UStanceDataProvider;
class UGbxAction;
class UDamageComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXAI_API UAICloakComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAICloakEvent OnCloaked;
    
    UPROPERTY(BlueprintAssignable)
    FAICloakEvent OnUncloaked;
    
private:
    UPROPERTY(EditAnywhere)
    UAICloakData* DefaultCloakData;
    
    UPROPERTY(EditAnywhere)
    bool bRender;
    
    UPROPERTY(EditAnywhere)
    bool bCollide;
    
    UPROPERTY(EditAnywhere)
    bool bVisible;
    
    UPROPERTY(EditAnywhere)
    bool bTargetable;
    
    UPROPERTY(EditAnywhere)
    bool bGodMode;
    
    UPROPERTY(EditAnywhere)
    bool bDemigodMode;
    
    UPROPERTY(EditAnywhere)
    bool bAllowHitReactions;
    
    UPROPERTY(EditAnywhere)
    bool bOnlyMoveWhileCloaked;
    
    UPROPERTY(EditAnywhere)
    bool bCanCloakWithMovementHold;
    
    UPROPERTY(EditAnywhere)
    bool bCloakedOnSpawn;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> RenderExceptions;
    
    UPROPERTY(EditAnywhere)
    float MinimumTransitionTime;
    
    UPROPERTY(EditAnywhere)
    UStanceDataProvider* CloakedStance;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> ActionCloak;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> ActionUncloak;
    
    UPROPERTY(EditAnywhere)
    bool bCloakAfterAction;
    
    UPROPERTY(EditAnywhere)
    bool bUncloakAfterAction;
    
    UPROPERTY(EditAnywhere)
    bool bCanInterruptActions;
    
    UPROPERTY(EditAnywhere)
    bool bLockActions;
    
    UPROPERTY(Transient)
    UAICloakData* OverrideData;
    
    UPROPERTY(Export, Transient)
    UGbxActionComponent* ActionComp;
    
    UPROPERTY(Export, Transient)
    UTargetableComponent* TargetableComp;
    
    UPROPERTY(Export, Transient)
    UGbxNavComponent* NavComp;
    
    UPROPERTY(Export, Transient)
    UGbxCharacterMovementComponent* MoveComp;
    
    UPROPERTY(Export, Transient)
    UStanceComponent* StanceComp;
    
    UPROPERTY(Export, Transient)
    UDamageComponent* DamageComp;
    
    UPROPERTY(Transient)
    FSavedCollision SavedCollision;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Cloaked)
    FCloakRepData RepData;
    
    UPROPERTY(Transient)
    TArray<FCloakPrimData> PrimCompData;
    
public:
    UAICloakComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetCloakData(UAICloakData* NewCloakData);
    
private:
    UFUNCTION()
    void OnRep_Cloaked();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPlayingAction() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCloakStateForced() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCloaked() const;
    
    UFUNCTION(BlueprintCallable)
    void InterruptCloakAction();
    
    UFUNCTION(BlueprintPure)
    UAICloakData* GetCloakData() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceUncloak(bool bInCanPlayActions);
    
    UFUNCTION(BlueprintCallable)
    void ForceCloak(bool bInCanPlayActions);
    
    UFUNCTION(BlueprintCallable)
    void ClearForcedState();
    
    UFUNCTION(BlueprintCallable)
    void ClearCloakData();
    
};

