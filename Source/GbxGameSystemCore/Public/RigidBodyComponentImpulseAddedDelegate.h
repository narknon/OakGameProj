#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RigidBodyComponentImpulseAddedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRigidBodyComponentImpulseAdded, const FVector&, Impulse, const FVector&, Location);

