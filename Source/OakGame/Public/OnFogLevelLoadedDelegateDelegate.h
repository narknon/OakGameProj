#pragma once
#include "CoreMinimal.h"
#include "OnFogLevelLoadedDelegateDelegate.generated.h"

class UZoneMapData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFogLevelLoadedDelegate, UZoneMapData*, UpdatedZoneMap);

