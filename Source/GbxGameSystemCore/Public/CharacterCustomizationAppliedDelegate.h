#pragma once
#include "CoreMinimal.h"
#include "CharacterCustomizationAppliedDelegate.generated.h"

class UGbxCustomizationData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterCustomizationApplied, UGbxCustomizationData*, Customization);

