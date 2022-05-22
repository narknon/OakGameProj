#pragma once
#include "CoreMinimal.h"
#include "GbxInputActionReceiverDelegateBinding.h"
#include "BlueprintGbxInputActionReceiverDelegateBinding_Continuous_Vector.h"
#include "GbxInputActionReceiverDelegateBinding_Continuous_Vector.generated.h"

UCLASS()
class GBXINPUT_API UGbxInputActionReceiverDelegateBinding_Continuous_Vector : public UGbxInputActionReceiverDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FBlueprintGbxInputActionReceiverDelegateBinding_Continuous_Vector> InputActionReceiverDelegateBindings;
    
    UGbxInputActionReceiverDelegateBinding_Continuous_Vector();
};

