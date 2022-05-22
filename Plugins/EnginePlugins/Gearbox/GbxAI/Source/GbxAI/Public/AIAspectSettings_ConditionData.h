#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "AIAspectSettings_ConditionData.generated.h"

class UAttributeContextResolver;

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_ConditionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UAttributeContextResolver* ContextResolver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInvertCondition;
    
    FAIAspectSettings_ConditionData();
};

