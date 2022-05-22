#pragma once
#include "CoreMinimal.h"
#include "ESnapshotExecOutput.generated.h"

UENUM(BlueprintType)
enum class ESnapshotExecOutput : uint8 {
    Succeeded,
    Failed,
};

