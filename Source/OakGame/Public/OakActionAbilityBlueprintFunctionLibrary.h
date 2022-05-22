#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GbxActionRegister.h"
#include "OakActionAbilityBlueprintFunctionLibrary.generated.h"

class UOakActionAbility;
class UObject;

UCLASS(BlueprintType)
class UOakActionAbilityBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOakActionAbilityBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static TArray<FGbxActionRegister> GetOwnedGbxActionRegisters(UOakActionAbility* Context);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGbxActionRegister> GetObjectOwnerActionRegisters(UObject* Context);
    
};

