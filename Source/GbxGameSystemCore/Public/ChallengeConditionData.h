#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "ChallengeConditionData.generated.h"

class UGameStatData;

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UChallengeConditionData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY(EditAnywhere)
    UGameStatData* StatId;
    
    UPROPERTY(EditAnywhere)
    int64 TargetValue;
    
    UChallengeConditionData();
};

