#pragma once
#include "CoreMinimal.h"
#include "PhaseTranceGraspEventSignatureDelegate.generated.h"

class AGbxCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPhaseTranceGraspEventSignature, AGbxCharacter*, GraspedTarget);

