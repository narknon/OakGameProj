#pragma once
#include "CoreMinimal.h"
#include "TwitchStreamInfo.generated.h"

USTRUCT(BlueprintType)
struct GBXTWITCH_API FTwitchStreamInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString StreamID;
    
    UPROPERTY(BlueprintReadOnly)
    FString UserID;
    
    UPROPERTY(BlueprintReadOnly)
    FString UserDisplayName;
    
    UPROPERTY(BlueprintReadOnly)
    FString UserLogin;
    
    UPROPERTY(BlueprintReadOnly)
    FString GameID;
    
    UPROPERTY(BlueprintReadOnly)
    FString GameName;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsLive;
    
    UPROPERTY(BlueprintReadOnly)
    FString Title;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ViewerCount;
    
    UPROPERTY(BlueprintReadOnly)
    FString StartedAt;
    
    UPROPERTY(BlueprintReadOnly)
    FString Language;
    
    FTwitchStreamInfo();
};

