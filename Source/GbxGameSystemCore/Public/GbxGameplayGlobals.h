#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "DefaultExplosionSettings.h"
#include "GameplayTagContainer.h"
#include "AttributeInitializationData.h"
#include "MantleGlobalData.h"
#include "GbxGameplayGlobals.generated.h"

class UImpactData;
class UUsableTypeDefinition;
class UChallengeList;
class UHealthTypeData;
class UEnvQuery;
class UGlobalAIData;
class UWwiseEvent;
class UDataTable;
class UGameStatData;
class UGameStatList;

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxGameplayGlobals : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UHealthTypeData* ShieldHealthType;
    
    UPROPERTY(EditAnywhere)
    UEnvQuery* ProjectileReflectionQuery;
    
    UPROPERTY(EditAnywhere)
    float ProjectileReflectionSpeedScale;
    
    UPROPERTY(EditAnywhere)
    float ProjectileHitRegionRicochetSpeedScale;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ProjectileReflectionInaccuracy;
    
    UPROPERTY(EditAnywhere)
    UImpactData* ProjectileReflectionImpact;
    
    UPROPERTY(EditAnywhere)
    UImpactData* ProjectileSelfReflectionImpact;
    
    UPROPERTY(EditAnywhere)
    UUsableTypeDefinition* DefaultUseDefinition;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData InventoryScoreValueInitializer;
    
    UPROPERTY(EditAnywhere)
    UGlobalAIData* GlobalAIData;
    
    UPROPERTY(EditDefaultsOnly)
    float ExplosionWindRadiusModifier;
    
    UPROPERTY(EditDefaultsOnly)
    float MinExplosionRadiusToTriggerRadialBlur;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FDefaultExplosionSettings> DefaultExplosionSettings;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* ShortDurationTinnitusEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* MediumDurationTinnitusEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* LongDurationTinnitusEvent;
    
    UPROPERTY(EditDefaultsOnly)
    float ExplosionSoundStackingMaxDistanceSquared;
    
    UPROPERTY(EditDefaultsOnly)
    float ExplosionSoundStackingPreventionDelay;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* DefaultFeedbackTable;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, UGameStatData*> KillStatMap;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UGameStatList*> GameStatLists;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UChallengeList*> GameChallengeLists;
    
    UPROPERTY(EditAnywhere)
    FMantleGlobalData MantleGlobals;
    
public:
    UGbxGameplayGlobals();
};

