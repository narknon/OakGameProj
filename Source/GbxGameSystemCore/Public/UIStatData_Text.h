#pragma once
#include "CoreMinimal.h"
#include "UIStatData.h"
#include "UIStatData_Text.generated.h"

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UUIStatData_Text : public UUIStatData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FText Text;
    
    UPROPERTY(Transient)
    FText TextWithAdditionalInput;
    
public:
    UUIStatData_Text();
};

