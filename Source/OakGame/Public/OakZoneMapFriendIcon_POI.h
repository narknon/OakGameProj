#pragma once
#include "CoreMinimal.h"
#include "ZoneMapIconNotificationTempDelegate.h"
#include "OakZoneMapIcon_POI.h"
#include "OakZoneMapFriendIcon_POI.generated.h"

UCLASS()
class OAKGAME_API AOakZoneMapFriendIcon_POI : public AOakZoneMapIcon_POI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FZoneMapIconNotificationTemp OnFriendStatusMessageChange;
    
    AOakZoneMapFriendIcon_POI();
};

