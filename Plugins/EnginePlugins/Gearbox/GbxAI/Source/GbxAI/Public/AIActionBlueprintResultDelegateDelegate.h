#pragma once
#include "CoreMinimal.h"
#include "AIActionBlueprintContext.h"
#include "EAIActionResult.h"
#include "AIActionBlueprintResultDelegateDelegate.generated.h"

class AGbxAIController;
class AGbxCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FAIActionBlueprintResultDelegate, AGbxAIController*, AIController, AGbxCharacter*, Character, const FAIActionBlueprintContext&, Context, EAIActionResult, Result);

