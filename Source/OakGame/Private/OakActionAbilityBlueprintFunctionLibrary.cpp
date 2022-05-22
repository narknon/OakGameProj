#include "OakActionAbilityBlueprintFunctionLibrary.h"

class UOakActionAbility;
class UObject;

TArray<FGbxActionRegister> UOakActionAbilityBlueprintFunctionLibrary::GetOwnedGbxActionRegisters(UOakActionAbility* Context) {
    return TArray<FGbxActionRegister>();
}

TArray<FGbxActionRegister> UOakActionAbilityBlueprintFunctionLibrary::GetObjectOwnerActionRegisters(UObject* Context) {
    return TArray<FGbxActionRegister>();
}

UOakActionAbilityBlueprintFunctionLibrary::UOakActionAbilityBlueprintFunctionLibrary() {
}

