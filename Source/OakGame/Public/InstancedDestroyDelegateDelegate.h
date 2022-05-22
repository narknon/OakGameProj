#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InstancedDestroyDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInstancedDestroyDelegate, const TArray<FVector>&, InstanceWorldspaceLocations, float, Ratio);

