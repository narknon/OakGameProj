#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "AIActionBlueprintContext.h"
#include "AIAspectEnvQueryValueChangedBlueprintDelegateDelegate.generated.h"

class AGbxAIController;
class AGbxCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FAIAspectEnvQueryValueChangedBlueprintDelegate, AGbxAIController*, AIController, AGbxCharacter*, Character, const FAIActionBlueprintContext&, Context, const FEnvQueryResult&, Result);

