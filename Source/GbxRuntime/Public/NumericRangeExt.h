#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NumericRange.h"
#include "NumericRangeExt.generated.h"

UCLASS(BlueprintType)
class UNumericRangeExt : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNumericRangeExt();
    UFUNCTION(BlueprintPure)
    static FString ToValueVarianceString(const FNumericRange& Range);
    
    UFUNCTION(BlueprintPure)
    static FString ToValueString(const FNumericRange& Range);
    
    UFUNCTION(BlueprintPure)
    static FString ToString(const FNumericRange& Range);
    
    UFUNCTION(BlueprintPure)
    static FString ToMinMaxString(const FNumericRange& Range);
    
    UFUNCTION(BlueprintPure)
    static void SetMinimum(FNumericRange& Range, float Minimum);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaximum(FNumericRange& Range, float Maximum);
    
    UFUNCTION(BlueprintCallable)
    static bool IsWithin(const FNumericRange& Range, float Value);
    
    UFUNCTION(BlueprintPure)
    static float GetMinimum(const FNumericRange& Range);
    
    UFUNCTION(BlueprintPure)
    static float GetMaximum(const FNumericRange& Range);
    
    UFUNCTION(BlueprintCallable)
    static float GenerateRandomNumber(const FNumericRange& Range);
    
    UFUNCTION(BlueprintPure)
    static FNumericRange CreateNumericRangeMinMax(float Minimum, float Maximum);
    
    UFUNCTION(BlueprintPure)
    static FNumericRange CreateNumericRange(float Value, float Variance);
    
};

