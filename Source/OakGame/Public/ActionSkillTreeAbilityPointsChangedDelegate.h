#pragma once
#include "CoreMinimal.h"
#include "ActionSkillTreeAbilityPointsChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActionSkillTreeAbilityPointsChanged, int32, RemainingAbilityPoints);

