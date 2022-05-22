#pragma once
#include "CoreMinimal.h"
#include "OakBaseMissionRewardData.h"
#include "OakMissionRewardData.generated.h"

class URegionData;
class UInventorySlotData;

UCLASS(EditInlineNew)
class OAKGAME_API UOakMissionRewardData : public UOakBaseMissionRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<URegionData> REGION;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UInventorySlotData> EquipSlotToUnlock;
    
    UPROPERTY(EditAnywhere)
    int32 AssociatedCompletionAchievementId;
    
    UOakMissionRewardData();
};

