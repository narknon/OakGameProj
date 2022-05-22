#pragma once
#include "CoreMinimal.h"
#include "SpawnManagerAsyncRequestBlueprintDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FSpawnManagerAsyncRequestBlueprintDelegate, AActor*, Actor);

