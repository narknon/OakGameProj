#pragma once
#include "CoreMinimal.h"
#include "ECarnivoraAverageLocation.generated.h"

UENUM(BlueprintType)
enum class ECarnivoraAverageLocation :  {
    FRONT_RIGHT,
    FRONT_LEFT,
    BACK_RIGHT,
    BACK_LEFT,
    NUM,
};

