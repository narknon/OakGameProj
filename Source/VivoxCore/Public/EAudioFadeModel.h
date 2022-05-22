#pragma once
#include "CoreMinimal.h"
#include "EAudioFadeModel.generated.h"

UENUM(BlueprintType)
enum class EAudioFadeModel :  {
    InverseByDistance,
    LinearByDistance,
    ExponentialByDistance,
};

