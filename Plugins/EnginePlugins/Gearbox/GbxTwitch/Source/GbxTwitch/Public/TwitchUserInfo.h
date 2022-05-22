#pragma once
#include "CoreMinimal.h"
#include "TwitchUserInfo.generated.h"

USTRUCT(BlueprintType)
struct GBXTWITCH_API FTwitchUserInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString ID;
    
    UPROPERTY(BlueprintReadOnly)
    FString Login;
    
    UPROPERTY(BlueprintReadOnly)
    FString DisplayName;
    
    UPROPERTY(BlueprintReadOnly)
    FString Type;
    
    UPROPERTY(BlueprintReadOnly)
    FString Description;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ViewCount;
    
    FTwitchUserInfo();
};

