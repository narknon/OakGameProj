#pragma once
#include "CoreMinimal.h"
#include "GbxAbilityResourceSpec.h"
#include "GbxAbilityResourceSpec_ScriptDelegate.generated.h"

class UDelegateProperty;
class UObject;
class UMulticastDelegateProperty;

USTRUCT(BlueprintType)
struct FGbxAbilityResourceSpec_ScriptDelegate : public FGbxAbilityResourceSpec {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    UObject* TargetContext;
    
    UPROPERTY(BlueprintReadWrite)
    UMulticastDelegateProperty* TargetProperty;
    
    UPROPERTY(BlueprintReadWrite)
    UDelegateProperty* DelegateEventProperty;
    
    GBXABILITIES_API FGbxAbilityResourceSpec_ScriptDelegate();
};

