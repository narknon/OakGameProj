#pragma once
#include "CoreMinimal.h"
#include "OnCurrentProjectileIndexChangedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCurrentProjectileIndexChangedSignature, int32, OldIndex, int32, NewIndex);

