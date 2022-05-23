#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "GbxChildActorComponent.h"
#include "GbxBlackboardKeySelector.h"
#include "UObject/NoExportTypes.h"
#include "GbxTriggerProperty.h"
#include "UObject/NoExportTypes.h"
#include "EHeldActorPreset.h"
#include "EOakElementalType.h"
#include "AIHeldActorComponent.generated.h"

class UBlackboardComponent;
class AActor;
class UHitReactionTag;
class UTargetingComponent;
class UAIHeldActorInterface;
class IAIHeldActorInterface;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UAIHeldActorComponent : public UGbxChildActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector BlackboardKeyEquipped;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector BlackboardKeyRequesting;
    
    UPROPERTY(GlobalConfig)
    FSoftObjectPath DefaultDeathTagName;
    
    UPROPERTY(EditAnywhere)
    UHitReactionTag* DeathTag;
    
    UPROPERTY(EditAnywhere)
    bool bAutofillDeathTag;
    
    UPROPERTY(EditAnywhere)
    bool bDisableCollisionWhileHeld;
    
    UPROPERTY(EditAnywhere)
    FName DroppedCollisionProfile;
    
    UPROPERTY(EditAnywhere)
    bool bChangeCollisionProfileOnDrop;
    
    UPROPERTY(EditAnywhere)
    FGbxTriggerProperty PresetTrigger;
    
    UPROPERTY(Transient)
    bool bInitialized;
    
    UPROPERTY(Transient)
    AActor* HeldActor;
    
    UPROPERTY(Export, Transient)
    UTargetingComponent* TargetingComponent;
    
    UPROPERTY(Export, Transient)
    UBlackboardComponent* BlackboardComponent;
    
    UPROPERTY(Transient)
    TScriptInterface<IAIHeldActorInterface> HeldActorInterface;
    
    UPROPERTY(Transient)
    AActor* ClientDisabledCollisionActor;
    
public:
    UAIHeldActorComponent();
    UFUNCTION(BlueprintCallable)
    void ThrowHeldActorAtTarget(float ThrowSpeed, float ThrowAnglePercent, FName TargetSocket, FVector TargetOffset, FRotator AngleOffset, float MaxPrediction, bool bRequestNewHeldActor, bool bSpawnIfDoesNotExist);
    
    UFUNCTION(BlueprintCallable)
    void ThrowHeldActorAtLocation(FVector ThrowAtLocation, float ThrowSpeed, float ThrowAnglePercent, bool bRequestNewHeldActor, bool bSpawnIfDoesNotExist);
    
    UFUNCTION(BlueprintCallable)
    void ThrowHeldActorAtActor(AActor* ThrowAtActor, float ThrowSpeed, float ThrowAnglePercent, FName ActorSocket, FVector ActorOffset, FRotator AngleOffset, float MaxPrediction, bool bRequestNewHeldActor, bool bSpawnIfDoesNotExist);
    
    UFUNCTION(BlueprintCallable)
    void SpawnHeldActor();
    
    UFUNCTION(BlueprintCallable)
    void SetNewHeldActorClass(TSubclassOf<AActor> NewHeldActorClass);
    
    UFUNCTION(BlueprintCallable)
    void PrimeHeldActor();
    
private:
    UFUNCTION()
    void OnTriggerPreset(EHeldActorPreset Preset);
    
    UFUNCTION()
    void OnHeldActorSpawned(AActor* NewHeldActor);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnHeldActorNativeDrop(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    EOakElementalType GetHeldActorElementalType() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetHeldActor() const;
    
    UFUNCTION(BlueprintCallable)
    void DropHeldActor(bool bRequestNewHeldActor, AActor* InstigatorOverride);
    
    UFUNCTION(BlueprintCallable)
    void DetonateHeldActor(bool bKillSelf, bool bRequestNewHeldActor, AActor* InstigatorOverride);
    
};

