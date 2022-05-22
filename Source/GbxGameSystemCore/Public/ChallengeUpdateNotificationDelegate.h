#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChallengeUpdateNotificationDelegate.generated.h"

class UChallengesComponent;
class UChallenge;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FChallengeUpdateNotification, UChallengesComponent*, ChallengeComponent, TSubclassOf<UChallenge>, ChallengeClass, int32, NewValue, bool, bDisplayNotification, bool, bCompleted);

