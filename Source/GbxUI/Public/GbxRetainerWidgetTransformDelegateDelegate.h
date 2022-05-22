#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GbxRetainerWidgetTransformDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(FVector2D, FGbxRetainerWidgetTransformDelegate, const FVector2D&, InMousePosAsUV);

