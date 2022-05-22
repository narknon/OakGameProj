#pragma once
#include "CoreMinimal.h"
#include "EVehicleDeathType.h"
#include "BeforeVehicleDestroyedSignatureDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBeforeVehicleDestroyedSignature, AActor*, DestroyedActor, EVehicleDeathType, DeathType);

