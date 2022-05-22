#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GbxInputActionDynamicHandlerWithActionSignature_AxisDelegate.generated.h"

class UGbxInputActionData_Continuous_Vector;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FGbxInputActionDynamicHandlerWithActionSignature_Axis, UGbxInputActionData_Continuous_Vector*, AxisData, const FVector&, AxisValue);

