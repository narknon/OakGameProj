#pragma once
#include "CoreMinimal.h"
#include "GFxCharacterSelectMenuDelegateDelegate.generated.h"

class UPlayerClassIdentifier;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGFxCharacterSelectMenuDelegate, UPlayerClassIdentifier*, PlayerClassIdentifier);

