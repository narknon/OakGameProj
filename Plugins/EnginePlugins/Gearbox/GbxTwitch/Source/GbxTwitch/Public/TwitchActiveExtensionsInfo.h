#pragma once
#include "CoreMinimal.h"
#include "TwitchExtensionInfo.h"
#include "TwitchActiveExtensionsInfo.generated.h"

USTRUCT(BlueprintType)
struct GBXTWITCH_API FTwitchActiveExtensionsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<FTwitchExtensionInfo> PanelExtensions;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FTwitchExtensionInfo> OverlayExtensions;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FTwitchExtensionInfo> ComponentExtensions;
    
    FTwitchActiveExtensionsInfo();
};

