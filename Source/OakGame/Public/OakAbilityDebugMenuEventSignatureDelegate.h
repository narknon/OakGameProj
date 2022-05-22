#pragma once
#include "CoreMinimal.h"
#include "OakAbilityDebugMenuEventSignatureDelegate.generated.h"

class UGbxListItemText_CharacterDebugMenu;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOakAbilityDebugMenuEventSignature, UGbxListItemText_CharacterDebugMenu*, ListItem);

