#pragma once
#include "CoreMinimal.h"
#include "GuardianRankChangedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGuardianRankChangedEvent, const int32, OldGuardianRank, const int32, NewGuardianRank);

