#pragma once
#include "CoreMinimal.h"
#include "GbxMenuStackWithMenuDelegateDelegate.generated.h"

class UObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGbxMenuStackWithMenuDelegate, UObject*, MenuObject);

