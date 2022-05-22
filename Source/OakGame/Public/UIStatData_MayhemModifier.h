#pragma once
#include "CoreMinimal.h"
#include "UIStatData_Numeric.h"
#include "DataTableValueHandle.h"
#include "UIStatData_MayhemModifier.generated.h"

UCLASS(EditInlineNew)
class OAKGAME_API UUIStatData_MayhemModifier : public UUIStatData_Numeric {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDataTableValueHandle DataTableValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSubtractOne;
    
public:
    UUIStatData_MayhemModifier();
};

