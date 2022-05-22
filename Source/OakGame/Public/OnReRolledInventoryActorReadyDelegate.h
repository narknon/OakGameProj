#pragma once
#include "CoreMinimal.h"
#include "OnReRolledInventoryActorReadyDelegate.generated.h"

class AActor;
class AOakPlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReRolledInventoryActorReady, AOakPlayerController*, ReRolledOwner, AActor*, ReRolledInventoryActor);

