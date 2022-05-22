#pragma once
#include "CoreMinimal.h"
#include "PollActionInfo.generated.h"

class UStreamingPoolActionInfo;

USTRUCT(BlueprintType)
struct FPollActionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UStreamingPoolActionInfo* PollAction;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UStreamingPoolActionInfo> PollActionClass;
    
    UPROPERTY(EditAnywhere)
    FText SelectionText;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
    UPROPERTY(EditAnywhere)
    int32 MaxUsagePerEvent;
    
    UPROPERTY(Transient)
    int32 ActionID;
    
    UPROPERTY(Transient)
    int32 NbTimeUsedInEvent;
    
    UPROPERTY(Transient)
    float LastSelectedValue;
    
    UPROPERTY(Transient)
    int32 VoteCount;
    
    OAKGAME_API FPollActionInfo();
};

