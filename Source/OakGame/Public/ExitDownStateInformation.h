#pragma once
#include "CoreMinimal.h"
#include "EExitDownStateReason.h"
#include "ExitDownStateInformation.generated.h"

class UHUDNotificationAsset;

USTRUCT(BlueprintType)
struct FExitDownStateInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EExitDownStateReason ExitReason;
    
    UPROPERTY(BlueprintReadOnly)
    UHUDNotificationAsset* CustomExitNotification;
    
    UPROPERTY(BlueprintReadOnly)
    FText CustomExitMessageText;
    
    OAKGAME_API FExitDownStateInformation();
};

