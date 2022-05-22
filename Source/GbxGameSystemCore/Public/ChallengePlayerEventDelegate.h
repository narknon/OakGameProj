#pragma once
#include "CoreMinimal.h"
#include "ChallengePlayerEventDelegate.generated.h"

class UChallengesComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChallengePlayerEvent, UChallengesComponent*, PlayerChallenges);

