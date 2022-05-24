#pragma once
#include "CoreMinimal.h"
#include "EBenchmarkDataOutputMode.generated.h"

UENUM(BlueprintType)
enum class EBenchmarkDataOutputMode : uint8 {
    None,
    Summary,
    DetailedCSV,
};

