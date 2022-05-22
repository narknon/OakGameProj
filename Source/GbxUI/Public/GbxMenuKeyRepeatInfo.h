#pragma once
#include "CoreMinimal.h"
#include "GbxMenuKeyRepeatInfo.generated.h"

USTRUCT(BlueprintType)
struct GBXUI_API FGbxMenuKeyRepeatInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float InitialButtonRepeatDelay;
    
    UPROPERTY(EditAnywhere)
    float RepeatDelayStart;
    
    UPROPERTY(EditAnywhere)
    float RepeatDelayEnd;
    
    UPROPERTY(EditAnywhere)
    float RepeatDelayDelta;
    
    UPROPERTY(EditAnywhere)
    float HoldToPressDuration;
    
    UPROPERTY(EditAnywhere)
    float HoldToPressDurationLong;
    
    FGbxMenuKeyRepeatInfo();
};

