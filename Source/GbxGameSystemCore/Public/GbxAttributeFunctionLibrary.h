#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "GbxAttributeDelegateBindingHandle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnAttributeChangedDelegate__DelegateSignature -FallbackName=OnAttributeChangedDelegateDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeInteger -FallbackName=GbxAttributeInteger
#include "GbxAttributeModifierHandle.h"
#include "EGbxAttributeModifierActionExecOutput.h"
#include "Engine/DataTable.h"
#include "AttributeInitializationData.h"
#include "AttributeEffectData.h"
#include "AttributeBaseValueData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EGbxAttributeModifierType -FallbackName=EGbxAttributeModifierType
#include "GbxAttributeFunctionLibrary.generated.h"

class UGbxAttributeData;
class UAttributeInitializer;
class UObject;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UGbxAttributeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGbxAttributeFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void UnbindFromOnAttributeChanged(const FGbxAttributeDelegateBindingHandle& BindingHandle);
    
    UFUNCTION(BlueprintCallable)
    static void UnbindEventFromOnIntegerAttributeChanged(UPARAM(Ref) FGbxAttributeInteger& Attribute, const FOnAttributeChangedDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void UnbindEventFromOnFloatAttributeChanged(UPARAM(Ref) FGbxAttributeFloat& Attribute, const FOnAttributeChangedDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void UnbindAllEventsFromOnIntegerAttributeChanged(UPARAM(Ref) FGbxAttributeInteger& Attribute);
    
    UFUNCTION(BlueprintCallable)
    static void UnbindAllEventsFromOnFloatAttributeChanged(UPARAM(Ref) FGbxAttributeFloat& Attribute);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void RemoveMultipleAttributeModifiers(UPARAM(Ref) TArray<FGbxAttributeModifierHandle>& ModifierHandles);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void RemoveModifierFromGbxAttribute(UGbxAttributeData* Attribute, UObject* ContextSource, UPARAM(Ref) FGbxAttributeModifierHandle& ModifierHandle, EGbxAttributeModifierActionExecOutput& ModifierActionResult);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool RemoveAttributeModifier(UPARAM(Ref) FGbxAttributeModifierHandle& ModifierHandle);
    
    UFUNCTION(BlueprintCallable)
    static FGbxAttributeDelegateBindingHandle RefreshBindingToOnAttributeChangedEvent(const FGbxAttributeDelegateBindingHandle& BindingHandle, UObject* ContextSource);
    
    UFUNCTION(BlueprintPure)
    static FGbxAttributeInteger MakeGbxAttributeInteger(int32 BaseValue);
    
    UFUNCTION(BlueprintPure)
    static FGbxAttributeFloat MakeGbxAttributeFloat(float BaseValue);
    
    UFUNCTION(BlueprintPure)
    static int32 GetValueOfAttributeAsInteger(const UGbxAttributeData* Attribute, UObject* ContextSource, int32 DefaultValue);
    
    UFUNCTION(BlueprintPure)
    static bool GetValueOfAttributeAsBoolean(const UGbxAttributeData* Attribute, UObject* ContextSource, bool DefaultValue);
    
    UFUNCTION(BlueprintPure)
    static float GetValueOfAttribute(const UGbxAttributeData* Attribute, UObject* ContextSource, float DefaultValue);
    
    UFUNCTION(BlueprintPure)
    static float GetValueFromAttributeDefinedRow(const FDataTableRowHandle& RowHandle, UObject* ContextSource);
    
    UFUNCTION(BlueprintPure)
    static float EvaluateAttributeInitializer(TSubclassOf<UAttributeInitializer> Initializer, UObject* ContextSource);
    
    UFUNCTION(BlueprintPure)
    static float EvaluateAttributeInitializationData(const FAttributeInitializationData& InitializationData, UObject* ContextSource);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_GbxAttributeIntegerValue(const FGbxAttributeInteger& A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_GbxAttributeInteger(const FGbxAttributeInteger& A, const FGbxAttributeInteger& B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_GbxAttributeFloatValue(const FGbxAttributeFloat& A, float B);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_GbxAttributeFloat(const FGbxAttributeFloat& A, const FGbxAttributeFloat& B);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_GbxAttributeModifierHandleToString(const FGbxAttributeModifierHandle& Attribute);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_GbxAttributeIntegerToString(const FGbxAttributeInteger& Attribute);
    
    UFUNCTION(BlueprintPure)
    static int32 Conv_GbxAttributeIntegerToInteger(const FGbxAttributeInteger& Attribute);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_GbxAttributeFloatToString(const FGbxAttributeFloat& Attribute);
    
    UFUNCTION(BlueprintPure)
    static float Conv_GbxAttributeFloatToFloat(const FGbxAttributeFloat& Attribute);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_AttributeInitializationDataToString(const FAttributeInitializationData& InitData);
    
    UFUNCTION(BlueprintPure)
    static void BreakGbxAttributeInteger(const FGbxAttributeInteger& Attribute, int32& Value, int32& BaseValue);
    
    UFUNCTION(BlueprintPure)
    static void BreakGbxAttributeFloat(const FGbxAttributeFloat& Attribute, float& Value, float& BaseValue);
    
    UFUNCTION(BlueprintCallable)
    static void BindEventToOnIntegerAttributeChanged(UPARAM(Ref) FGbxAttributeInteger& Attribute, const FOnAttributeChangedDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void BindEventToOnFloatAttributeChanged(UPARAM(Ref) FGbxAttributeFloat& Attribute, const FOnAttributeChangedDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static FGbxAttributeDelegateBindingHandle BindEventToOnAttributeChanged(UGbxAttributeData* Attribute, UObject* ContextSource, const FOnAttributeChangedDelegate& Delegate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static TArray<FGbxAttributeModifierHandle> ApplyMultipleAttributeEffects(const TArray<FAttributeEffectData>& Effects, UObject* ModifierValueContext, UObject* AttributeToModifyContextSource);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ApplyMultipleAttributeBaseValueData(const TArray<FAttributeBaseValueData>& BaseValueData, UObject* AttributeToSetContextSource, UObject* ValueContext);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static FGbxAttributeModifierHandle ApplyAttributeEffect(const FAttributeEffectData& Effect, UObject* ModifierValueContext, UObject* AttributeToModifyContextSource, EGbxAttributeModifierActionExecOutput& ModifierActionResult);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ApplyAttributeBaseValueData(const FAttributeBaseValueData& BaseValueData, UObject* AttributeToSetContextSource, UObject* ValueContext, EGbxAttributeModifierActionExecOutput& ModifierActionResult);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static FGbxAttributeModifierHandle AddModifierToGbxAttribute(UGbxAttributeData* Attribute, UObject* ContextSource, EGbxAttributeModifierType ModifierType, float ModifierValue, EGbxAttributeModifierActionExecOutput& ModifierActionResult);
    
};

