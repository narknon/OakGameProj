#pragma once
#include "CoreMinimal.h"
#include "OakUseTriggerDelegateDelegate.generated.h"

class AController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOakUseTriggerDelegate, AController*, UsingActor);

