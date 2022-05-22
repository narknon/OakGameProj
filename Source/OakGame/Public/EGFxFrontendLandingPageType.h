#pragma once
#include "CoreMinimal.h"
#include "EGFxFrontendLandingPageType.generated.h"

UENUM(BlueprintType)
enum class EGFxFrontendLandingPageType : int32 {
    WantsOnline,
    WantsLan,
    WantsInGameForMail,
};

