#pragma once
#include "CoreMinimal.h"
#include "EElementalInteractionMode.h"
#include "ElementalInteractionStartedEventDelegate.h"
#include "SupportedElementalInteractionData.h"
#include "Components/ActorComponent.h"
#include "InspectionInfoProvider.h"
#include "Engine/NetSerialization.h"
#include "AttitudeDamageRules.h"
#include "ElementalInteractionDamageOverlapData.h"
#include "ElementalDamageTriggeredInteractionData.h"
#include "Engine/EngineTypes.h"
#include "EElementalEffectSizeComputationType.h"
#include "ElementalInteractionComponent.generated.h"

class UTeam;
class AElementalInteractionManager;
class UElementalInteractionData;
class AController;
class UElementalInteractionComponent;
class UPrimitiveComponent;
class UWwiseAudioComponent;
class AActor;
class UElementalInteractionConfigurationData;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UElementalInteractionComponent : public UActorComponent, public IInspectionInfoProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EElementalInteractionMode InteractionMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIgnoreDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UElementalInteractionData* NaturalState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSupportedElementalInteractionData> SupportedStates;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UElementalInteractionData* InitialState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsInitiallySource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InitialSourceDuration;
    
    UPROPERTY(BlueprintAssignable)
    FElementalInteractionStartedEvent OnElementalInteractionStarted;
    
    UPROPERTY(Transient)
    AElementalInteractionManager* ElementalInteractionManager;
    
    UPROPERTY(Transient)
    AController* InstigatorController;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_CurrentState)
    UElementalInteractionData* CurrentState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsSource;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_PendingState)
    UElementalInteractionData* PendingState;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UElementalInteractionComponent* ClosestSourceComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_PendingStateData)
    FVector_NetQuantize PendingStateHitLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_PendingStateData)
    float TransitionPercent;
    
    UPROPERTY(EditAnywhere)
    bool bUseDamagePrimitives;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DamagePrimitiveNames;
    
    UPROPERTY(Export, Transient)
    TArray<UPrimitiveComponent*> DamagePrimitives;
    
    UPROPERTY(EditAnywhere)
    bool bUseInteractionPrimitives;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> InteractionPrimitiveNames;
    
    UPROPERTY(Export, Transient)
    TArray<UPrimitiveComponent*> InteractionPrimitives;
    
    UPROPERTY(EditDefaultsOnly)
    bool bInheritTeamFromOwner;
    
    UPROPERTY(EditDefaultsOnly)
    UTeam* Team;
    
    UPROPERTY(EditDefaultsOnly)
    FAttitudeDamageRules AttitudeDamageRules;
    
    UPROPERTY(EditDefaultsOnly)
    bool bForceDamageToPlayerControlled;
    
    UPROPERTY(Transient)
    TMap<AActor*, FElementalInteractionDamageOverlapData> DamageOverlaps;
    
    UPROPERTY(Export, Transient)
    TArray<UElementalInteractionComponent*> IgnoredElementalInteractionComponents;
    
    UPROPERTY(Transient)
    TMap<UElementalInteractionComponent*, int32> OtherElementalInteractionComponents;
    
    UPROPERTY(Transient)
    FElementalDamageTriggeredInteractionData DamageTriggeredInteraction;
    
    UPROPERTY(EditAnywhere)
    bool bHasElementalEffects;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectPrimitiveNames;
    
    UPROPERTY(Export, Transient)
    TArray<UPrimitiveComponent*> EffectPrimitives;
    
    UPROPERTY(Export, Transient)
    UWwiseAudioComponent* EffectAudioComponent;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectSizePrimitiveNames;
    
    UPROPERTY(EditAnywhere)
    bool bCustomEffectSize;
    
    UPROPERTY(EditAnywhere)
    float EffectSize;
    
public:
    UElementalInteractionComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetElementalInteractionMode(EElementalInteractionMode NewInteractionMode);
    
    UFUNCTION(BlueprintCallable)
    void SetElementalInteractionConfiguration(const UElementalInteractionConfigurationData* ElementalInteractionConfigurationData);
    
private:
    UFUNCTION()
    void OnRep_PendingStateData();
    
    UFUNCTION()
    void OnRep_PendingState();
    
    UFUNCTION()
    void OnRep_CurrentState();
    
    UFUNCTION()
    void OnEndInteractionOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnEndDamageOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBeginInteractionOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void OnBeginDamageOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void NotifySourceDurationEnded();
    
    UFUNCTION(BlueprintCallable)
    void K2_BeginInteraction(UElementalInteractionData* NewState, bool bInIsSource, float SourceDuration, AController* NewInstigatorController);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInElementalState(UElementalInteractionData* State) const;
    
    UFUNCTION(BlueprintCallable)
    void ComputeEffectSize(EElementalEffectSizeComputationType EffectSizeComputationType, const float EffectSizeScale);
    
    
    // Fix for true pure virtual functions not being implemented
};

