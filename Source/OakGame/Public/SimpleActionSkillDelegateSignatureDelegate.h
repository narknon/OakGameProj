#pragma once
#include "CoreMinimal.h"
#include "SimpleActionSkillDelegateSignatureDelegate.generated.h"

class UOakActionAbility;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimpleActionSkillDelegateSignature, UOakActionAbility*, ActionAbility);

