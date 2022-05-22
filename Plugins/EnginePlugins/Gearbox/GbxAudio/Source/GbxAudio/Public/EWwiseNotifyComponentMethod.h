#pragma once
#include "CoreMinimal.h"
#include "EWwiseNotifyComponentMethod.generated.h"

UENUM(BlueprintType)
enum class EWwiseNotifyComponentMethod : int32 {
    UseActorDefaultComponent,
    FindComponentsByTag,
    SpawnComponentAtSocket,
};

