#pragma once
#include "CoreMinimal.h"
#include "PhaseTranceEventSignatureDelegate.generated.h"

class UOakActionAbility_PhaseTrance;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPhaseTranceEventSignature, UOakActionAbility_PhaseTrance*, ActionSkill);

