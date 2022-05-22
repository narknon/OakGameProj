#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_Stance.generated.h"

class UStanceDataProvider;

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_Stance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStanceDataProvider* Stance;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideBlueprint;
    
    FAIAspectSettings_Stance();
};

