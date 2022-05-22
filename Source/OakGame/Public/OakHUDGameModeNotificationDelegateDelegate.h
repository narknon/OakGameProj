#pragma once
#include "CoreMinimal.h"
#include "OakHUDGameModeNotificationDelegateDelegate.generated.h"

class UHUDNotificationAsset;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FOakHUDGameModeNotificationDelegate, UHUDNotificationAsset*, Asset, const uint8, RaidNotificationId, const FText&, MessageText, int32, NotificationPriority, UClass*, TrackedNotificationTarget, bool, bMakeActiveImmediately, bool, bAbortIfNotImmediatelyActive);

