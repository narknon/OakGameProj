#pragma once
#include "CoreMinimal.h"
#include "OnHotSpotListChangedDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnHotSpotListChanged, AActor*, OwnerActor);

