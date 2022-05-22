#pragma once
#include "CoreMinimal.h"
#include "SimpleActionSkillTreeItemSignatureDelegate.generated.h"

class UOakPlayerAbilityTreeItemData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimpleActionSkillTreeItemSignature, UOakPlayerAbilityTreeItemData*, ItemData);

