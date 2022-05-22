#pragma once
#include "CoreMinimal.h"
#include "ETestIssueType.generated.h"

UENUM(BlueprintType)
enum class ETestIssueType : uint8 {
    Info,
    Skipped,
    Warning,
    Bug,
    Critical,
    Count,
};

