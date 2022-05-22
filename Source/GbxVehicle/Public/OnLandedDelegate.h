#pragma once
#include "CoreMinimal.h"
#include "OnLandedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnLanded, float, TimeSpentInAir, float, LandAngle, int32, NumWheelsOnGround, bool, bAllWheelsLanded);

