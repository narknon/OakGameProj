#include "SceneBodySwitchFunctionLibrary.h"

class AActor;
class UObject;

void USceneBodySwitchFunctionLibrary::EnumerateValidSwitchStateNames(FName SwitchName, TArray<FName>& Names) const {
}

void USceneBodySwitchFunctionLibrary::EnumerateValidSwitchNames(TArray<FName>& Names) const {
}

void USceneBodySwitchFunctionLibrary::ChangeSwitchExternal(AActor* Actor, FName SwitchName, FName StateName) {
}

void USceneBodySwitchFunctionLibrary::ChangeSwitch(UObject* Context, FName SwitchName, FName StateName) {
}

USceneBodySwitchFunctionLibrary::USceneBodySwitchFunctionLibrary() {
}

