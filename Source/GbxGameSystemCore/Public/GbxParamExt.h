#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GbxNamedParam.h"
#include "GbxParamExt.generated.h"

class UProperty;
class UObject;

UCLASS(BlueprintType)
class UGbxParamExt : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGbxParamExt();
    UFUNCTION(BlueprintPure)
    static bool IsValueInRangePure(const FGbxParam& Param, float Value, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValueInRange(const FGbxParam& Param, float Value, UObject* Context);
    
    UFUNCTION()
    static FString GetParamPropertyDescription(const FGbxParam& Param, UProperty* Property);
    
    UFUNCTION(BlueprintPure)
    static FText GetParamDescriptionText(const FGbxParam& Param);
    
    UFUNCTION(BlueprintPure)
    static FString GetParamDescription(const FGbxParam& Param);
    
    UFUNCTION(BlueprintPure)
    static FText GetNamedParamDescriptionText(const FGbxNamedParam& Param);
    
    UFUNCTION(BlueprintPure)
    static FString GetNamedParamDescription(const FGbxNamedParam& Param);
    
    UFUNCTION(BlueprintPure)
    static float EvaluatePure(const FGbxParam& Param, UObject* Context);
    
    UFUNCTION(BlueprintPure)
    static float EvaluateIntPure(const FGbxParam& Param, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static float EvaluateInt(const FGbxParam& Param, UObject* Context);
    
    UFUNCTION(BlueprintPure)
    static bool EvaluateBoolPure(const FGbxParam& Param, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateBool(const FGbxParam& Param, UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static float Evaluate(const FGbxParam& Param, UObject* Context);
    
};

