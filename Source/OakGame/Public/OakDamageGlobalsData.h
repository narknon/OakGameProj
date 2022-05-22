#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DamageGlobalsData.h"
#include "PlayerDifficultyBalanceInfo.h"
#include "AttributeInitializationData.h"
#include "StatusEffectApplicationDamageDefaultSettings.h"
#include "NumPlayersDamageBalanceInfo.h"
#include "DamageDisplayInfo.h"
#include "IncomingDamageDisplayInfo.h"
#include "UObject/NoExportTypes.h"
#include "IncomingDamagePresentationSource.h"
#include "IncomingDamagePresentationGlobalInfo.h"
#include "OakDamageGlobalsData.generated.h"

class UOakDamageType;
class UDamageSource;
class UGbxAttributeData;
class UWwiseEvent;
class UWwiseRtpc;
class UCurveFloat;
class UParticleSystem;
class UHealthTypeData;

UCLASS()
class UOakDamageGlobalsData : public UDamageGlobalsData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TSubclassOf<UDamageSource> CrushDamageSource;
    
    UPROPERTY(Transient)
    UGbxAttributeData* SkillDamageSourceInstigatorMultiplier;
    
public:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData LevelSyncPlayerReceivedDamageCalc;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData LevelSyncPlayerInstigatedDamageCalc;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData LevelSyncPlayerVersusPlayerDamageCalc;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FNumPlayersDamageBalanceInfo> NumPlayersBalanceInfo;
    
    UPROPERTY(EditAnywhere)
    FPlayerDifficultyBalanceInfo DifficultyBalanceInfos[2];
    
    UPROPERTY(EditAnywhere)
    TArray<FStatusEffectApplicationDamageDefaultSettings> StatusEffectApplicationDefaults;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOakDamageType> ImpactElementalDamageTypes[6];
    
    UPROPERTY(EditAnywhere)
    float RadiationDamageScalePercent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* DamageReceivedSound;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* DamageReceivedShieldSound;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* DamageReceivedCriticalSound;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* DamageDealtSound;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* DamageDealtCriticalSound;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* DamageDealtImmuneSound;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* DamageDealtShieldSound;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* HeartbeatWwiseEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* HeartbeatIntervalInSecondsRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* HeartbeatDelayInSecondsRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* HeartbeatVolumeRtpc;
    
    UPROPERTY(EditAnywhere)
    float LowHealthHeartBPM;
    
    UPROPERTY(EditAnywhere)
    float VeryLowHealthBPM;
    
    UPROPERTY(EditAnywhere)
    float VeryLowHealthTransitionValue;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* HealthPercentRtpc;
    
    UPROPERTY(EditAnywhere)
    float HealthPercentRtpcTransitionDuration;
    
    UPROPERTY(EditAnywhere)
    FDamageDisplayInfo DamageDisplayInfo;
    
    UPROPERTY(EditAnywhere)
    FIncomingDamageDisplayInfo IncomingDamageDisplayInfo;
    
    UPROPERTY(EditAnywhere)
    float ResistDamageReductionFeedbackThreshold;
    
    UPROPERTY(EditAnywhere)
    float MinTimeBetweenResistFeedbacks;
    
    UPROPERTY(EditAnywhere)
    float DamageDealtFlashDuration;
    
    UPROPERTY(EditAnywhere)
    FLinearColor DamageDealtHealthFlash;
    
    UPROPERTY(EditAnywhere)
    FLinearColor DamageDealtCriticalFlash;
    
    UPROPERTY(EditAnywhere)
    FLinearColor DamageDealtShieldFlash;
    
    UPROPERTY(EditAnywhere)
    FName DamageDealtFlashParamName;
    
    UPROPERTY(EditAnywhere)
    FName DamageDealtFlashColorParamName;
    
    UPROPERTY(EditAnywhere)
    float LowHealthEffectBlendSpeed;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* LowHealthEffectCurve;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* LowHealthParticle;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* RevivePercentToLowHealthEffectCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* RevivePercentToCreepingDeathEffectCurve;
    
    UPROPERTY(EditAnywhere)
    float CreepingDeathSecondWindBlendSpeed;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* CreepingDeathSecondWindBlendCurve;
    
    UPROPERTY(EditAnywhere)
    float CreepingDeathRevivingBlendSpeed;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* CreepingDeathRevivingBlendCurve;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* CreepingDeathParticle;
    
    UPROPERTY(EditAnywhere)
    float ShieldHitDuration;
    
    UPROPERTY(EditAnywhere)
    float MinTimeBetweenShieldHits;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* ShieldHitCurve;
    
    UPROPERTY(EditAnywhere)
    float ShieldBreakDuration;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* ShieldBreakAmountCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* ShieldBreakIntensityCurve;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDamageSource> ElementalInteractionDamageSource;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData SplatDamage;
    
    UPROPERTY(EditAnywhere)
    float RecentGoreDamageTime;
    
    UPROPERTY(EditAnywhere)
    float IncomingDamagePresentationQueueDuration;
    
    UPROPERTY(EditAnywhere)
    TArray<FIncomingDamagePresentationSource> IncomingDamagePresentations;
    
    UPROPERTY(EditAnywhere)
    FIncomingDamagePresentationGlobalInfo IncomingPresentationGlobalInfo;
    
    UPROPERTY(EditAnywhere)
    uint32 NumProjectilesForQuickPop;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UHealthTypeData> ArmorHealthType;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UHealthTypeData> ShieldHealthType;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UHealthTypeData> FleshHealthType;
    
    UOakDamageGlobalsData();
};

