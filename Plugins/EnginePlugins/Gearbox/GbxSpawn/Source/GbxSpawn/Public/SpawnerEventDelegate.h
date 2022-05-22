#pragma once
#include "CoreMinimal.h"
#include "SpawnerEventDelegate.generated.h"

class ASpawner;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnerEvent, ASpawner*, Spawner, AActor*, Actor);

