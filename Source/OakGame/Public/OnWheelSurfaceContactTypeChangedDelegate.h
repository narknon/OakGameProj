#pragma once
#include "CoreMinimal.h"
#include "OnWheelSurfaceContactTypeChangedDelegate.generated.h"

class UPhysicalMaterial;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnWheelSurfaceContactTypeChanged, FName, WheelBoneName, UPhysicalMaterial*, PhysicalMaterialNew, UPhysicalMaterial*, PhysicalMaterialOld);

