#pragma once
#include "CoreMinimal.h"
#include "OnCharacterSpawnedDelegate.generated.h"

class APlayerStandIn;
class AOakCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterSpawned, APlayerStandIn*, Target, AOakCharacter*, SpawnedCharacter);

