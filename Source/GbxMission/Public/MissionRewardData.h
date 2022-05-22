#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "MissionRewardData.generated.h"

UCLASS(Abstract, EditInlineNew)
class GBXMISSION_API UMissionRewardData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UMissionRewardData();
};

