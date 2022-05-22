#pragma once
#include "CoreMinimal.h"
#include "AIActionBlueprintContext.h"
#include "AIActionBlueprintDelegateDelegate.generated.h"

class AGbxAIController;
class AGbxCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAIActionBlueprintDelegate, AGbxAIController*, AIController, AGbxCharacter*, Character, const FAIActionBlueprintContext&, Context);

