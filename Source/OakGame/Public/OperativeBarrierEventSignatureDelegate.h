#pragma once
#include "CoreMinimal.h"
#include "OperativeBarrierEventSignatureDelegate.generated.h"

class AOperativeBarrier;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOperativeBarrierEventSignature, AOperativeBarrier*, Barrier);

