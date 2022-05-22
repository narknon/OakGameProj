#pragma once
#include "CoreMinimal.h"
#include "GbxInputActionHandlerDynamicSignature_DiscreteDelegate.generated.h"

class UGbxInputActionData_Discrete;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FGbxInputActionHandlerDynamicSignature_Discrete, UGbxInputActionData_Discrete*, Action);

