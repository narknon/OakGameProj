#include "GbxAttributeFunctionLibrary.h"
#include "Templates/SubclassOf.h"

class UObject;
class UGbxAttributeData;
class UAttributeInitializer;

void UGbxAttributeFunctionLibrary::UnbindFromOnAttributeChanged(const FGbxAttributeDelegateBindingHandle& BindingHandle) {
}

void UGbxAttributeFunctionLibrary::UnbindEventFromOnIntegerAttributeChanged(FGbxAttributeInteger& Attribute, const FOnAttributeChangedDelegate& Delegate) {
}

void UGbxAttributeFunctionLibrary::UnbindEventFromOnFloatAttributeChanged(FGbxAttributeFloat& Attribute, const FOnAttributeChangedDelegate& Delegate) {
}

void UGbxAttributeFunctionLibrary::UnbindAllEventsFromOnIntegerAttributeChanged(FGbxAttributeInteger& Attribute) {
}

void UGbxAttributeFunctionLibrary::UnbindAllEventsFromOnFloatAttributeChanged(FGbxAttributeFloat& Attribute) {
}

void UGbxAttributeFunctionLibrary::RemoveMultipleAttributeModifiers(TArray<FGbxAttributeModifierHandle>& ModifierHandles) {
}

void UGbxAttributeFunctionLibrary::RemoveModifierFromGbxAttribute(UGbxAttributeData* Attribute, UObject* ContextSource, FGbxAttributeModifierHandle& ModifierHandle, EGbxAttributeModifierActionExecOutput& ModifierActionResult) {
}

bool UGbxAttributeFunctionLibrary::RemoveAttributeModifier(FGbxAttributeModifierHandle& ModifierHandle) {
    return false;
}

FGbxAttributeDelegateBindingHandle UGbxAttributeFunctionLibrary::RefreshBindingToOnAttributeChangedEvent(const FGbxAttributeDelegateBindingHandle& BindingHandle, UObject* ContextSource) {
    return FGbxAttributeDelegateBindingHandle{};
}

FGbxAttributeInteger UGbxAttributeFunctionLibrary::MakeGbxAttributeInteger(int32 BaseValue) {
    return FGbxAttributeInteger{};
}

FGbxAttributeFloat UGbxAttributeFunctionLibrary::MakeGbxAttributeFloat(float BaseValue) {
    return FGbxAttributeFloat{};
}

int32 UGbxAttributeFunctionLibrary::GetValueOfAttributeAsInteger(const UGbxAttributeData* Attribute, UObject* ContextSource, int32 DefaultValue) {
    return 0;
}

bool UGbxAttributeFunctionLibrary::GetValueOfAttributeAsBoolean(const UGbxAttributeData* Attribute, UObject* ContextSource, bool DefaultValue) {
    return false;
}

float UGbxAttributeFunctionLibrary::GetValueOfAttribute(const UGbxAttributeData* Attribute, UObject* ContextSource, float DefaultValue) {
    return 0.0f;
}

float UGbxAttributeFunctionLibrary::GetValueFromAttributeDefinedRow(const FDataTableRowHandle& RowHandle, UObject* ContextSource) {
    return 0.0f;
}

float UGbxAttributeFunctionLibrary::EvaluateAttributeInitializer(TSubclassOf<UAttributeInitializer> Initializer, UObject* ContextSource) {
    return 0.0f;
}

float UGbxAttributeFunctionLibrary::EvaluateAttributeInitializationData(const FAttributeInitializationData& InitializationData, UObject* ContextSource) {
    return 0.0f;
}

bool UGbxAttributeFunctionLibrary::EqualEqual_GbxAttributeIntegerValue(const FGbxAttributeInteger& A, int32 B) {
    return false;
}

bool UGbxAttributeFunctionLibrary::EqualEqual_GbxAttributeInteger(const FGbxAttributeInteger& A, const FGbxAttributeInteger& B) {
    return false;
}

bool UGbxAttributeFunctionLibrary::EqualEqual_GbxAttributeFloatValue(const FGbxAttributeFloat& A, float B) {
    return false;
}

