#pragma once
#include "CoreMinimal.h"
#include "DamageBlockEventDetails.h"
#include "DamageBlockDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDamageBlockDelegate, const FDamageBlockEventDetails&, Details);

