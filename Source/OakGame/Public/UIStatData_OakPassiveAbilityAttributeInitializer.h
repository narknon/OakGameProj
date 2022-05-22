#pragma once
#include "CoreMinimal.h"
#include "UIStatData_Numeric.h"
#include "AttributeInitializationData.h"
#include "UIStatData_OakPassiveAbilityAttributeInitializer.generated.h"

UCLASS(EditInlineNew)
class UUIStatData_OakPassiveAbilityAttributeInitializer : public UUIStatData_Numeric {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData Initializer;
    
public:
    UUIStatData_OakPassiveAbilityAttributeInitializer();
};

