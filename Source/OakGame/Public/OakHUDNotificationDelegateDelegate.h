#pragma once
#include "CoreMinimal.h"
#include "OakHUDNotificationDelegateDelegate.generated.h"

class UHUDNotificationAsset;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOakHUDNotificationDelegate, UHUDNotificationAsset*, Asset, const FText&, MessageText, int32, NotificationPriority, UClass*, TrackedNotificationTarget, bool, bMakeActiveImmediately);

