#pragma once
#include "CoreMinimal.h"
#include "TTSMessageState.generated.h"

UENUM(BlueprintType)
enum class TTSMessageState :  {
    Playing,
    Enqueued,
};

