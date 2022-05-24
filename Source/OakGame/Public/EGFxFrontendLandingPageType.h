#pragma once
#include "CoreMinimal.h"
#include "EGFxFrontendLandingPageType.generated.h"

UENUM()
enum class EGFxFrontendLandingPageType : int32 {
    WantsOnline,
    WantsLan,
    WantsInGameForMail,
};

