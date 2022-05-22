#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "GbxSignificanceEvent.h"
#include "AttributeInitializationData.h"
#include "DamageDataEventDetails.h"
#include "ForceSelection.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AttitudeDamageRules.h"
#include "ScreenParticleInitParams.h"
#include "DamageData.generated.h"

class UDamageAreaType;
class UDamageSource;
class UGbxDamageType;
class UConditionalDamageModifier;
class UMaterialInterface;
class UParticleSystem;
class UWwiseEvent;
class UFeedbackData;
class UImpactData;
class UExplosionData;
class AActor;

UCLASS(Blueprintable, Const)
class GBXGAMESYSTEMCORE_API UDamageData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Damage;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DamageMultiplier;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDamageAreaType* DamageAreaType;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDamageSource> DamageSource;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxDamageType> DamageType;
    
    UPROPERTY(EditAnywhere)
    TArray<UConditionalDamageModifier*> ConditionalDamageModifiers;
    
    UPROPERTY(EditAnywhere)
    bool bApplyUpwardForce;
    
    UPROPERTY(EditAnywhere)
    float UpwardForceScalar;
    
    UPROPERTY(EditAnywhere)
    FForceSelection ImpactForceSelection;
    
    UPROPERTY(EditAnywhere)
    float GoreModifier;
    
    UPROPERTY(EditAnywhere)
    float GibModifier;
    
    UPROPERTY(EditAnywhere)
    bool bImpactForceFallsOff;
    
    UPROPERTY(EditAnywhere)
    FRotator HitRotationOffset;
    
    UPROPERTY(EditAnywhere)
    bool bSimulatedOnClients;
    
    UPROPERTY(EditAnywhere)
    bool bForceNoCrit;
    
    UPROPERTY(EditAnywhere)
    bool bCanBeExecutedAsync;
    
    UPROPERTY(EditAnywhere)
    float MaxAsyncExecutionDeferTime;
    
    UPROPERTY(EditAnywhere)
    FName HitStartSocketOrBone;
    
    UPROPERTY(EditAnywhere)
    bool bBaseTransformComesFromActorTransform;
    
    UPROPERTY(EditAnywhere)
    FVector HitStartOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator HitStartRotationOffset;
    
    UPROPERTY(EditAnywhere)
    FAttitudeDamageRules AttitudeDamageRules;
    
    UPROPERTY(EditAnywhere)
    bool bEnforceAttitudeRulesForHealing;
    
    UPROPERTY(EditAnywhere)
    bool bCanHurtSelf;
    
    UPROPERTY(EditAnywhere)
    bool bCanHurtInstigator;
    
    UPROPERTY(EditAnywhere)
    uint8 bCausesDamageOverTime: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllowMultipleInstances: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bHitEachTargetOnlyOnce: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCacheSourceLocationAndRotation: 1;
    
    UPROPERTY(EditAnywhere)
    float MaxDamageDuration;
    
    UPROPERTY(EditAnywhere)
    float DamageInterval;
    
    UPROPERTY(EditAnywhere)
    bool bCancelDamageOverTimeWhenOwnerDies;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* DamageOverTimeParticleSystem;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* DamageOverTimeAudioEventStart;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* DamageOverTimeAudioEventStop;
    
    UPROPERTY(EditAnywhere)
    UFeedbackData* InstigatorFeedback;
    
    UPROPERTY(EditAnywhere)
    TArray<UFeedbackData*> TargetFeedbacks;
    
    UPROPERTY(EditAnywhere)
    UImpactData* ImpactData;
    
    UPROPERTY(EditAnywhere)
    UExplosionData* ExplosionData;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* DefaultExplosionParticles;
    
    UPROPERTY(EditAnywhere)
    FGbxSignificanceEvent SignificanceEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* DefaultAudioEvent;
    
    UPROPERTY(EditAnywhere)
    UImpactData* DefaultExplosionImpactData;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* DefaultExplosionDecalOverride;
    
    UPROPERTY(EditAnywhere)
    bool bUseExplosionSizeForDecal;
    
    UPROPERTY(EditAnywhere)
    bool bOnlyDrawParticleIfFacingDamage;
    
    UPROPERTY(EditAnywhere)
    FScreenParticleInitParams ScreenParticleParams;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* PlayerAudioEvent;
    
    UDamageData();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnKilledEnemy(AActor* DamageInstigator, AActor* DamageCauser, AActor* DamageTarget, const FDamageDataEventDetails& Details) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHitFriendly(AActor* DamageInstigator, AActor* DamageCauser, AActor* DamageTarget, const FDamageDataEventDetails& Details) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHitEnemy(AActor* DamageInstigator, AActor* DamageCauser, AActor* DamageTarget, const FDamageDataEventDetails& Details) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHitAnyAttitude(AActor* DamageInstigator, AActor* DamageCauser, AActor* DamageTarget, const FDamageDataEventDetails& Details) const;
    
};

