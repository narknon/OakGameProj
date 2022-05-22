#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_IsInRangeData.h"
#include "AIAspectIsInRangeAdvancedData.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectIsInRangeAdvancedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAIAspectSettings_IsInRangeData CanStartRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAIAspectSettings_IsInRangeData SucceedRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAIAspectSettings_IsInRangeData FailRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCanStartRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseSucceedRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseFailRange;
    
    FAIAspectIsInRangeAdvancedData();
};

