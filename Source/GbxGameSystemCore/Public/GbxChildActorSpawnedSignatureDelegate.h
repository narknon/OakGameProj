#pragma once
#include "CoreMinimal.h"
#include "GbxChildActorSpawnedSignatureDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGbxChildActorSpawnedSignature, AActor*, ChildActor);

