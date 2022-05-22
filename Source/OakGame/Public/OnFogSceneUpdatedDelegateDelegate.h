#pragma once
#include "CoreMinimal.h"
#include "OnFogSceneUpdatedDelegateDelegate.generated.h"

class UZoneMapData;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnFogSceneUpdatedDelegate, UZoneMapData*, UpdatedZoneMap);

