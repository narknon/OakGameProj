#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_Loop.h"
#include "AIAspect_Loop.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_Loop : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Loop Settings;
    
    UAIAspect_Loop();
    UFUNCTION()
    static FString GetSettingsDescription(const FAIAspectSettings_Loop& LoopSettings);
    
};

