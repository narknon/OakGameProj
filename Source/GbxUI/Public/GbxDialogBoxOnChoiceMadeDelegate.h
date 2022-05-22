#pragma once
#include "CoreMinimal.h"
#include "GbxDialogBoxOnChoiceMadeDelegate.generated.h"

class UGbxDialogBox;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGbxDialogBoxOnChoiceMade, UGbxDialogBox*, SourceDialog, const FName, ChoiceNameId);

