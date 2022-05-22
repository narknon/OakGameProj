#pragma once
#include "CoreMinimal.h"
#include "GbxMenuInputEvent.h"
#include "GbxMenuInputHandlerDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FGbxMenuInputHandler, const FGbxMenuInputEvent&, InputEvent);

