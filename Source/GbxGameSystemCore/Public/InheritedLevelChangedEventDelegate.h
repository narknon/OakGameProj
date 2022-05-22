#pragma once
#include "CoreMinimal.h"
#include "InheritedLevelChangedEventDelegate.generated.h"

class UBalanceStateComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FInheritedLevelChangedEvent, UBalanceStateComponent*, InheritedBalanceStateSource, const int32, OldExperienceLevel, const int32, NewExperienceLevel);

