#pragma once
#include "CoreMinimal.h"
#include "EReviveState.h"
#include "UsableComponent.h"
#include "EExitDownStateReason.h"
#include "GameResourcePoolReference.h"
#include "Engine/Scene.h"
#include "EDownState.h"
#include "ExitDownStateInformation.h"
#include "StatusEffectInstanceReference.h"
#include "CausedDamageDetails.h"
#include "FightForYourLifeComponent.generated.h"

class UDamageSource;
class UHUDNotificationAsset;
class UFightForYourLifeComponent;
class UGbxAttributeData;
class UTravelStationResurrectComponent;
class AActor;
class UGameResourceData;
class UStatusEffectData;
class UCurveFloat;
class UWwiseEvent;
class UParticleSystemComponent;
class UGbxHUDStateData;
class UParticleSystem;
class UGbxDamageType;
class UDamageComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFightForYourLifeComponent : public UUsableComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTransportEvent, bool, bTransportStarted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOtherFightForYourLifeEvent, UFightForYourLifeComponent*, OtherFFYL);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFightForYourLifeWithStateEvent, EExitDownStateReason, ExitDownStateReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFightForYourLifeWithBoolEvent, bool, IsSuccessful);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFightForYourLifeResurrected, UTravelStationResurrectComponent*, ResurrectStation);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFightForYourLifeEventWithActorBeingRevived, AActor*, ActorBeingRevived);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFightForYourLifeEvent);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGameResourceData* DownStateTimeResourceData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGameResourceData* ReviveTimeResourceData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaximumRevivingActors;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FGameResourcePoolReference DownTimeResourcePool;
    
    UPROPERTY(EditAnywhere)
    float GiveUpDownTimeConsumptionRate;
    
    UPROPERTY(EditAnywhere)
    bool StartDownStateTimePaused;
    
    UPROPERTY(EditAnywhere)
    UHUDNotificationAsset* DefaultExitNotificationAsset;
    
    UPROPERTY(EditAnywhere)
    FText DefaultExitNotificationText;
    
    UPROPERTY(EditAnywhere)
    uint32 ExitNotificationPriority;
    
    UPROPERTY(EditAnywhere)
    UStatusEffectData* BeingRevivedStatusEffectData;
    
    UPROPERTY(EditAnywhere)
    FPostProcessSettings PostProcessTransition;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* PostProcessTransitionCurve;
    
    UPROPERTY(EditAnywhere)
    FPostProcessSettings PostProcessBleedOut;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* PostProcessBleedOutCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UWwiseEvent* DownstateStartAudio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UWwiseEvent* DownstateStopAudio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UWwiseEvent* DeathStartAudio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UWwiseEvent* DeathWormholeAudio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UWwiseEvent* InstantDeathWormholeAudio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UWwiseEvent* ResurrectionStartAudio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UWwiseEvent* ResurrectionStopAudio;
    
    UPROPERTY(EditAnywhere)
    UGbxHUDStateData* OverrideHUDState;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* RevivingParticleTemplate;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UParticleSystemComponent* RevivingParticle;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_RevivingParticleActive)
    bool bRevivingParticleActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGbxAttributeData* RevivingTimeRateScalarFormula;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FGameResourcePoolReference BeingRevivedTimeResourcePool;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FGameResourcePoolReference RevivingTimeResourcePool;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AActor*> BeingRevivedByActors;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ActorToRevive)
    AActor* ActorToRevive;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    int32 ActorsRevivingCount;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool bBeingRevivedByPlayer;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_CurrentDownState)
    EDownState CurrentDownState;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_ReviveState)
    EReviveState ReviveState;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool bReviveSuccessful;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_DownStateExitReason)
    FExitDownStateInformation DownStateExitReason;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bCinematicPause;
    
    UPROPERTY(Transient)
    FStatusEffectInstanceReference BeingRevivedEffectRef;
    
    UPROPERTY(BlueprintAssignable)
    FFightForYourLifeEvent OnDownState_StartLocal;
    
    UPROPERTY(BlueprintAssignable)
    FFightForYourLifeEvent OnDownState_StartHost;
    
    UPROPERTY(BlueprintAssignable)
    FOtherFightForYourLifeEvent OnDownState_StartOther;
    
    UPROPERTY(BlueprintAssignable)
    FFightForYourLifeEvent OnDownState_CinematicPauseLocal;
    
    UPROPERTY(BlueprintAssignable)
    FFightForYourLifeEvent OnDownState_CinematicPauseHost;
    
    UPROPERTY(BlueprintAssignable)
    FFightForYourLifeEvent OnDownState_StopLocal;
    
    UPROPERTY(BlueprintAssignable)
    FFightForYourLifeEvent OnDownState_StopHost;
    
    UPROPERTY(BlueprintAssignable)
    FOtherFightForYourLifeEvent OnDownState_StopOther;
    
    UPROPERTY(BlueprintAssignable)
    FFightForYourLifeEvent OnDownState_FinishLocal;
    
    UPROPERTY(BlueprintAssignable)
    FFightForYourLifeEvent OnDownState_FinishHost;
    
    UPROPERTY(BlueprintAssignable)
    FFightForYourLifeEvent OnDownAndExertingState_StartLocal;
    
    UPROPERTY(BlueprintAssignable)
    FFightForYourLifeEvent OnDownAndExertingState_StopLocal;
    
    UPROPERTY(BlueprintAssignable)
    FFightForYourLifeEvent OnBeingRevivedState_StartLocal;
    
    UPROPERTY(BlueprintAssignable)
    FFightForYourLifeEvent OnBeingRevivedState_StartHost;
    
    UPROPERTY(BlueprintAssignable)
    FOtherFightForYourLifeEvent OnBeingRevivedState_StartOther;
    
    UPROPERTY(BlueprintAssignable)
    FFightForYourLifeEvent OnBeingRevivedState_StopLocal;
    
    UPROPERTY(BlueprintAssignable)
    FFightForYourLifeEvent OnBeingRevivedState_StopHost;
    
    UPROPERTY(BlueprintAssignable)
    FOtherFightForYourLifeEvent OnBeingRevivedState_StopOther;
    
    UPROPERTY(BlueprintAssignable)
    FFightForYourLifeEvent OnRevivingState_StartLocal;
    
    UPROPERTY(BlueprintAssignable)
    FFightForYourLifeEventWithActorBeingRevived OnRevivingState_StartHost;
    
    UPROPERTY(BlueprintAssignable)
    FFightForYourLifeWithBoolEvent OnRevivingState_StopLocal;
    
    UPROPERTY(BlueprintAssignable)
    FFightForYourLifeWithBoolEvent OnRevivingState_StopHost;
    
    UPROPERTY(BlueprintAssignable)
    FFightForYourLifeEvent OnGivingUpState_StartLocal;
    
    UPROPERTY(BlueprintAssignable)
    FFightForYourLifeEvent OnGivingUpState_StartHost;
    
    UPROPERTY(BlueprintAssignable)
    FFightForYourLifeEvent OnGivingUpState_StopLocal;
    
    UPROPERTY(BlueprintAssignable)
    FFightForYourLifeEvent OnGivingUpState_StopHost;
    
    UPROPERTY(BlueprintAssignable)
    FFightForYourLifeEvent OnRespawnStart;
    
    UPROPERTY(BlueprintAssignable)
    FTransportEvent OnTransport;
    
    UPROPERTY(Transient)
    float StockDownTimeConsumptionRate;
    
    UPROPERTY(Transient)
    float StockRevivingTimeConsumptionRate;
    
    UPROPERTY(BlueprintAssignable)
    FFightForYourLifeResurrected OnResurrectedAtStation;
    
    UPROPERTY(Export)
    UDamageComponent* CurrentSecondWindTargetComp;
    
    UPROPERTY(EditAnywhere)
    float SecondWindTargetRetainTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    bool bSuppressWidget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RadiusExpansion;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HalfHeightExpansion;
    
    UFightForYourLifeComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdatePreGiveUp();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerGivingUpState_Stop();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerGivingUpState_Start();
    
    UFUNCTION()
    void SecondWindTargetDied(AActor* DamageReceiver, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void RevivingState_Stop(bool IsHealed);
    
    UFUNCTION(BlueprintCallable)
    void RevivingState_Start(AActor* ActorBeingRevived);
    
    UFUNCTION(BlueprintCallable)
    void ResurrectingState_Stop();
    
    UFUNCTION(BlueprintCallable)
    void ResurrectingState_Start();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RestoreAttributeValue(UGbxAttributeData* CurrentValueAttribute, UGbxAttributeData* MaxValueAttribute, UGbxAttributeData* PercentAfterDeathAttribute);
    
    UFUNCTION(BlueprintCallable)
    void ReplenishHealthAndShield(float HealthPercent, float ShieldPercent, UWwiseEvent* WwiseEvent);
    
    UFUNCTION(BlueprintCallable)
    void PlayWwiseEventOnOwner(UWwiseEvent* EventToPlay);
    
    UFUNCTION(BlueprintCallable)
    void PauseDownStateTimer(bool PauseTimer);
    
    UFUNCTION()
    void OnRep_RevivingParticleActive();
    
    UFUNCTION()
    void OnRep_ReviveState(EReviveState OldREviveState);
    
    UFUNCTION()
    void OnRep_DownStateExitReason();
    
    UFUNCTION()
    void OnRep_CurrentDownState(EDownState OldDownState);
    
    UFUNCTION()
    void OnRep_ActorToRevive();
    
    UFUNCTION(BlueprintCallable)
    void NotifyRespawnStart();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void MarkSecondWindTarget(AActor* DamagedActor);
    
    UFUNCTION(BlueprintCallable)
    bool IsReviving();
    
    UFUNCTION(BlueprintCallable)
    bool IsResurrecting();
    
    UFUNCTION(BlueprintCallable)
    bool IsLocalOwner();
    
    UFUNCTION(BlueprintCallable)
    bool IsInDownState();
    
    UFUNCTION(BlueprintPure)
    bool IsCharacterAHealer(AActor* HealingActor) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBeingRevivedByPlayer();
    
    UFUNCTION(BlueprintCallable)
    bool IsBeingRevived();
    
    UFUNCTION(BlueprintCallable)
    void GivingUpState_Stop();
    
    UFUNCTION(BlueprintCallable)
    void GivingUpState_Start();
    
    UFUNCTION(BlueprintCallable)
    float GetReviveTimePercentage();
    
    UFUNCTION(BlueprintCallable)
    float GetDownTimePercentage();
    
    UFUNCTION()
    void DownStateTimeExpired(FGameResourcePoolReference ResourcePool);
    
    UFUNCTION()
    void DownStateCausedDamage(AActor* DamageInstigator, float Damage, const UGbxDamageType* DamageType, const UDamageSource* DamageSource, AActor* DamagedActor, FCausedDamageDetails Details);
    
    UFUNCTION(BlueprintCallable)
    void DownState_Stop(EExitDownStateReason Reason, FText CustomExitMessageText, UHUDNotificationAsset* CustomExitNotification);
    
    UFUNCTION(BlueprintCallable)
    void DownState_Start(bool InstantDeath);
    
    UFUNCTION(BlueprintCallable)
    void DownState_Finish();
    
    UFUNCTION(BlueprintCallable)
    void DownAndExertingState_Stop();
    
    UFUNCTION(BlueprintCallable)
    void DownAndExertingState_Start();
    
    UFUNCTION(BlueprintCallable)
    void DisplayExitNotification();
    
    UFUNCTION()
    void ClearSecondWindTarget();
    
    UFUNCTION(BlueprintCallable)
    void ClearDownStateExitReason();
    
    UFUNCTION()
    void BeingRevivedTimeExpired(FGameResourcePoolReference ResourcePool);
    
    UFUNCTION(BlueprintCallable)
    void BeingRevivedState_Stop(bool IsHealed);
    
    UFUNCTION(BlueprintCallable)
    bool BeingRevivedState_Start(AActor* RevivingActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ActivateSecondWind();
    
};

