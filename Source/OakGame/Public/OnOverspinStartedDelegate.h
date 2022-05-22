#pragma once
#include "CoreMinimal.h"
#include "OnOverspinStartedDelegate.generated.h"

class UPhysicalMaterial;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOverspinStarted, UPhysicalMaterial*, PhysicalMat);

