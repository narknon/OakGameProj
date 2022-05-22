#pragma once
#include "CoreMinimal.h"
#include "GFxNotificationQueueListItem.generated.h"

class UGFxDisplayedNotificationWidget;
class UHUDNotificationAsset;

USTRUCT(BlueprintType)
struct FGFxNotificationQueueListItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    UHUDNotificationAsset* AssetData;
    
    UPROPERTY()
    UGFxDisplayedNotificationWidget* ActiveWidgetContent;
    
    UPROPERTY()
    int32 Priority;
    
    UPROPERTY()
    FText MessageText;
    
    UPROPERTY(Transient)
    FName SpawnAudioOverride;
    
    UPROPERTY(Transient)
    FName DespawnAudioOverride;
    
    UPROPERTY()
    float TimeoutTimeRemaining;
    
    UPROPERTY()
    bool bCurrentlyDisplayed;
    
    UPROPERTY()
    uint8 NotificationId;
    
    OAKGAME_API FGFxNotificationQueueListItem();
};

