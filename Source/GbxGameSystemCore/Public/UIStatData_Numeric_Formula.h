#pragma once
#include "CoreMinimal.h"
#include "UIStatData_Numeric.h"
#include "UIStatData_Numeric_Formula.generated.h"

class UUIStatFormulaEvaluator;

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UUIStatData_Numeric_Formula : public UUIStatData_Numeric {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    UUIStatFormulaEvaluator* Formula;
    
public:
    UUIStatData_Numeric_Formula();
};

