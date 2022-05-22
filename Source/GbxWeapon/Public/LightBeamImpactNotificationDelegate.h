#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LightBeamImpactNotificationDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FLightBeamImpactNotification, AActor*, HitActor, FVector, HitLocation);

