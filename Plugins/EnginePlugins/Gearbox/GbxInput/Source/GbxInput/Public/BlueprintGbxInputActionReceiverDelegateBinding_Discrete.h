#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "UObject/NoExportTypes.h"
#include "BlueprintGbxInputActionReceiverDelegateBinding_Discrete.generated.h"

class UGbxInputActionData_Discrete;

USTRUCT(BlueprintType)
struct FBlueprintGbxInputActionReceiverDelegateBinding_Discrete {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGbxInputActionData_Discrete* Action;
    
    UPROPERTY()
    TEnumAsByte<EInputEvent> InputEvent;
    
    UPROPERTY()
    FName FunctionNameToBind;
    
    UPROPERTY()
    FGuid BindingID;
    
    GBXINPUT_API FBlueprintGbxInputActionReceiverDelegateBinding_Discrete();
};

