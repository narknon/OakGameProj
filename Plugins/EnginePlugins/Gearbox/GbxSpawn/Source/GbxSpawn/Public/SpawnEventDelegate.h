#pragma once
#include "CoreMinimal.h"
#include "SpawnEventDelegate.generated.h"

class USpawnerComponent;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnEvent, USpawnerComponent*, SpawnerComponent, AActor*, Actor);

