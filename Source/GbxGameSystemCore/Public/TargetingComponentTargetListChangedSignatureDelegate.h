#pragma once
#include "CoreMinimal.h"
#include "TargetingComponentTargetListChangedSignatureDelegate.generated.h"

class UTargetingComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTargetingComponentTargetListChangedSignature, UTargetingComponent*, TargetingComponent);

