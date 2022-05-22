#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BulletNotificationDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FBulletNotification, AActor*, SelfVolume, AActor*, Instigator, FVector, HitLocation, FVector, HitDirection);

