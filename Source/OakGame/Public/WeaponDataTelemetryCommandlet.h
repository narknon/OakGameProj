#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "WeaponDataTelemetryCommandlet.generated.h"

UCLASS(NonTransient)
class OAKGAME_API UWeaponDataTelemetryCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UWeaponDataTelemetryCommandlet();
};

