#pragma once
#include "CoreMinimal.h"
#include "EEchoPerformanceMode.generated.h"

UENUM(BlueprintType)
enum class EEchoPerformanceMode : uint8 {
    EchoCommunication,
    EchoLog,
    VoG,
    EridianWriting,
};

