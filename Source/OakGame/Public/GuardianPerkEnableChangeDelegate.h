#pragma once
#include "CoreMinimal.h"
#include "GuardianPerkEnableChangeDelegate.generated.h"

class UGuardianRankPerkData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGuardianPerkEnableChange, const UGuardianRankPerkData*, ChangedPerk, bool, bEnabled);

