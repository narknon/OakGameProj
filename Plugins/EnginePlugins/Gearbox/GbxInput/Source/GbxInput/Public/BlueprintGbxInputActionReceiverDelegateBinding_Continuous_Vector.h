#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BlueprintGbxInputActionReceiverDelegateBinding_Continuous_Vector.generated.h"

class UGbxInputActionData_Continuous_Vector;

USTRUCT(BlueprintType)
struct FBlueprintGbxInputActionReceiverDelegateBinding_Continuous_Vector {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGbxInputActionData_Continuous_Vector* Action;
    
    UPROPERTY()
    FName FunctionNameToBind;
    
    UPROPERTY()
    FGuid BindingID;
    
    GBXINPUT_API FBlueprintGbxInputActionReceiverDelegateBinding_Continuous_Vector();
};

