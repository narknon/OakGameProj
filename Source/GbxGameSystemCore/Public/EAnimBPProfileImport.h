#pragma once
#include "CoreMinimal.h"
#include "EAnimBPProfileImport.generated.h"

UENUM(BlueprintType)
enum class EAnimBPProfileImport : uint8 {
    All,
    FootIK,
    LookAt,
    ForwardDynamics,
};

