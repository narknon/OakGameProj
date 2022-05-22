#pragma once
#include "CoreMinimal.h"
#include "GbxInputActionReceiverDelegateBinding.h"
#include "BlueprintGbxInputActionReceiverDelegateBinding_Discrete.h"
#include "GbxInputActionReceiverDelegateBinding_Discrete.generated.h"

UCLASS()
class GBXINPUT_API UGbxInputActionReceiverDelegateBinding_Discrete : public UGbxInputActionReceiverDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FBlueprintGbxInputActionReceiverDelegateBinding_Discrete> InputActionReceiverDelegateBindings;
    
    UGbxInputActionReceiverDelegateBinding_Discrete();
};

