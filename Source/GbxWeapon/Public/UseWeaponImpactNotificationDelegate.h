#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UseWeaponImpactNotificationDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FUseWeaponImpactNotification, AActor*, HitActor, FVector, HitLocation);

