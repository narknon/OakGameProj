#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChallengeNotificationDelegate.generated.h"

class UChallengesComponent;
class UChallenge;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChallengeNotification, UChallengesComponent*, ChallengeComponent, TSubclassOf<UChallenge>, ChallengeClass);

