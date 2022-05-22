#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "GbxParam.h"
#include "AIAspectSettings_GroupLocation.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_GroupLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxBlackboardKeySelector GroupLocationKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam GroupDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UpdatePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUpdateWhileActive;
    
    FAIAspectSettings_GroupLocation();
};

