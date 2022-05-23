#pragma once
#include "CoreMinimal.h"
#include "EChallengeCategoryID.generated.h"

UENUM(BlueprintType)
enum class EChallengeCategoryID :  {
    GameCompletion,
    Enemy,
    Weapon,
    Crew,
    Exploration,
    Slaughter,
    Raid,
    ProvingGround,
    Max,
};

