#pragma once
#include "CoreMinimal.h"
#include "PhaseTranceGraspKilledEventSignatureDelegate.generated.h"

class AGbxCharacter;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPhaseTranceGraspKilledEventSignature, AActor*, Killer, AGbxCharacter*, GraspedTarget);

