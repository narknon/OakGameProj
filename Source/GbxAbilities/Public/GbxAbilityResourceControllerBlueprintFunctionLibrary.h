#pragma once
#include "CoreMinimal.h"
#include "GbxAbilityResourceSpec_ConditionalDamageModifier.h"
#include "GbxAbilityResourceController_ConditionalDamageModifier.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GbxAbilityResourceController_ResourcePoolDelegate.h"
#include "GbxAbilityResourceSpec_ResourcePoolDelegate.h"
#include "GbxAbilityResourceController_ScriptDelegate.h"
#include "GbxAbilityResourceSpec_ScriptDelegate.h"
#include "GbxAbilityResourceControllerBlueprintFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class GBXABILITIES_API UGbxAbilityResourceControllerBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGbxAbilityResourceControllerBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void UnregisterResourcePoolDelegate(UPARAM(Ref) FGbxAbilityResourceController_ResourcePoolDelegate& Controller, const FGbxAbilityResourceSpec_ResourcePoolDelegate& Spec);
    
    UFUNCTION(BlueprintCallable)
    static void UnregisterConditionalDamageModifier(UPARAM(Ref) FGbxAbilityResourceController_ConditionalDamageModifier& Controller, const FGbxAbilityResourceSpec_ConditionalDamageModifier& Spec);
    
    UFUNCTION(BlueprintCallable)
    static void UnregisterAbilityDelegate(UPARAM(Ref) FGbxAbilityResourceController_ScriptDelegate& Controller, const FGbxAbilityResourceSpec_ScriptDelegate& Spec);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterResourcePoolDelegate(UPARAM(Ref) FGbxAbilityResourceController_ResourcePoolDelegate& Controller, const FGbxAbilityResourceSpec_ResourcePoolDelegate& Spec);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterConditionalDamageModifier(UPARAM(Ref) FGbxAbilityResourceController_ConditionalDamageModifier& Controller, const FGbxAbilityResourceSpec_ConditionalDamageModifier& Spec);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterAbilityDelegate(UPARAM(Ref) FGbxAbilityResourceController_ScriptDelegate& Controller, const FGbxAbilityResourceSpec_ScriptDelegate& Spec);
    
};

