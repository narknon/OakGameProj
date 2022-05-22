#pragma once
#include "CoreMinimal.h"
#include "SimplePlayerAbilitySlotDelegateSignatureDelegate.generated.h"

class UOakPlayerAbilitySlotData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimplePlayerAbilitySlotDelegateSignature, UOakPlayerAbilitySlotData*, SlotData);

