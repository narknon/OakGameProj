#pragma once
#include "CoreMinimal.h"
#include "TwitchExtensionInfo.generated.h"

USTRUCT(BlueprintType)
struct GBXTWITCH_API FTwitchExtensionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString ID;
    
    UPROPERTY(BlueprintReadOnly)
    FString Version;
    
    UPROPERTY(BlueprintReadOnly)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly)
    bool bCanActivate;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FString> Type;
    
    UPROPERTY(BlueprintReadOnly)
    bool bActive;
    
    FTwitchExtensionInfo();
};

