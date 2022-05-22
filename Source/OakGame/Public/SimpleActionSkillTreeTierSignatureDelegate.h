#pragma once
#include "CoreMinimal.h"
#include "SimpleActionSkillTreeTierSignatureDelegate.generated.h"

class UOakPlayerAbilityTreeTierData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimpleActionSkillTreeTierSignature, UOakPlayerAbilityTreeTierData*, TierData);

