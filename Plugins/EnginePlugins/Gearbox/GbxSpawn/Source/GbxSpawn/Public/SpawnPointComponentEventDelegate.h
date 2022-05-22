#pragma once
#include "CoreMinimal.h"
#include "SpawnPointComponentEventDelegate.generated.h"

class USpawnPointComponent;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnPointComponentEvent, USpawnPointComponent*, SpawnPointComponent, AActor*, Actor);

