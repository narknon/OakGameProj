#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_AIGroupCondition.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_AIGroupCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FullfillmentQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPartialFullfillment;
    
    FAIAspectSettings_AIGroupCondition();
};

