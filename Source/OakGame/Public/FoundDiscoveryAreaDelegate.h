#pragma once
#include "CoreMinimal.h"
#include "FoundDiscoveryAreaDelegate.generated.h"

class UWwiseEvent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFoundDiscoveryArea, FText, DisplayText, UWwiseEvent*, DiscoverySound);

