#pragma once
#include "CoreMinimal.h"
#include "OnDummyProjectileSpawnedSignatureDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDummyProjectileSpawnedSignature, AActor*, SpawnedDummy, int32, Index);

