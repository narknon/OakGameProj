#pragma once
#include "CoreMinimal.h"
#include "ActorInWorldIconRangeTransitionDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FActorInWorldIconRangeTransition, AActor*, TransitioningActor, bool, bNewValue);

