#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "MissionRewardData.h"
#include "OakBaseMissionRewardData.generated.h"

class UItemPoolData;
class UInventoryCategoryData;

UCLASS(Abstract, EditInlineNew)
class OAKGAME_API UOakBaseMissionRewardData : public UMissionRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UInventoryCategoryData> CurrencyType;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData CurrencyReward;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIgnoreCreditsRewardFormula;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData ExperienceReward;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UItemPoolData> ItemPoolReward;
    
    UOakBaseMissionRewardData();
};

