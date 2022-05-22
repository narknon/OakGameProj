#pragma once
#include "CoreMinimal.h"
#include "LandingInfo.h"
#include "LandingDataSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLandingDataSignature, FLandingInfo, LandingInfo, int32, Index);

