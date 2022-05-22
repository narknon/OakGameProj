#pragma once
#include "CoreMinimal.h"
#include "TargetingUpdateSignatureDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTargetingUpdateSignature, AActor*, Target);

