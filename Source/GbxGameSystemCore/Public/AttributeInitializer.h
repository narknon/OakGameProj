#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EAttributeInitializerUsageMode.h"
#include "AttributeInitializer.generated.h"

UCLASS(Abstract, Blueprintable, Const, HideDropdown)
class GBXGAMESYSTEMCORE_API UAttributeInitializer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EAttributeInitializerUsageMode UsageMode;
    
    UAttributeInitializer();
    UFUNCTION(BlueprintPure)
    static float EvaluateBalanceFormula(float Multiplier, float Level, float Power, float Offset) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    float CalculateAttributeInitialValue(const UObject* Context) const;
    
};

