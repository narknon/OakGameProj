#pragma once
#include "CoreMinimal.h"
#include "TransporterSingleCraneEventDelegate.generated.h"

class ATransporterCrane;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTransporterSingleCraneEvent, ATransporterCrane*, Crane);

