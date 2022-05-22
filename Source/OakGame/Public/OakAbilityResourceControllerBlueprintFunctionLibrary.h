#pragma once
#include "CoreMinimal.h"
#include "OakAbilityResourceSpec_SirenRushStack.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OakAbilityResourceSpec_WeaponShotModifier.h"
#include "OakAbilityResourceController_WeaponShotModifier.h"
#include "OakAbilityResourceController_SirenRushStack.h"
#include "OakAbilityResourceControllerBlueprintFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class OAKGAME_API UOakAbilityResourceControllerBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOakAbilityResourceControllerBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void UnregisterWeaponShotModifier(UPARAM(Ref) FOakAbilityResourceController_WeaponShotModifier& Controller, const FOakAbilityResourceSpec_WeaponShotModifier& Spec);
    
    UFUNCTION(BlueprintCallable)
    static void UnregisterSirenRushStack(UPARAM(Ref) FOakAbilityResourceController_SirenRushStack& Controller, const FOakAbilityResourceSpec_SirenRushStack& Spec);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterWeaponShotModifier(UPARAM(Ref) FOakAbilityResourceController_WeaponShotModifier& Controller, const FOakAbilityResourceSpec_WeaponShotModifier& Spec);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterSirenRushStack(UPARAM(Ref) FOakAbilityResourceController_SirenRushStack& Controller, const FOakAbilityResourceSpec_SirenRushStack& Spec);
    
};