bool UGbxAttributeFunctionLibrary::EqualEqual_GbxAttributeFloat(const FGbxAttributeFloat& A, const FGbxAttributeFloat& B) {
    return false;
}

FString UGbxAttributeFunctionLibrary::Conv_GbxAttributeModifierHandleToString(const FGbxAttributeModifierHandle& Attribute) {
    return TEXT("");
}

FString UGbxAttributeFunctionLibrary::Conv_GbxAttributeIntegerToString(const FGbxAttributeInteger& Attribute) {
    return TEXT("");
}

int32 UGbxAttributeFunctionLibrary::Conv_GbxAttributeIntegerToInteger(const FGbxAttributeInteger& Attribute) {
    return 0;
}

FString UGbxAttributeFunctionLibrary::Conv_GbxAttributeFloatToString(const FGbxAttributeFloat& Attribute) {
    return TEXT("");
}

float UGbxAttributeFunctionLibrary::Conv_GbxAttributeFloatToFloat(const FGbxAttributeFloat& Attribute) {
    return 0.0f;
}

FString UGbxAttributeFunctionLibrary::Conv_AttributeInitializationDataToString(const FAttributeInitializationData& InitData) {
    return TEXT("");
}

void UGbxAttributeFunctionLibrary::BreakGbxAttributeInteger(const FGbxAttributeInteger& Attribute, int32& Value, int32& BaseValue) {
}

void UGbxAttributeFunctionLibrary::BreakGbxAttributeFloat(const FGbxAttributeFloat& Attribute, float& Value, float& BaseValue) {
}

void UGbxAttributeFunctionLibrary::BindEventToOnIntegerAttributeChanged(FGbxAttributeInteger& Attribute, const FOnAttributeChangedDelegate& Delegate) {
}

void UGbxAttributeFunctionLibrary::BindEventToOnFloatAttributeChanged(FGbxAttributeFloat& Attribute, const FOnAttributeChangedDelegate& Delegate) {
}

FGbxAttributeDelegateBindingHandle UGbxAttributeFunctionLibrary::BindEventToOnAttributeChanged(UGbxAttributeData* Attribute, UObject* ContextSource, const FOnAttributeChangedDelegate& Delegate) {
    return FGbxAttributeDelegateBindingHandle{};
}

TArray<FGbxAttributeModifierHandle> UGbxAttributeFunctionLibrary::ApplyMultipleAttributeEffects(const TArray<FAttributeEffectData>& Effects, UObject* ModifierValueContext, UObject* AttributeToModifyContextSource) {
    return TArray<FGbxAttributeModifierHandle>();
}

void UGbxAttributeFunctionLibrary::ApplyMultipleAttributeBaseValueData(const TArray<FAttributeBaseValueData>& BaseValueData, UObject* AttributeToSetContextSource, UObject* ValueContext) {
}

FGbxAttributeModifierHandle UGbxAttributeFunctionLibrary::ApplyAttributeEffect(const FAttributeEffectData& Effect, UObject* ModifierValueContext, UObject* AttributeToModifyContextSource, EGbxAttributeModifierActionExecOutput& ModifierActionResult) {
    return FGbxAttributeModifierHandle{};
}

void UGbxAttributeFunctionLibrary::ApplyAttributeBaseValueData(const FAttributeBaseValueData& BaseValueData, UObject* AttributeToSetContextSource, UObject* ValueContext, EGbxAttributeModifierActionExecOutput& ModifierActionResult) {
}

FGbxAttributeModifierHandle UGbxAttributeFunctionLibrary::AddModifierToGbxAttribute(UGbxAttributeData* Attribute, UObject* ContextSource, EGbxAttributeModifierType ModifierType, float ModifierValue, EGbxAttributeModifierActionExecOutput& ModifierActionResult) {
    return FGbxAttributeModifierHandle{};
}

UGbxAttributeFunctionLibrary::UGbxAttributeFunctionLibrary() {
}

