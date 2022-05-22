#pragma once
#include "CoreMinimal.h"
#include "Engine/DynamicBlueprintBinding.h"
#include "GbxBlueprintlegateBinding.h"
#include "GbxEventDelegateBinding.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxEventDelegateBinding : public UDynamicBlueprintBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FGbxBlueprintlegateBinding> DelegateBindings;
    
    UGbxEventDelegateBinding();
};

