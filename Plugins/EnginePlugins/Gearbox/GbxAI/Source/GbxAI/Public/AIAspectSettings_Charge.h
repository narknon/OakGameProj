#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "AIAspectSettings_Charge.generated.h"

class UAIChargeData;

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_Charge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAIChargeData* ChargeData;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FGbxBlackboardKeySelector Target;
    
    FAIAspectSettings_Charge();
};

