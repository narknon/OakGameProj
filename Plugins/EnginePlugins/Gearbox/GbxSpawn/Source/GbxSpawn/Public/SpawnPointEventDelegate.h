#pragma once
#include "CoreMinimal.h"
#include "SpawnPointEventDelegate.generated.h"

class ASpawnPoint;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpawnPointEvent, ASpawnPoint*, SpawnPoint, AActor*, Actor);

