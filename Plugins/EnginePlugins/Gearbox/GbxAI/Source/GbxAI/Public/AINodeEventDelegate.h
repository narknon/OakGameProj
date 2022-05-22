#pragma once
#include "CoreMinimal.h"
#include "AINodeEventDelegate.generated.h"

class AActor;
class APawn;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAINodeEvent, AActor*, NodeActor, APawn*, ArrivedPawn);

