#pragma once
#include "CoreMinimal.h"
#include "LightBeamCallbackEventDelegate.generated.h"

class ULightBeam;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FLightBeamCallbackEvent, ULightBeam*, Beam);

