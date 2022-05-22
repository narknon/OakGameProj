#pragma once
#include "CoreMinimal.h"
#include "GbxComboBoxChangedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FGbxComboBoxChangedDelegate, int32, NewReferenceIndex);

