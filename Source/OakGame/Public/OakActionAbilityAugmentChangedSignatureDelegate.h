#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakActionAbilityAugmentChangedSignatureDelegate.generated.h"

class UOakActionAbilityAugmentSlotData;
class UOakActionAbility;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOakActionAbilityAugmentChangedSignature, TSubclassOf<UOakActionAbility>, ActionAbilityClass, UOakActionAbilityAugmentSlotData*, SlotData);

