#pragma once
#include "CoreMinimal.h"
#include "EFriendEventPriority.h"
#include "Engine/DataTable.h"
#include "EFriendEventType.h"
#include "FriendEventDataEntry.generated.h"

USTRUCT()
struct FFriendEventDataEntry : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EFriendEventType FriendEventType;
    
    UPROPERTY(EditAnywhere)
    EFriendEventPriority Priority;
    
    UPROPERTY(EditAnywhere)
    uint32 Ordinal;
    
    UPROPERTY(EditAnywhere)
    bool ContainsSpoiler;
    
    UPROPERTY(EditAnywhere)
    bool BroadcastToSingleFriend;
    
    UPROPERTY(EditAnywhere)
    bool DisplayNotificationOnFriendHUD;
    
    UPROPERTY(EditAnywhere)
    bool bAlwaysShowNotification;
    
    UPROPERTY(EditAnywhere)
    bool DisplayEventOnTimeline;
    
    UPROPERTY(EditAnywhere)
    FText EventTitleText;
    
    UPROPERTY(EditAnywhere)
    FText EventText;
    
    OAKGAME_API FFriendEventDataEntry();
};

