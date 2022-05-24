#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELightBeamQueryActorType.h"
#include "Engine/NetSerialization.h"
#include "LightBeamAttachment.h"
#include "ClientLightBeamState.h"
#include "EWeaponShotModifierType.h"
#include "Engine/EngineTypes.h"
#include "LightBeamImpactFXTrackingData.h"
#include "LightBeamInitializationData.h"
#include "LightBeam.generated.h"

class ULightBeam;
class ULightBeamData;
class UParticleSystemComponent;
class AActor;
class APawn;
class UGbxDamageType;

UCLASS(BlueprintType, Within=LightBeamManager)
class GBXWEAPON_API ULightBeam : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    ULightBeamData* Data;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UParticleSystemComponent* Component;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UParticleSystemComponent* AltViewComponent;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    float DamageInterval;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LockOnContactTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LockOnBreakRadius;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LockOnBreakAngle;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ClientState)
    FClientLightBeamState ClientState;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ModifierType)
    EWeaponShotModifierType ModifierType;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ModifierValue)
    float ModifierValue;
    
    UPROPERTY(Replicated, Transient)
    FVector_NetQuantize10 ServerSourcePoint;
    
    UPROPERTY(Replicated, Transient)
    FVector_NetQuantize10 ServerTargetPoint;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float StartTime;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> LastDamagedActor;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> DamagedActors;
    
    UPROPERTY(Transient)
    float LastDamagedActorContinuousContact;
    
    UPROPERTY(Transient)
    FHitResult LastImpact;
    
    UPROPERTY(Transient)
    ULightBeam* ParentBeam;
    
    UPROPERTY(Transient)
    ULightBeam* RootParentBeam;
    
    UPROPERTY(Transient)
    TArray<ULightBeam*> ChildBeams;
    
    UPROPERTY(Transient)
    TArray<FLightBeamImpactFXTrackingData> TrackingImpactEffects;
    
public:
    ULightBeam();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetTargetSocket(FName Socket);
    
protected:
    UFUNCTION()
    void OnTrackedImpactParticleSystemFinished(UParticleSystemComponent* PSC);
    
    UFUNCTION()
    void OnRep_ModifierValue();
    
    UFUNCTION()
    void OnRep_ModifierType();
    
    UFUNCTION()
    void OnRep_ClientState();
    
public:
    UFUNCTION(BlueprintCallable)
    void LockOntoTarget(const FLightBeamAttachment& Target);
    
    UFUNCTION(BlueprintPure)
    void InitChildData(FLightBeamInitializationData& InitData) const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetTargetActor() const;
    
    UFUNCTION(BlueprintPure)
    FLightBeamAttachment GetTarget() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetSourceActor() const;
    
    UFUNCTION(BlueprintPure)
    FLightBeamAttachment GetSource() const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetInstigator() const;
    
    UFUNCTION(BlueprintPure)
    float GetImpactForce() const;
    
    UFUNCTION(BlueprintPure)
    UGbxDamageType* GetDamageType() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetDamageCauser() const;
    
    UFUNCTION(BlueprintPure)
    float GetDamage() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetAssociatedActor(ELightBeamQueryActorType ActorType) const;
    
};

