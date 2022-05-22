#include "CohtmlBlueprintFunctionLibrary.h"

class UCohtmlBaseComponent;
class UCohtmlJSEvent;
class UStructProperty;
class UObject;

void UCohtmlBlueprintFunctionLibrary::TriggerJSEvent(UCohtmlBaseComponent* Component, const FString& EventName, UCohtmlJSEvent* JSEvent) {
}

UCohtmlJSEvent* UCohtmlBlueprintFunctionLibrary::CreateJSEvent(UObject* WorldContextObject) {
    return NULL;
}

void UCohtmlBlueprintFunctionLibrary::AddStructArg(UCohtmlJSEvent* JSEvent, const UStructProperty* Arg) {
}

void UCohtmlBlueprintFunctionLibrary::AddString(UCohtmlJSEvent* JSEvent, const FString& Arg) {
}

void UCohtmlBlueprintFunctionLibrary::AddObject(UCohtmlJSEvent* JSEvent, UObject* Arg) {
}

void UCohtmlBlueprintFunctionLibrary::AddInt32(UCohtmlJSEvent* JSEvent, int32 Arg) {
}

void UCohtmlBlueprintFunctionLibrary::AddFloat(UCohtmlJSEvent* JSEvent, float Arg) {
}

void UCohtmlBlueprintFunctionLibrary::AddByte(UCohtmlJSEvent* JSEvent, uint8 Arg) {
}

void UCohtmlBlueprintFunctionLibrary::AddBool(UCohtmlJSEvent* JSEvent, bool Arg) {
}

void UCohtmlBlueprintFunctionLibrary::AddArrayOfStructs(UCohtmlJSEvent* JSEvent, const TArray<int32>& Arg) {
}

void UCohtmlBlueprintFunctionLibrary::AddArray(UCohtmlJSEvent* JSEvent, const TArray<int32>& Arg, int32 ArrayType) {
}

UCohtmlBlueprintFunctionLibrary::UCohtmlBlueprintFunctionLibrary() {
}

