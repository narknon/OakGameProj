#pragma once
#include "CoreMinimal.h"
#include "LevelChangedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLevelChangedEvent, const int32, OldExperienceLevel, const int32, NewExperienceLevel);

