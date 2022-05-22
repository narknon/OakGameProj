#pragma once
#include "CoreMinimal.h"
#include "SwarmActorEventDelegate.generated.h"

class UOakAISwarmComponent;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSwarmActorEvent, UOakAISwarmComponent*, SwarmComponent, AActor*, SwarmActor);

