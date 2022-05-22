#pragma once
#include "CoreMinimal.h"
#include "GbxMenuInputEvent.h"
#include "GbxGFxDialogBoxOnChoiceMadeDelegate.generated.h"

class UGbxGFxDialogBox;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FGbxGFxDialogBoxOnChoiceMade, UGbxGFxDialogBox*, SourceDialog, const FName, ChoiceNameId, const FGbxMenuInputEvent&, InputInfo);

