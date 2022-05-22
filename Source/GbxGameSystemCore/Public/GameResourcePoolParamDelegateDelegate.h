#pragma once
#include "CoreMinimal.h"
#include "GameResourcePoolReference.h"
#include "GameResourcePoolParamDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FGameResourcePoolParamDelegate, FGameResourcePoolReference, ResourcePool);

