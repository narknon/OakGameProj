#pragma once
#include "CoreMinimal.h"
#include "EPlayerDifficultySetting.h"
#include "MenuMapOnDifficultyChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMenuMapOnDifficultyChanged, EPlayerDifficultySetting, NewDifficultySetting);

