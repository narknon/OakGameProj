#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "DeathCircleStageData.h"
#include "AttributeInitializationData.h"
#include "EOakAchievements.h"
#include "GearUpData.generated.h"

class UDamageData;
class UWwiseRtpc;
class UMaterialInterface;
class UParticleSystem;
class UStaticMesh;
class UPrimitiveComponent;
class UGbxCondition;
class UMission;
class UWwiseEvent;
class UStatusEffectData;
class UDownloadablePackageData;
class UGameStatData;

UCLASS()
class OAKGAME_API UGearUpData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FDeathCircleStageData> DeathCircleStages;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DeathCircleHeight;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* DeathCircleMesh;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* DeathCircleMaterial;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UPrimitiveComponent> DeathCircleWaypointClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UPrimitiveComponent> NextDeathCircleWaypointClass;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* DeathCircleScreenParticle;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ScreenParticleMaxDistance;
    
    UPROPERTY(EditAnywhere)
    FName ScreenParticleIntensityParameter;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* FogParticle;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData FogParticleMaxDistance;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDamageData> OutOfCircleDamageData;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* DeathCircleWaypointCondition;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UMission> Mission;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* WallAudioLoopStart;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* DistanceToWallRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* WallOrientationXRtpc;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* WallOrientationYRtpc;
    
    UPROPERTY(EditAnywhere)
    float AudioTransitionToOmni;
    
    UPROPERTY(EditAnywhere)
    float AudioFadeTimeOnExit;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* PlayerEnteredStormAudioEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* PlayerExitedStormAudioEvent;
    
    UPROPERTY(EditAnywhere)
    UStatusEffectData* EnemyStatusEffect;
    
    UPROPERTY(EditAnywhere)
    UStatusEffectData* PlayerStatusEffect;
    
    UPROPERTY(EditAnywhere)
    UStatusEffectData* ModeStatusEffect;
    
    UPROPERTY(EditAnywhere)
    int32 AllowableBankOverfill;
    
    UPROPERTY(EditAnywhere)
    UDownloadablePackageData* DlcPackageData;
    
    UPROPERTY(EditAnywhere)
    UGameStatData* ExtractedGearStat;
    
    UPROPERTY(EditAnywhere)
    EOakAchievements ExtractedGearAchievement;
    
    UPROPERTY(EditAnywhere)
    uint8 ExtractedGearAchievementCount;
    
    UGearUpData();
    UFUNCTION()
    UClass* GetRequiredInterface();
    
    UFUNCTION()
    bool EnabledConditionRequiresNativeClass();
    
};

