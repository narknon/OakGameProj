#pragma once
#include "CoreMinimal.h"
#include "EOakMusicLayer.h"
#include "GbxDataAsset.h"
#include "Curves/CurveFloat.h"
#include "EOakMusicPart.h"
#include "EOakMusicSection.h"
#include "MusicLayerInfo.h"
#include "MusicInterestASR.h"
#include "OakMusicSystemConfiguration.generated.h"

class UWwiseRtpc;
class UWwiseState;
class UInventoryRarityData;

UCLASS(BlueprintType)
class UOakMusicSystemConfiguration : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EOakMusicSection, UWwiseState*> MusicSectionWwiseStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EOakMusicPart, UWwiseState*> MusicPartWwiseStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseRtpc* ThreatLevelRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseRtpc* InterestLevelRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EOakMusicLayer, FMusicLayerInfo> MusicLayerInfo;
    
    UPROPERTY(EditAnywhere)
    float ParamSmoothingAttackCoeff;
    
    UPROPERTY(EditAnywhere)
    float ParamSmoothingDecayCoeff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ThreatSummingDistance;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ThreatScaleByLevelDifference;
    
    UPROPERTY(EditAnywhere)
    float StaleThreatDuration;
    
    UPROPERTY(EditAnywhere)
    float MaxInactiveDuration;
    
    UPROPERTY(EditAnywhere)
    float InterestLevelLFODurationInSeconds;
    
    UPROPERTY(EditAnywhere)
    float InterestLevelLFOAmplitude;
    
    UPROPERTY(EditAnywhere)
    TMap<UInventoryRarityData*, FMusicInterestASR> LootInterestModifierByRarity;
    
    UPROPERTY(EditAnywhere)
    FMusicInterestASR InterestBumpOnCombatIntensify;
    
    UPROPERTY(EditAnywhere)
    FMusicInterestASR InterestBumpOnNewMapArea;
    
    UOakMusicSystemConfiguration();
};

