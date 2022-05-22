#pragma once
#include "CoreMinimal.h"
#include "GameResourcePoolReference.h"
#include "GameResourcePoolUpdatedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameResourcePoolUpdatedDelegate, FGameResourcePoolReference, ResourcePool);

